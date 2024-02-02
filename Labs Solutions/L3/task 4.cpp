//#include<iostream>
//using namespace std;
//void Sum(int** p, int row, int col, int** q, int row2, int col2) // this function will take sum of two matricesand return the resultant matrix.
//{
//	int c[2][2] = { 0 };
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			c[i][j]=p[i][j] + q[i][j];
//		}
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			cout << c[i][j]<<"  ";
//		}
//		cout << endl;
//	}
//}
//void Display(int** p, int row, int col)// this function will output the p matrix to console
//{
//	for (int  i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << p[i][j];
//		}
//	}
//	int row2 = 2, col2 = 2;
//	int a[2][2] = { {1,2},{3,4} };
//	int** q = new int*[2] ;
//	for (int i = 0; i < row; i++)
//	{
//		q[i] = new int[2];
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			q[i][j] = i;
//		}
//	}
//	 Sum( p,  row,  col,q,  row2,  col2);
//}
//void input(int** p, int row, int col)// this function will input the p matrix
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			p[i] = new int[col];
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cin >> p[i][j];
//		}
//	}
//	Display(p, row, col);
//}
//int main()
//{
//	int row=0,col=0;
//	cout << "enter rows\n";
//	cin >> row;
//	cout << "enter columns\n";
//	cin >> col;
//	int** ptr = new int* [row];
//	 input(ptr, row, col);
//}