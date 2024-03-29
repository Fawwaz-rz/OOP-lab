////Class.h file (class header file)
//#pragma once
//#include<iostream>
//#include<string>
//#include<iomanip>
//#include <conio.h>
//#include <windows.h>
//#include <ctime>
//#include <cstdlib>
//#include <fstream>
//using namespace std;
////OOP Final Project "Transport Management System"
////22F-8762_22F-8813_Project_Interface
//
////#ifndef FINAL_PROJECT
////#define FINAL_PROJECT
////#endif
//int assign_ID_to_Customer(string* ptr);
//void savedatatofile();
//void readandprintdata();
//class Name {
//private:
//	string fName;
//	string lName;
//public:
//	Name();
//	Name(string fN, string lN);
//
//	void setFName(string fN);
//	string getFName();
//	void setLName(string lN);
//	string getLName();
//	//add following functions //Getter, Setters
//	//Destructor, Default Constructor, Copy Constructor,
//	inline friend ostream& operator<<(ostream& out, const Name& n);
//	~Name();
//};
//ostream& operator<<(ostream& out, const Name& n) {
//	out << n.fName << " " << n.lName << endl;
//	return out;
//}
//class Date {
//private:
//	int day;
//	int month;
//	int year;
//public:
//	Date();
//	Date(int d, int m, int y);
//	void setDate(int d);
//	int getDate();
//	void setMonth(int m);
//	int getMonth();
//	void setYear(int y);
//	int getYear();
//	//add constructurs getter setters and stream output function, which output date in
//	//given format day / Mon / Year
//	~Date();
//};
//class mTime {
//private:
//	int hour;
//	int minu;
//	int sec;
//public:
//	mTime();
//	mTime(int h, int m, int s);
//	~mTime();
//	void setHour(int h);
//	int getHour();
//	void setMin(int m);
//	int getMin();
//	void setSec(int s);
//	int getSec();
//	//add constructurs getter setters and stream output function, which output time in
//	//given format Hr : Min: Sec
//};
//class Person {
//private:
//	Name pName;
//	Date DOB;
//	int Age;
//	 int Nid;
//public:
//	//add following functions in this class //Getter, Setters
//	//Destructor, Default and Parametrized Constructor, Copy Constructor, Output
//	//operator (print information of person)
//	Person();
//	Person(Name pname, Date dob, int age, int nid);
//	~Person();
//	void setPName(Name pname);
//	Name getPName();
//	void setDOB(Date dob);
//	Date getDOB();
//	void setAge(int age);
//	int getAge();
//	void setNID( int nid);
//	 int getNID();
//};
//class Customer : public Person {
//private:
//	int cId;
//	// Unique and assigned first time when customer makes first service request
//	//Service **bookingHistory;
//	//Maintain and Update history of customer for each service (ride or goods
//	//transportation order) by adding address of service in dynamic array.
//	//you can add more members here if required
//public:
//	//add following functions in this class //Getter, Setters
//	//Destructor, Default and Parametrized Constructor, Copy Constructor, Output
//	//operator (print complete information of customer including history if any)
//	Customer();
//	Customer(int custID /*,Service** bookingHist*/);
//	~Customer();
//	void setCustID(int custID);
//	int getCustID();
//	/*void setBooingHistory(Service** bookingHist);*/
//	/*void setBooingHistory(Service** bookingHist);
//	Service getBooingHistory();*/
//	void customer_list(mTime time_obj[2], Person person_obj[2], Date date_obj[2], Customer customer_obj[2], Name name_obj[2]);
//};
//class Driver : public Person {
//private:
//	int dId;
//	string** LicencesList;
//	int noofLicences;
//	float overallRanking;
//	float salary;
//	int experience;
//	int status; // 1 for free, 2 if booked and 3 if canceled
//	/*Service** serviceHistory;*/
//	//Add services address in the array for tracking complete information of service.
//public:
//	//add following functions in this class
//	//Getter, Setters
//	//Destructor, Default and Parameterized Constructor, Copy Constructor, Output
//	//operator (prints complete information of Driver)
//	Driver();
//	Driver(int driverID, string** licenseList, int noOfLicense, float overallRank, float sal, int exp, int statuses/*, Service** serviceHist*/);
//	~Driver();
//	void setDriverID(int driverID);
//	int getDriverID();
//	void setLicenseList(string** licenseList);
//	string** getLicenseList();
//	void setNoOFLicenses(int noOfLicense);
//	int getNoOFLicenses();
//	void setOverallRankings(float overallRank);
//	float getOverallRanking();
//	void setSalary(float sal);
//	float getSalary();
//	void setExperience(int exp);
//	int getExperience();
//	void setStatus(int statuses);
//	int getStatus();
//	void driver_list(Driver driver_obj[], Name name_obj[]);
//	//void setServiceHist(Service** serviceHist);
//	//Service getServiceHist();
//};
//class Service {
//private:
//	string source;
//	string destination;
//	float distance; //in km
//	Date bookingDate;
//	mTime bookingTime;
//	bool status; // false for pending, true if complete
//	float fuelrate;
//	int cId; // Customer Id who booked the ride
//	int dId; // Driver Id
//	int vId; // vehicle Id
//
//	//you can add more members here if required
//	//add member functions
//public:
//	Service();
//	Service(string src, string destn, float dist, Date bkDate,
//		mTime bkTime, bool sts, float fuelRate, int customerID, int driverID, int vehichleID);
//	~Service();
//	void setSource(string src);
//	string getSource();
//	void setDestination(string destn);
//	string getDestination();
//	void setDistance(float dist);
//	float getDistance();
//	void setBookingDate(Date bkDate);
//	Date getBookingDate();
//	void setBookingTime(mTime bkTime);
//	mTime getBookingTime();
//	void setStatus(bool sts);
//	bool getStatus();
//	void setFuelRate(float fuelRate);
//	float getFuelRate();
//	void setCustomerID(int customerID);
//	int getCustomerID();
//	void setDriverID(int driverID);
//	int getDriverID();
//	void setVehicleID(int vehichleID);
//	int getVehicleID();
//	/*void setBooingHistory(Service** bookingHist);
//		Service getBooingHistory();*/
//
//};
//class Ride : public Service {
//private:
//	int noofPassengers; // false for pending, true if complete
//	string rideType; // intercity, intracity
//	float DriverRanking; // 0 to 5 scale (worst to best)
//	float VehicleRanking; // 0 to 5 scale (worst to best)
//	//you can add more members here if required
//	//add member functions
//public:
//	Ride();
//	Ride(string src, string destn, float dist, Date bkDate, mTime bkTime, bool sts, float fuelRate,
//		int customerID, int driverID, int vehichleID, int noOfPssngr, string typeOfRide,
//		float driverRank, float vehicleRank);
//	~Ride();
//	void setNoOfPassengers(int noOfPssngr);
//	int getNoOfPassengers();
//	void setRideType(string typeOfRide);
//	string getRideType();
//	void setDriverRanking(float driverRank);
//	float getDriverRanking();
//	void setVehicleRank(float vehicleRank);
//	float getVehicleRank();
//};
//class Delivery : public Service {
//private:
//	float goodsWeight; // Weight of goods in Kg
//	string goodsType; //type of goods food, furniture, petroleum, chemicals, etc.
//	//you can add more members here if required
//	//add member functions
//public:
//	Delivery();
//	Delivery(string src, string destn, float dist, Date bkDate, mTime bkTime, bool sts, float fuelRate,
//		int customerID, int driverID, int vehichleID, float weightOfGoods, string typeOfGoods);
//	~Delivery();
//	void setGoodsWeight(float weightOfGoods);
//	float getGoodsWeight();
//	void setGoodsType(string typeOfGoods);
//	string getGoodsType();
//};
//class Feature {
//private:
//	int fId;
//	string description;
//	float cost;
//	//you can add more members here if required
//	//add member functions
//public:
//	Feature();
//	Feature(int featureID, string desc, float costs);
//	~Feature();
//	void setFID(int featureID);
//	int getFID();
//	void setDescription(string desc);
//	string getDescription();
//	void setCost(float costs);
//	float getCost();
//};
//class Vehicle {
//private:
//	int vId;
//	int registrationNo;
//	float avgMileage;
//	string* LicenceType; // License required for driving the vehicle bool
//	bool status; // false for free, true if booked in a service already
//	string* fueltype;
//	float overallRanking;
//	Date manufacturingDate;
//	Feature* list;
//	Service** serviceHistory;
//	//Add services address in the array for tracking complete information of service.
//	//you can add more members here if required
//	//add member functions
//public:
//	Vehicle();
//	Vehicle(int vehicleID, int registrationNumber, float avaerageMileage, string* licenseType,
//		bool statuses, string* fuelType, float overallRank, Date mfgDate,
//		Feature* lists, Service** serviceHist);
//	~Vehicle();
//	void setVehicleID(int vehicleID);
//	int getVehicleID();
//	void setRegisterationNumber(int registerationNumber);
//	int getRegisterationNumber();
//	void setAverageMileage(float avaerageMileage);
//	float getavaerageMileage();
//	void setLicenseType(string* licenseType);
//	string getLicenseType();
//	void setStatus(bool statuses);
//	bool getStatus();
//	void setFuelType(string* fuelType);
//	string getFuelType();
//	void setOverallRank(float overallRank);
//	float getOverallRanks();
//	void setMfgDate(Date mfgDate);
//	Date getMfgDate();
//	void setList(Feature* lists);
//	Feature getList();
//	void setServiceHistory(Service** serviceHist);
//	Service getServiceHistory();
//};
////add Complete Hierarchy of vehicles based on their types and functions
//
//
