////implementation
//#include "interface3.h"
//// cpp file
//#include<iostream>
//#include<string>
//using namespace std;
//string PersonData::getFirstName() {
//    return FirstName;
//}
//void PersonData::setFirstName(string first) {
//    FirstName = first;
//}
//string PersonData::getLastName() {
//    return LastName;
//}
//void PersonData::setLastName(string last) {
//    LastName = last;
//}
//string PersonData::getAddress() {
//    return Address;
//}
//void PersonData::setAddress(string address) {
//    Address = address;
//}
//
//int CustomerData::getCustomerNumber() {
//    return CustomerNumber;
//}
//void CustomerData::setCustomerNumber(int customerNumber) {
//    CustomerNumber = customerNumber;
//}
//bool CustomerData::getMailingList() {
//    return MailingList;
//}
//void CustomerData::setMailingList(bool mailingList) {
//    MailingList = mailingList;
//}
//void CustomerData::getCustomerData() {
//    cout << "Enter customer number: ";
//    cin >> CustomerNumber;
//    cout << "Enter first name: ";
//    getline(cin.ignore(), FirstName);
//    cout << "Enter last name: ";
//    getline(cin, LastName);
//    cout << "Enter address: ";
//    getline(cin, Address);
//   
//    cout << "Do you want to be on the mailing list? (1 for Yes / 0 for No): ";
//    cin >> MailingList;
//}
//void CustomerData::OutputCustomerData() {
//    cout << "Customer Number: " << CustomerNumber << endl;
//    cout << "First Name: " << FirstName << endl;
//    cout << "Last Name: " << LastName << endl;
//    cout << "Address: " << Address << endl;
//    if (MailingList) {
//        cout << "Mailing List: Yes" << endl;
//    }
//    else {
//        cout << "Mailing List: No" << endl;
//    }
//}
//PreferredCustomer::PreferredCustomer() : CustomerData() {
//    purchasesAmount = 0.0;
//    discountLevel = 0.0;
//}
//void PreferredCustomer::setPurchasesAmount(double purchases) {
//    purchasesAmount = purchases;
//    applyDiscount();
//}
//double PreferredCustomer::getPurchasesAmount() {
//    return purchasesAmount;
//}
//double PreferredCustomer::getDiscountLevel() {
//    return discountLevel;
//}
//void PreferredCustomer::applyDiscount() {
//    if (purchasesAmount >= 2000) {
//        discountLevel = 0.1;
//    }
//    else if (purchasesAmount >= 1500) {
//        discountLevel = 0.07;
//    }
//    else if (purchasesAmount >= 1000) {
//        discountLevel = 0.06;
//    }
//    else if (purchasesAmount >= 500) {
//        discountLevel = 0.05;
//    }
//    else {
//        discountLevel = 0.0;
//    }
//}
//void PreferredCustomer::displaycustomerdiscount()
//{
//    cout << "  the discount level is :  " << discountLevel;
//}