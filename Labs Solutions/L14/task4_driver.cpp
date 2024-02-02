////MAIN file (source.cpp)
//#include<iostream>
//#include<string>
////#include"interface4.h"
//using namespace std;
//int main()
//{
//	char ch = 'a';
//	int feet = 0, inch = 0, cm = 0;
//
//	do
//	{
//		try
//		{
//			cout << "\nplease enter feets  :  ";
//			cin >> feet;
//			ch = feet;
//			if (feet <= 0/*||ch<'/'&&ch>':'*/)
//			{
//				throw feet;
//			}
//		}
//		catch (int)
//		{
//			cout << "Exception caught :  feet is less than or equal to zero ";
//		}
//		try
//		{
//			cout << "\npleas enter inch :  ";
//			cin >> inch;
//			if (inch <= 0 /*|| ch < '/' && ch>':'*/)
//			{
//				throw inch;
//			}
//		}
//		catch (int)
//		{
//			cout << "Exception caught :  inch is less than or equal to zero ";
//		}
//
//	} while (feet<=0||inch<=0);
//
//	feet *= 12;
//	inch *= 2.54;
//	cm = feet + inch;
//	cout << "the cm are  :   " << cm << endl;
//}