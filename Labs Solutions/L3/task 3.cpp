//#include<iostream>
//using namespace std;
//int *copyfun(int a[4], int s)
//{
//	int copy[4] = {0};
//	int* ptr = new int[2];
//	for (int i = 0; i < s; i++)
//	{
//		ptr[i] = a[i];
//		copy[i] = ptr[i];
//	}cout << "copied array is    \n";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << copy[i];
//	}
//	return ptr;
//}
//int main()
//{
//	int size;
//	int a[4] = { 1,2,3,4};
//	size = sizeof(a) / sizeof(a[0]);
//	cout << copyfun(a, size);
//	cout << endl;
//	int* ptr = copyfun(a, size);
//	cout << endl;
//	delete ptr;
//	ptr = NULL;
//}