#include<iostream>
#include<string>
using namespace std;
int main()
{
	int count=0,c=0;
	string str;
	getline(cin, str);
	char ch[100][100];
	int a[10]={0};
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '32' || str[i] == '.') {
			count++;
		}
	}
	char ** ptr = new char* [count];
	for (int i = c; i < count; i++)
	{
		if (str[i] != '32' || str[i] != '.')
		{
			c++;
		}
		for (int j = 0; j < count; j++)
		{
			ptr[count] = new char[c];
			ch[i][j] = str[i];
		}
	}
	for (int  i = 0; i < count; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << ch[i][j];
		}
	}
	for (int i = 0; i < c; i++)
	{
		delete ptr[i];
	}delete[]ptr;
}