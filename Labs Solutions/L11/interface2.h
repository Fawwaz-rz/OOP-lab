//header
#pragma once
#ifndef CLASS2_H
#include<string>
#include<iostream>
using namespace std;
#define CLASS2_H
#endif // !CLASS.H

class multimediaitem
{
private:
	string title;
	string creator;
	int publications_year;
public:
	multimediaitem():title("fvd"),creator("ASDF"),publications_year(2002){}
	void set(string a,string b,int c);
	string get_title();
	 string get_creator();
	 int get_year();
	 friend void displayDetails(const multimediaitem& item) {
		 cout << "Title: " << item.title << endl;
		 cout << "Creator: " << item.creator << endl;
		 cout << "Publication Year: " << item.publications_year << endl;
	 }
};
class book:public multimediaitem
{
	string author;
	string genre;
	int	number_of_pages;
public:
	book() :author("fvd"), genre("ASDF"), number_of_pages(2) {}
	void set(string d, string e, int f);
	string get_author();
	string get_gener();
	int get_nump();

	
};