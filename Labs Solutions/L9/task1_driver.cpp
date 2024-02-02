//#include<iostream>
//#include<string>
//using namespace std;
//#include "interface.h";
//int main()
//{
//	student objs;
//	graduate objg;
//	undergraduate obju;
//	faculty objf;
//	int num = 0,ag=0,extension=0,co=0;
//	float g=0;
//	string a, b,c;
//	cout << "who's data do you want to enter  : n \n 1.grad student \n 2. undergrad student \n 3. faculty \n";
//	cin >> num;
//	switch (num)
//	{
//	case 1:
//	{
//		cout << "enter no. of students you want to enter  :  ";
//		cin >> co;
//		for (int i = 0; i < co; i++)
//		{
//			cout << "enter first name of student  :   ";
//			cin >> a;
//			cout << "enter last name of student  :   ";
//			cin >> b;
//			cout << "enter thesis name  :   ";
//			cin >> c;
//			cout << "enter gpa  :  ";
//			cin >> g;
//			cout << "enter age  :  ";
//			cin >> ag;
//			cout << endl;
//			objg.set(a, b, c, g, ag);
//			objg.print();
//			cout << endl;
//		}
//		break;
//	}
//	case 2:
//	{
//		cout << "enter no. of students you want to enter  :  ";
//	cin >> co;
//	for (int i = 0; i < co; i++)
//	{
//		cout << "enter first name of student  :   ";
//		cin >> a;
//		cout << "enter last name of student  :   ";
//		cin >> b;
//		cout << "enter fyp name  :   ";
//		cin >> c;
//		cout << "enter gpa  :  ";
//		cin >> g;
//		cout << "enter age  :  ";
//		cin >> ag;
//		cout << endl;
//		obju.set(a, b, c, g, ag);
//		obju.print();
//		cout << endl;
//	}
//		break;
//	}
//	case 3:
//	{
//		cout << "enter no. of faculty members you want to enter  :  ";
//		cin >> co;
//		for (int i = 0; i < co; i++)
//		{
//			cout << "enter first name of student  :   ";
//			cin >> a;
//			cout << "enter last name of student  :   ";
//			cin >> b;
//			cout << " enter no. of courses  :  ";
//			cin >> ag;
//			do
//			{
//				cout << " enter extension of 3 digits  : ";
//				cin >> extension;
//			} while (extension >= 1000 && extension <= 99);
//			cout << endl;
//			objf.set(a, b, ag, extension);
//			objf.print();
//			cout << endl;
//		}
//		break;
//	}
//	default:
//		cout << " wrong input  ";
//		break;
//	}
//	
//	
//	
//}