//implementation
#include "interface2.h"
void multimediaitem::set(string a, string b, int c)
{
	title = a;
	creator = b;
	publications_year = c;
}
string multimediaitem:: get_title()
{
	return title;
}
string multimediaitem::get_creator()
{
	return creator;
}
int multimediaitem::get_year()
{
	return publications_year;
}
void book::set(string d, string e, int f)
{
	author = d;
	genre = e;
	number_of_pages = f;
}
string book::get_author()
{
	return author;
}
string book::get_gener()
{
	return genre;
}
int book::get_nump()
{
	return number_of_pages;
}
