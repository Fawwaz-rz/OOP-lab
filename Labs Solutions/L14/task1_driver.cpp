////MAIN file (source.cpp)
//#include<iostream>
//#include<string>
//#include"interface1.h"
//
//using namespace std;
//
//
//int main()
//{
//	
//	try {
//		
//			float num = 0;
//			float zero = 0;
//			cout << "enter the number :  ";
//			cin >> num;
//			if (num / zero==0)
//			{
//			throw "sdf";
//		}
//	}
//	catch(string)
//	{
//		cout << "num is divided by zero \n";
//	}
//	try {
//		int num1 = 0;
//		float numf = 0;
//		char ch;
//		string str;
//		int temp=0;
//		cout << "what you want to enter 1. integer\n2.float\n3.character\n4.string\n ";
//		cin >> temp;
//			switch (temp)
//			{
//			case 1:
//			{
//				throw 1;
//				break;
//			}
//			case 2:
//			{
//				throw 1.1;
//				break;
//			}
//			case 3:
//			{
//				throw 'a';
//				break;
//			}
//			case 4:
//			{
//				throw str;
//				break;
//			}
//			default:
//				cout << "entered incorrect value ";
//				break;
//			}
//	}
//	catch (int)
//	{
//		cout << "int exception caught ";
//	}
//	catch (float)
//	{
//		cout << "float exception caught ";
//	}
//	catch (char)
//	{
//		cout << "char exception caught ";
//	}
//	catch (string)
//	{
//		cout << "string exception caught ";
//	}
//	catch (...)
//	{
//		cout << " exception caught ";
//	}
//}