////header
//#pragma once
////#ifndef CLASS1_H
//#include<string>
//#include<iostream>
//using namespace std;
//#define CLASS6_H
////#endif // !CLASS1.H
////class person {
////	string name;
////public:
////	person() {}
////	bool presence() { return true; }
////	~person()
////	{
////
////	}
////};
////class home {
////private:
////	string address;
////	person* persons[3];
////public:
////	home();
////	person* Getperson(int);
////	bool presence(int);
////	~home()
////	{
////
////	}
////};
//class Address {
//private:
//    string streete;
//    string citya;
//    string statea;
//    string zipa;
//public:
//    Address(string street, string city, string state,string zip) : streete(street), citya(city), statea(state), zipa(zip) {}
//    string getStreet() const;
//    string getCity() const;
//    string getState() const;
//    string getZip() const;
//};
//
//class Person {
//public:
//    Person(string name, const Address& address) : namep(name), addressp(&address) {}
//    string getName() const;
//    const Address* getAddress() const;
//
//private:
//    string namep;
//    const Address* addressp = nullptr;
//};