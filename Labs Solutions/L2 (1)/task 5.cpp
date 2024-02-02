#include<iostream>
using namespace std;
void print(int **ptr2)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << (*(ptr2 + i) + j);
		}
		cout << endl;
	}
}
int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int *ptr = *a;
	int **ptr2 = &ptr;
	print(ptr2);

	system("pause");
}