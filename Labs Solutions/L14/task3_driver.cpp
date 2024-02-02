////MAIN file (source.cpp)
//#include<iostream>
//#include<string>
//#include"interface3.h"
//
//using namespace std;
//
//
//int main()
//{
//	
//	int lowerLimit=0;
//	try
//	{
//		cout << "Entering the try block." << endl;
//		cin >> lowerLimit;
//		if (lowerLimit < 100)
//			throw exception("Lower limit violation.");
//		cout << "Exiting the try block." << endl;
//	}
//	catch (exception eObj)
//	{
//		cout << "Exception: " << eObj.what() << endl;
//	}
//	cout << "After the catch block" << endl;
//	/*
//	a.The value of lowerLimit is 50 ?
//		when lower limit is 50 than it throws an exception of exception class and catch block catches the exception of exception class, this makes an object of it and executes the statement written in the catch block and then exceutes the outer cout;it also don't execute the statement written below throw bcz after throw statement execution it does not execute the remainig below it;
//		b.The value of lowerLimit is 150 ?
//		when lower limit is 150 than it doesn't throws an exception of exception class ,it also  execute the statement written below throw bcz when throw statement isn't executed then it executes the statemnet below it and outer catch block;
//		 
//		*/
//}