Task 4:
#include<iostream>
using namespace std;
class date
{
public:
	date(int m = 0, int d = 0, int y = 0);
	void setdate(int m, int d, int y);
	int month;
	int day;
	int year;
};
date::date(int m, int d, int y)
{
	m = 0; d = 0; y = 0;
}
void date::setdate(int m, int d, int y)
{

	month = m;
	month = (m >= 1 && m <= 12) ? m : 0;

	day = (d >= 1 && d < 31) ? d : 0;

	year = (y >= 0) ? y : 0;

}

int main()
{
	date var;
	cout << "enter months  : ";
	cin >> var.month;
	cout << "\nenter day  : ";
	cin >> var.day;
	cout << "\nenter year  : ";
	cin >> var.year;
	var.setdate(var.month, var.day, var.year);
	cout << "\ndates are :   \n";
	cout << var.month << "/";
	cout << var.day << "/";
	cout << var.year << endl;
	switch (var.month)
	{
	case 1:
	{
		cout << "january  " << var.day << " , " << var.year << endl;
		cout << var.day << "  january " << " " << var.year;
		break;
	}
	case 2:
	{
		cout << "february  " << var.day << " , " << var.year << endl;
		cout << var.day << "  february " << " " << var.year;
		break;
	}
	case 3:
	{
		cout << "march" << var.day << " , " << var.year << endl;
		cout << var.day << "  march " << " " << var.year;
		break;
	}
	case 4:
	{
		cout << "april  " << var.day << " , " << var.year << endl;
		cout << var.day << "  april " << " " << var.year;
		break;
	}
	case 5:
	{
		cout << "may  " << var.day << " , " << var.year << endl;
		cout << var.day << "  may " << " " << var.year;
		break;
	}
	case 6:
	{
		cout << "june  " << var.day << " , " << var.year << endl;
		cout << var.day << "  june " << " " << var.year;
		break;
	}
	case 7:
	{
		cout << "july  " << var.day << " , " << var.year << endl;
		cout << var.day << "  july " << " " << var.year;
		break;
	}
	case 8:
	{
		cout << "august  " << var.day << " , " << var.year << endl;
		cout << var.day << "  august " << " " << var.year;
		break;
	}
	case 9:
	{
		cout << "september  " << var.day << " , " << var.year << endl;
		cout << var.day << "  september " << " " << var.year;
		break;
	}
	case 10:
	{
		cout << "october  " << var.day << " , " << var.year << endl;
		cout << var.day << "  october " << " " << var.year;
		break;
	}
	case 11:
	{
		cout << "november  " << var.day << " , " << var.year << endl;
		cout << var.day << "  november " << " " << var.year;
		break;
	}
	case 12:
	{
		cout << "december  " << var.day << " , " << var.year << endl;
		cout << var.day << "  december " << " " << var.year;
		break;
	}
	default:
		cout << "wrong input ";
		break;
	}

}


------------------------------OR----------------------------------------



#include<iostream>
using namespace std;
class date
{
public:
	date(int m = 0, int d = 0, int y = 0);
	void input();
	void setdate(int m, int d, int y);
	void output(int month, int day, int year);
private:
	int month;
	int day;
	int year;
};
date::date(int m, int d, int y)
{
	m = 0; d = 0; y = 0;
}
void date::setdate(int m, int d, int y)
{

	month = m;
	month = (m >= 1 && m <= 12) ? m : 0;

	day = (d >= 1 && d < 31) ? d : 0;

	year = (y >= 0) ? y : 0;
	output(month, day, year);

}
void date::output(int month, int day, int year)
{
	cout << "\ndates are :   \n";
	cout << month << "/";
	cout << day << "/";
	cout << year << endl;
	switch (month)
	{
	case 1:
	{
		cout << "january  " << day << " , " << year << endl;
		cout << day << "  january " << " " << year;
		break;
	}
	case 2:
	{
		cout << "february  " << day << " , " << year << endl;
		cout << day << "  february " << " " << year;
		break;
	}
	case 3:
	{
		cout << "march" << day << " , " << year << endl;
		cout << day << "  march " << " " << year;
		break;
	}
	case 4:
	{
		cout << "april  " << day << " , " << year << endl;
		cout << day << "  april " << " " << year;
		break;
	}
	case 5:
	{
		cout << "may  " << day << " , " << year << endl;
		cout << day << "  may " << " " << year;
		break;
	}
	case 6:
	{
		cout << "june  " << day << " , " << year << endl;
		cout << day << "  june " << " " << year;
		break;
	}
	case 7:
	{
		cout << "july  " << day << " , " << year << endl;
		cout << day << "  july " << " " << year;
		break;
	}
	case 8:
	{
		cout << "august  " << day << " , " << year << endl;
		cout << day << "  august " << " " << year;
		break;
	}
	case 9:
	{
		cout << "september  " << day << " , " << year << endl;
		cout << day << "  september " << " " << year;
		break;
	}
	case 10:
	{
		cout << "october  " << day << " , " << year << endl;
		cout << day << "  october " << " " << year;
		break;
	}
	case 11:
	{
		cout << "november  " << day << " , " << year << endl;
		cout << day << "  november " << " " << year;
		break;
	}
	case 12:
	{
		cout << "december  " << day << " , " << year << endl;
		cout << day << "  december " << " " << year;
		break;
	}
	default:
		cout << "wrong input ";
		break;
	}
}

void date::input()
{
	int m, d, y;
	cout << "enter months  : ";
	cin >> m;
	cout << "\nenter day  : ";
	cin >> d;
	cout << "\nenter year  : ";
	cin >> y;
	month = m;
	day = d;
	year = y;
	setdate(m, d, y);

}

int main()
{
	date obj;
	obj.input();

}



