//#include<iostream>
//using namespace std;
//struct distanc  //distance is reserved in memory so we wrote distanc
//{
//	int ft;
//	double inch;
//};
//int main()
//{
//	int temp = 0;
//	float tempf = 0.0;
//	distanc d1;
//	cout << "enter feets of room 1:   ";
//	cin >> d1.ft;
//	while (d1.ft<0)
//	{
//		cout << "enter feets of room 1:   ";
//		cin >> d1.ft;
//	}
//	cout << "enter inches of room 1:   ";
//	cin >> d1.inch;
//	while (d1.inch < 0)
//	{
//		cout << "enter inches of room 1:   ";
//		cin >> d1.inch;
//	}
//	distanc d2;
//	d2.ft = 10;
//	d2.inch = 5.25;
//	distanc d3;
//	d3.ft = d1.ft + d2.ft;
//	d3.inch = d1.inch + d2.inch;
//	cout << "\nd1 feets are :  " << d1.ft << "\n d1 inches are:   " << d1.inch;
//	cout << "\nd2 feets are :  " << d2.ft << "\n d2 inches are:   " << d2.inch;
//	cout << "\nd3 feets are :  " << d3.ft << "\n d3 inches are:   " << d3.inch;
//	if (d1.inch > 12)
//	{
//		temp = d1.inch / 12;//stores int in which no points are printed
//		tempf = d1.inch / 12;//stores float in which  points are printed
//		d1.ft = d1.ft + (temp);//increase feet
//		d1.inch = tempf - temp;//points value in inches is stored
//	}
//	cout << "\n----------after sum or condition\n----------------- ";
//	d3.ft = d1.ft + d2.ft;
//	d3.inch = d1.inch + d2.inch;
//	cout << endl << endl;
//	cout << "\nd1 feets are :  " << d1.ft << "\n d1 inches are:   " << d1.inch;
//	cout << "\nd2 feets are :  " << d2.ft << "\n d2 inches are:   " << d2.inch;
//	cout << "\nd3 feets are :  " << d3.ft << "\n d3 inches are:   " << d3.inch;
//}