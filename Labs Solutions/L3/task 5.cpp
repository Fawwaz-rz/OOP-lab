//#include<iostream>
//using namespace std;
//void print(int** pt, int row, int c)
//{
//	cout << "array is  \n";
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << pt[i][j];
//		}cout << endl;
//	}
//}
//void fill(int** p, int r)
//{
//	int col = 5;
//	for (int count = 0; count < r; ++count)
//	{
//		cout << "enter col of row   " << count<<endl;;
//		cin >> col;
//		p[count] = new int[col];
//		cout << "enter col entities   \n";
//		for (int i = 0; i < col; i++)
//		{
//			cin >> p[count][i];
//		}
//	}
//	print(p, r, col);
//}
//
//int main()
//{
//	int row = 0, col = 0;
//	cout << "enter row\n";
//	cin >> row;
//	int** ptr = new int* [3];
//	fill(ptr,row);
//	delete[]ptr;
//	ptr = NULL;
//}
//
