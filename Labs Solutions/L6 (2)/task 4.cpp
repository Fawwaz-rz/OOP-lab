
//	//Part a)
//#include <iostream>
//	using namespace std;
//	void mystery1(char*, const char*); // prototype
//	int main()
//	{
//		char string1[80];
//		char string2[80];
//		cout << "Enter two strings: ";
//		cin >> string1 >> string2;
//		mystery1(string1, string2);//   we called a func in which string 1 is copied or attached with constant stirng 2
//		cout << string1 << endl;
//	} // end main
//	// What does this function do?
//	void mystery1(char* s1, const char* s2)//char ptr s1 points to string1 and we have made the string 2 constant by using const pointer
//	{
//		while (*s1 != '\0')//while loop ends at last of string
//			++s1;//it increments the indexes of array and go to last index where is null character
//		for (; *s1 = *s2; ++s1, ++s2);//it copies string 2 into 1 starting from the index last of string 1 and 0 of string 2
//			 // empty statement
//	} // end function mystery1
//-------------------------------------------------------------------------------------------------------------------------------


//
////Part b)
//#include <iostream>
//using namespace std;
//int mystery2(const char*); // prototype
//int main()
//{
//	char string1[80];
//	cout << "Enter a string: ";
//	cin >> string1;
//	cout << mystery2(string1) << endl;
//} // end main
//// What does this function do?
//int mystery2(const char* s)
//{
//	int x;
//	for (x = 0; *s != '\0'; ++s)//we have initialised x with 0  which increments w.r.t to the incrementation of array indexes
//		++x;
//	return x;//return size of string without space
//} // end function mystery2
