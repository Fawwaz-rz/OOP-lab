//#include<iostream>
//#include<conio.h>
//using namespace std;
//int main()
//{
//	int a = 5, b = 10;
//	int c;
//	int* p1, * p2;
//	p1 = &a;//address of a is stored in pointer1
//	p2 = &b;//address of b is stored in pointer2
//	c = *p1;//pointer 1 value (5) is stored in c
//	cout << "*(p1++) =" << *(p1++) << endl;//it post increments the value and print value before incrementing
//	cout << "value of p1 " << p1 << endl;//print address after post incrementing like address of 6
//	cout << "*(++p1) =" << *(++p1) << endl;//pre increments the address due to which garbage value is sotred in the pointer value of 7
//	cout << "value of p1 " << p1 << endl;//print address which is of garbage after pre incrementing  
//	cout << "(*p1)++ =" << (*p1)++ << endl;//it post incremnets in the value but prints the address of previous value
//	cout << "value of p1 " << p1 << endl;//prints the address of 5 not 6
//	cout << "++(*p1) =" << ++(*p1) << endl;//pre increment the value like 6+1=7 and prints the address of 7
//	cout << "value of p1 " << p1 << endl;//prints the address of 7
//	return 0;
//}