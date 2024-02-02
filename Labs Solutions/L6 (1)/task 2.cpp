//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//private:
//	string name;
//	const string date;
//	 int cnic;
//	string status;
//	int month;
//	int day;
//	int year;
//public:
//	 int getcnic( int cnic);
//	const void getdob();
//	const void display();
//	void getname(string name);
//	void output(int month, int day, int year);
//	void setdate(int m, int d, int y);
//};
//void Person::setdate(int m, int d, int y)
//{
//
//	month = m;
//	month = (m >= 1 && m <= 12) ? m : 0;
//
//	day = (d >= 1 && d < 31) ? d : 0;
//
//	year = (y >= 0) ? y : 0;
//	getname(name);
//	
//}
//void Person::output(int month, int day, int year)
//{
//	switch (month)
//	{
//	case 1:
//	{
//		cout << day << "  january " << " " << year;
//		break;
//	}
//	case 2:
//	{
//		
//		cout << day << "  february " << " " << year;
//		break;
//	}
//	case 3:
//	{
//	
//		cout << day << "  march " << " " << year;
//		break;
//	}
//	case 4:
//	{
//		
//		cout << day << "  april " << " " << year;
//		break;
//	}
//	case 5:
//	{
//	
//		cout << day << "  may " << " " << year;
//		break;
//	}
//	case 6:
//	{
//		
//		cout << day << "  june " << " " << year;
//		break;
//	}
//	case 7:
//	{
//		
//		cout << day << "  july " << " " << year;
//		break;
//	}
//	case 8:
//	{
//		
//		cout << day << "  august " << " " << year;
//		break;
//	}
//	case 9:
//	{
//		
//		cout << day << "  september " << " " << year;
//		break;
//	}
//	case 10:
//	{
//	
//		cout << day << "  october " << " " << year;
//		break;
//	}
//	case 11:
//	{
//		
//		cout << day << "  november " << " " << year;
//		break;
//	}
//	case 12:
//	{
//	
//		cout << day << "  december " << " " << year;
//		break;
//	}
//	default:
//		cout << "wrong getdob ";
//		break;
//	}
//}
//const void Person::getdob()
//{
//	int m, d, y;
//	cout << "enter months  : ";
//	cin >> m;
//	cout << "\nenter day  : ";
//	cin >> d;
//	cout << "\nenter year  : ";
//	cin >> y;
//	month = m;
//	day = d;
//	year = y;
//	setdate(m, d, y);
//
//}
// int Person:: getcnic( int cnic)
//{
//	cout << "\n\n\nenter cnic";
//	cin >> cnic;
//	cout << cnic;
//	return cnic;
//	
//}
//void Person::getname(string name)
//{
//	cout << "enter name";
//	cin >> name;
//	getcnic(cnic);
//	cout << "\n Mr." << name<<"  ";
//	output(month, day, year);
//	cout << "   "<< cnic;
//	
//}
//
//
//int main()
//{
//	Person ob;
//	ob.getdob();
//}