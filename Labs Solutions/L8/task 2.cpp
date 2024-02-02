#include<iostream>
using namespace std;
class matrix
{
private:
	int row;
	int col;
	int a1[2][3];
	int a2[2][3];
	int a3[2][3];
public:
	void constructor(int row, int col, int **ptr,int**ptr3);
	void inputdata(int row,int col,int **ptr1);
	void addmat();
	//~matrix();
};
void matrix::addmat()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a3[i][j] = a1[i][j] + a2[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a3[i][j]<<"  ";
		}
		cout << endl;
	}
	
}
void matrix:: inputdata (int row,int col,int **ptr1)
{
	for (int i = 0; i < row; i++)
	{
		*(ptr1 + i) = new int[3];
	}
	cout << "\nenter values \n ";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> *(*(ptr1 + i) + j);
			
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			a2[i][j] = *(*(ptr1 + i) + j);
		}
	}
	/*for (int i = 0; i < 3; i++)
	{
		delete[] ptr1[i];
	}delete[] ptr1;*/
}
void matrix:: constructor(int row, int col, int **ptr,int **ptr3)
{
	for (int i = 0; i < row; i++)
	{
		*(ptr + i) = new int[3];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(ptr + i) + j) = 1;
			a1[i][j] = *(*(ptr + i) + j);
		}
	}
	//for (int i = 0; i < 3; i++)
	//{
	//	 delete[] ptr[i];
	//}
	//delete[] ptr;

	for (int i = 0; i < row; i++)
	{
		*(ptr3 + i) = new int[3];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(ptr3 + i) + j) = 0;
			a3[i][j] = *(*(ptr3 + i) + j);
		}
	}
	/*for (int i = 0; i < 3; i++)
	{
		delete[] ptr3[i];
	}delete[] ptr3;*/
}

int main()
{
	int* ptr1 = new int[4];
	*(ptr1 + 0) = 0;
	int** pt = new int* [2];
	int** ptr2 = new int*[2];
	int** ptr3 = new int* [2];
	matrix obj;
	obj.constructor(2, 3,ptr2,ptr3);
	obj.inputdata(2,3,pt);
	obj.addmat();
}