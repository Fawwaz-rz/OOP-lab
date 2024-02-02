//#include<iostream>
//#include"interface5.h"
//#include<string>
//#include<stdexcept>
//using namespace std;
//void main()
//{
//        string time;
//        int hour=0,min=0,sec=0,temp=0,m=0;
//
//
//        try
//        {
//
//            cout << "Enter time (for pm= 100 for am=100) (format: hour-minutes-sec-pm): ";
//            scanf_s("%d-%d-%d-%d", &hour, &min, &sec,&m);
//
//            if (hour < 1 || hour>12)
//            {
//                throw Invalidhr();
//            }
//            if (min < 1 || min>60)
//            {
//                throw Invalidmin();
//            }
//            if (sec < 0||sec>60)
//            {
//                throw Invalidsec();
//            }
//
//            if (m==110)
//            {
//                
//                hour += 12;
//            }
//
//            cout <<hour <<" , " << min << ", " << sec << endl;
//
//        }
//        catch (const exception& ex)
//        {
//            cout << "Error: " << ex.what() << endl;
//        }
//    }