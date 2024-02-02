//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 3,9,1,15,3 };
//	int *ptr;
//	ptr = a;
//	cout << "addresses and    values     with increment are  :   "<<endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << &ptr[i] <<"      "<<ptr[i] << endl;
//
//	}
//	cout << "  ------------OR---------------"<<endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << &*(ptr + i) << "      " << *(ptr + i) << endl;
//
//		}
//	cout << "addresses and    values    with decrement are  :   " << endl;
//	for (int i = 4; i >= 0; i--)
//	{
//		cout << &ptr[i] << "      " << ptr[i] << endl;
//
//	}
//	cout << "  ------------OR---------------"<<endl;
//	for (int i = 4; i >= 0; i--)
//	{
//		cout << &*(ptr + i) << "      " << *(ptr + i)<< endl;
//
//	}
//
//
//
//	for (int i = 4; i >= 0; i--)
//	{
//		cout << &ptr[i] << "      " << ptr[i] << endl;
//
//	}
//	cout << endl << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int  j = i+1; j < 5; j++)
//		{
//			if (ptr[i] == ptr[j])
//			{
//				cout << (*ptr + i)<< "is equal"<<endl;
//			 }
//			
//		}	
//	}
//
//
//	system("pause");
//}