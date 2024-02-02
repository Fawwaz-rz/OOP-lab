//#include <iostream>
//#include <string>
//using namespace std;
//class employ {
//public:
//	employ() : bankaccount("123456") {}
//	employ(string emid, string emname, string emdp, string emgrade) : id(emid), name(emname),
//		department(emdp), bankaccount("123456"), Grade(emgrade) {}
//	
//	void displayData() const
//	{
//		cout << "id is : " << id << endl;
//		cout << "name is: " << name << endl;
//		cout << "department is: " << department << endl;
//		cout << "Bank Account Number is: " << bankaccount << endl;
//		cout << "Grade is: " << Grade << endl;
//	}
//	void inputData()
//	{
//		cout << "Enter the id : ";
//		getline(cin, id);
//		cout << "Enter the name: ";
//		getline(cin, name);
//		cout << "Enter the department: ";
//		getline(cin, department);
//		cout << "Enter the Grade : ";
//		getline(cin, Grade);
//	}
//	
//	~employ()
//	{
//		cout << "Destructor is called for the employ number: " << name << endl;
//	}
//private:
//	string department;
//	const string bankaccount;
//	string id;
//	string name;
//	string Grade;
//};
//
//int main()
//{
//	employ* ptr1 = new employ();
//	employ* ptr2 = new employ();
//	employ* ptr3 = new employ();
//
//	ptr1->inputData();
//	ptr2->inputData();
//	ptr3->inputData();
//	ptr1->displayData();
//	ptr2->displayData();
//	ptr3->displayData();
//	delete ptr1, ptr2,ptr3;
//	system("pause");
//	return 0;
//}