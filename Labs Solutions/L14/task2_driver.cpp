////MAIN file (source.cpp)
//#include<iostream>
//#include<string>
//#include"interface2.h"
//using namespace std;
//int multi(int n1, int n2, int d1, int d2)
//{
//	cout << " the multiplication is  :   ";
//	return (n1 / d1)* (n2 / d2);
//}
//int add(int n1, int n2, int d1, int d2)
//{
//	cout << " the sum is  :   ";
//	return (n1 / d1) + (n2 / d2);
//}
//int sub(int n1, int n2, int d1, int d2)
//{
//	cout << " the subtraction is  :   ";
//	return (n1 / d1) - (n2 / d2);
//}
//int div(int n1, int n2, int d1, int d2)
//{
//	cout << " the division is  :   ";
//	return (n1 / d1) * (d2 / n2);
//}
//int main()
//{
//	int numerator1 = 0,denominator1=0,temp=0, numerator2 = 0, denominator2 = 0;
//	do
//	{
//		try
//		{
//			cout << "enter numerator1  :  ";
//			cin >> numerator1;
//			if (numerator1 < 0)
//			{
//				throw numerator1;
//			}
//
//		}
//		catch (int)
//		{
//			cout << "   Exception caught: numerator1 must not be lass than zero!    ";
//		}
//		try
//		{
//			cout << "enter denominator1 ";
//			cin >> denominator1;
//			if (denominator1 <= 0)
//			{
//				throw denominator1;
//			}
//
//		}
//		catch (int)
//		{
//			cout << "   Exception caught: denominator1 must not be zero!    ";
//		}
//		try
//		{
//			cout << "enter numerator2  :  ";
//			cin >> numerator2;
//			if (numerator2 < 0)
//			{
//				throw numerator2;
//			}
//
//		}
//		catch (int)
//		{
//			cout << "   Exception caught: numerator2   must not be lass than zero!    ";
//		}
//		try
//		{
//			cout << "enter denominator2 ";
//			cin >> denominator2;
//			if (denominator2 <= 0)
//			{
//				throw denominator2;
//			}
//
//		}
//		catch (int)
//		{
//			cout << "   Exception caught: denominator2 must not be zero!    ";
//		}
//		
//		
//	} while (numerator1<0||denominator1<=0||numerator2 < 0 ||denominator2 <= 0);
//
//	do
//	{
//		cout << "\n1. addition\n2.subtraction\n3. multiplication\n4. division\n5. to Exit\n";
//		cin >> temp;
//		switch (temp)
//		{
//		case 1:
//		{
//			cout << add(numerator1, numerator2, denominator1, denominator2);
//			break;
//		}
//		case 2:
//		{
//			cout << sub(numerator1, numerator2, denominator1, denominator2);
//			break;
//		}
//		case 3:
//		{
//			cout << multi(numerator1, numerator2, denominator1, denominator2);
//
//			break;
//		}
//		case 4:
//		{cout << div(numerator1, numerator2, denominator1, denominator2);
//
//			break;
//		}
//		case 5:
//		{
//			break;
//		}
//		default:
//			cout << "invalid input";
//			break;
//		}
//
//	} while (temp!=5);
//}