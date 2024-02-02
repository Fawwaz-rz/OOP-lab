#include<iostream>
#include<string>
using namespace std;
class bank
{
	private:
	double cbal;
	double intrate;
	double intearn;
	 int trans;
	 int count;
public:
	void setdata(double cbal1, double intrate1);
	void setintrate(double intrate2);
	void makedeposit(double amountdep);
	void withdraw(double amtwd);
	void calcinterest()
	{
		intearn = cbal*(intrate/100);
		cbal+=intearn;
	}
	void countini(int count,int trans1);
	void inccount()
	{
		count++;
	}
	double getcount()
	{
		return count;
	}
	double getinterestrate(double intrate);
	double getbalance(double cbal);
	double getinterest(double intearn);
	int gettransactions(int trans1);
};
void bank::countini(int c,int trans1)
{
	count = c;
	trans = trans1;
}
void bank::setdata(double cbal1, double intrate1)
{
	cbal = cbal1;
	intrate = intrate1;
}
void bank::makedeposit(double amountdep)
{
	cbal += amountdep;
	trans++;
}
void bank:: withdraw(double amtwd)
{
	if (amtwd < cbal)
	{
		cbal -=amtwd;
		trans++;
	}
	else {
		cout << "error";
	}
}
double bank:: getinterestrate(double intrate3)
{
	cout << "\nenter interest rate :   ";
	cin >> intrate3;
	intrate = intrate3;
	return intrate;
}
double bank::getbalance(double cbal1)
{
	return cbal;
}
double bank::getinterest(double intearn1)
{
	return intearn;
}
int bank::gettransactions(int trans1)
{
	inccount();
	trans += trans1;
	return trans;
}
int main()
{


	double temp = (4.5);
   bank account;
   account.countini(0,0);
   account.setdata(0, temp);
   int choice=0,amoun=0;
   double amount=0, rate=0;
   do {
	   cout << "1. Make a deposit" << endl;
	   cout << "2. Make a withdrawal" << endl;
	   cout << "3. Calculate interest" << endl;
	   cout << "4. Get current balance" << endl;
	   cout << "5. Get current interest rate" << endl;
	   cout << "6. Get current interest earned" << endl;
	   cout << "7. Get number of transactions" << endl;
	   cout << "8. Exit" << endl;
	   cout << "Enter your choice: ";
	   cin >> choice;
	   switch (choice) {
	   case 1:
		   cout << "Enter the amount to deposit: ";
		   cin >> amount;
		   account.makedeposit( amount);
		   break;
	   case 2:
		   cout << "Enter the amount to withdraw: ";
		   cin >> amount;
		   account.withdraw(amount);
		   break;
	   case 3:
		   account.calcinterest();
		   cout << "Interest calculated and added to the account." << endl;
		   break;
	   case 4:
		   cout << "Current balance: $" << account.getbalance(amount)<<endl;
		   break;
	   case 5:
		   cout << "Current interest rate: " << account.getinterestrate(amount) << "%" << endl;
		   break;
	   case 6:
		   cout << "Interest earned for the current period: $" << account.getinterest(amount) << endl;
		   break;
	   case 7:
		   cout << "Number of transactions for the current period: " << account.gettransactions(amoun) << endl;
		   break;
	   case 8:
		   cout << "Exiting program..." << endl;
		   break;
	   default:
		   cout << "Invalid choice. Please try again." << endl;
	   }
   } while (choice != 8);
}