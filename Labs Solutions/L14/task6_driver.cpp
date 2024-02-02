//#include <iostream>
//#include"interface6.h"
//#include <string>
//using namespace std;
//int main()
//{
//	invalidday objd;
//	invalidmonth objm;
//	int d = 0, m = 0,y=0;
//	string dateOfBirth;
//	int month, day, year;
//
//	////two codes for the programme
//	/////as like syntax 
//	try
//	{
//
//		cout << "Enter date of birth (format: MM-DD-YYYY): ";
//		scanf_s("%d-%d-%d", &month, &day, &year);
//
//		if (month < 1 || month>12)
//		{
//			throw invalidmonth();
//		}
//		if (day < 1 || day>31)
//		{
//			throw invalidday();
//		}
//		if (year < 0)
//		{
//			throw InvalidYear();
//		}
//		switch (month)
//		{
//		case 1:
//			cout << "January ";
//			break;
//		case 2:
//			cout << "February ";
//			break;
//		case 3:
//			cout << "March ";
//			break;
//		case 4:
//			cout << "April ";
//			break;
//		case 5:
//			cout << "May ";
//			break;
//		case 6:
//			cout << "June ";
//			break;
//		case 7:
//			cout << "July ";
//			break;
//		case 8:
//			cout << "August ";
//			break;
//		case 9:
//			cout << "September ";
//			break;
//		case 10:
//			cout << "October ";
//			break;
//		case 11:
//			cout << "November ";
//			break;
//		case 12:
//			cout << "December ";
//			break;
//		}
//
//		cout << day << ", " << year << endl;
//
//	}
//	catch (const exception& ex)
//	{
//		cout << "Error: " << ex.what() << endl;
//	}
//
//
//	//as like simple
//	
//	
//	///*do
//	//{
//	//	try
//	//	{
//	//		cout << "please enter the day :  ";
//	//		cin >> d;
//	//		if (d <= 1&&d >= 31 )
//	//		{
//	//			throw objd;
//	//		}
//	//	}
//	//	catch (invalidday d)
//	//	{
//	//		d.excepd();
//	//	}
//	//	try
//	//	{
//	//		cout << "please enter the month :  ";
//	//		cin >> m;
//	//		if (m >= 12 && m <= 1)
//	//		{
//	//			throw objm;
//	//		}
//	//	}
//	//	catch (invalidmonth m)
//	//	{
//	//		m.excep();
//	//	}
//	//	cout << "please enter the year  :  ";
//	//	cin >> y;
//
//	//} while (d<=1||d>=31||m<=1||m>=12);
//
//	//switch (m)
//	//{
//	//case 1:
//	//{
//	//	cout << "january " << d << " , " << y;
//	//	break;
//	//}
//	//case 2:
//	//{
//	//	cout << "february " << d << " , " << y;
//	//	break;
//	//}
//	//case 3:
//	//{
//	//	cout << "march " << d << " , " << y;
//	//	break;
//	//}
//	//case 4:
//	//{
//	//	cout << "april" << d << " , " << y;
//	//	break;
//	//}
//	//case 5:
//	//{
//	//	cout << "may " << d << " , " << y;
//	//	break;
//	//}
//	//case 6:
//	//{
//	//	cout << "june " << d << " , " << y;
//	//	break;
//	//}
//	//case 7:
//	//{
//	//	cout << "july " << d << " , " << y;
//	//	break;
//	//}
//	//case 8:
//	//{
//	//	cout << "august " << d << " , " << y;
//	//	break;
//
//	//}
//	//case 9:
//	//{
//	//	cout << "september " << d << " , " << y;
//	//	break;
//	//}
//	//case 10:
//	//{
//	//	cout << "october " << d << " , " << y;
//	//	break;
//	//}
//	//case 11:
//	//{
//	//	cout << "november " << d << " , " << y;
//	//	break;
//	//}
//	//case 12:
//	//{
//	//	cout << "december " << d << " , " << y;
//	//	break;
//	//}
//	//default:
//	//	cout << "invalid input";
//	//	break;
//	//}*/
//}