//#include<iostream>
//#include<iomanip>
//using namespace std;
//const int s = 10;
//int main()
//{
//	double a[s] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9},var;   //a
//	double *nptr = &var;    //b
//	//c
//	for (int i = 0; i < 10; i++)
//	{
//		cout << setprecision(1) << right << fixed << a[i];
//
//	}
//
//	//d
//	nptr = &a[0];
//	nptr = a;
//	//e
//
//	for (int  i = 0; i < 10; i++)
//	{
//		cout << *(nptr + i)<<endl;
//	}
//
//	//f
//
//
//
//	//g
//	for (int i = 0; i < 10; i++)
//	{
//		cout << setprecision(1) << right << fixed << nptr[i];
//
//	}
//
//	//h
//	nptr = &a[4];
//
//	
//
//	//i
//	nptr = a;
//	cout <<"address is    "<< &*(nptr + 8);
//	cout << "value is    " << *(nptr + 8);
//
//
//	//j
//
//
//	nptr = &a[5];
//	nptr -= 4;
//	cout << "address is    " <<nptr ;
//	cout << "value is    " << *nptr;
//	system("pause");
//}