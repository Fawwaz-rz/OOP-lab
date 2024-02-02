//#include<iostream>
//using namespace std;
//class calarea
//{
//private:
//	int length;
//	int width;
//	int area;
//	static int count;
//public:
//	void arecount(int l, int w);
//	int ansarea(int length, int width);
//	void display()
//	{
//		cout << "\n area is :  " << area<<"\n count is  :   "<<count;
//	}
//};
//int calarea::count = 0;
//void calarea::arecount(int l, int w)
//{
//	length = l;
//	width = w;
//}
//int calarea::ansarea(int length, int width)
//{
//	this->length = length;
//	this->width = width;
//	area = length * width;
//	count++;
//	return area;
//}
//
//int main()
//{
//	int num = 0;
//	int length = 0, width = 0,area=0;
//	calarea a;
//	a.arecount(0, 0);
//	cout << "enter any num except 0 to enter values of area :   ";
//	cin >> num;
//	while (num!=0)
//	{
//		cout << "enter length : ";
//		cin >> length;
//		cout << endl << "enter width :  ";
//		cin >> width;
//		cout<< a.ansarea(length, width);
//		cout << "\n enter num :  ";
//		cin >> num;
//	}
//	a.display();
//}