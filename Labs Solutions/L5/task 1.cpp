//#include<iostream>
//using namespace std;
//struct bpdata
//{
//	char name[90];
//	int runs;
//	int hit;
//};
//int main()
//{
//	int n = 0,num=0,temp=0;
//	bpdata *d=new bpdata[3];
//	bpdata input();
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			cout << "enter " << i << "  student name  :";
//			cin >> (d + i)->name;
//			cout << "enter " << i << "  student runs  :";
//			cin >> (d + i)->runs;
//			cout << "enter " << i << "  student hit  :";
//			cin >> (d + i)->hit;
//		}
//	}
//	bpdata output();
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			cout << "\nthe data of  " << i << "  student is  : \n";
//			cout << (d + i)->name << endl;
//			cout << (d + i)->runs << endl;
//			cout << (d + i)->hit << endl;
//		}
//	}
//	do
//	{
//		cout << "\n if you want to search the data of student press 1 : ";
//		cin >> n;
//		switch (n)
//		{
//		case 1:
//		{
//			bpdata search();
//			{
//				cout << "enter student no. b/w 0-2:  ";
//				cin >> num;
//				switch (num)
//				{
//				case 0:
//				{
//					bpdata update();
//					{
//						cout << "enter 0" << "  student name  :";
//						cin >> (d + 0)->name;
//						cout << "enter 0" << "  student runs  :";
//						cin >> (d + 0)->runs;
//						cout << "enter 0" << "  student hit  :";
//						cin >> (d + 0)->hit;
//					}
//					break;
//				}
//				case 1:
//				{
//					bpdata update();
//					{
//						cout << "enter 1" << "  student name  :";
//						cin >> (d + 1)->name;
//						cout << "enter 1" << "  student runs  :";
//						cin >> (d + 1)->runs;
//						cout << "enter 1" << "  student hit  :";
//						cin >> (d + 1)->hit;
//					}
//					break;
//				}
//				case 2:
//				{
//					bpdata update();
//					{
//						cout << "enter 2" << "  student name  :";
//						cin >> (d + 2)->name;
//						cout << "enter 2" << "  student runs  :";
//						cin >> (d + 2)->runs;
//						cout << "enter 2" << "  student hit  :";
//						cin >> (d + 2)->hit;
//						break;
//					}
//				}
//				default:
//					cout << "wrong input";
//					break;
//				}
//			}
//
//		}
//		default:
//			cout << "wrong input";
//			break;
//		}
//		cout << "\nif you want to re-enter student info press 2:  ";
//		cin >> temp;
//	} while (temp==2);
//	bpdata output();
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			cout << "\nthe data of  " << i << "  student is  : \n";
//			cout << (d + i)->name << endl;
//			cout << (d + i)->runs << endl;
//			cout << (d + i)->hit << endl;
//		}
//	}
//	delete[] d;
//	
//}
//






//////we can do it as:
////int tempo = 0,hits=0,run=0;
////char n[90];
////cout << "if you want to search by name press 1\n by runs than press 2\n by hits press 3";
////cin >> tempo;
////switch (tempo)
////{
////case 1:
////{
////	cout << "enter name: ";
////	for (int i = 0; i < 90; i++)
////	{
////		cin >> n[i];
////	}
////	for (int i = 0; i <3; i++)
////	{
////		for (int j = 0; j < (sizeof(ch[90]) / sizeof(ch[0])); j++)
////		{
////		}
////		if (ch[j] == n[j])
////
////		{
////			num = i;
////			update();
////		}
////		}
////	}
////	break;
////}
////case 2:
////{
////	cout << "enter runs";
////cin >> run;
////for (int i = 0; i < 3; i++)
////{
////	if (run == (d + i)->runs)
////	{
////		//func update and search is called...
////	}
////}
////	break;
////}
////case 3:
////{
////	cout << "enter hits";
////	cin >> hits;
////	for (int i = 0; i < 3; i++)
////	{
////		if (hits == (d + i)->hit)
////		{
////			//func update and search is called...
////		}
////	}
////	break;
////}
////default:
////	cout << "wrong input";
////	break;
////}




