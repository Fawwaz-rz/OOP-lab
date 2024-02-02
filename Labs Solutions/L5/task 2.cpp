//#include<iostream>
//using namespace std;
//struct address
//{
//	int house;
//	int street;
//	char cityname[90];
//	char province[90];
//};
//struct student
//{
//	char nameofstudent[6];
//	address ad[10] = {0};
//	int age;
//	float GPA;
//};
//
//void main()
//{
//	int num = 0;
//	student st[90] = {0};
//	cout << "please enter student numbers  :   ";
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		cout << "enter name of  " << i << "  student  :";
//		cin >> st[i].nameofstudent;
//		cout << "enter address of house,street,cityname,province  " << i << "  student with pressing enter in this sequence :";
//		cin >> st[i].ad[i].house>> st[i].ad[i].street>> st[i].ad[i].cityname>> st[i].ad[i].province;
//		cout << "enter age of  " << i << "  student:  ";
//		cin >> st[i].age;
//		cout << "enter GPA of " << i << "  student:  ";
//		cin >> st[i].GPA;
//	}
//	for (int  i = 0; i < num; i++)
//	{
//		
//		cout <<"name of student  "<<i<<"  is    :" << st[i].nameofstudent << endl;
//		 cout <<"house #  " << st[i].ad[i].house << ", street#   " << st[i].ad[i].street<<" , cityname  " << st[i].ad[i].cityname <<"  , province name   " << st[i].ad[i].province << endl;
//		 cout << "age of student  " << i << "  is    :" <<st[i].age<<endl;
//		 
//		 cout << "GPA of student  " << i << "  is    :" << st[i].GPA<<endl;
//	}
//	system("pause");
//}