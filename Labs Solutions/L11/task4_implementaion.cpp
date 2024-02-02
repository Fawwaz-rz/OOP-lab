////Class.cpp file (class source file)
//#include "interface4.h"
//istream& operator>>(istream& is, Employee& emp) {
//    cout << "Enter employee name: ";
//    getline(is, emp.name);
//    cout << "Enter employee age: ";
//    is >> emp.age;
//    cout << "Enter employee salary: ";
//    is >> emp.salary;
//    return is;
//}
// ostream& operator<<(ostream& os, const Employee& emp) {
//    os << "Employee Name: " << emp.name << endl;
//    os << "Employee Age: " << emp.age << endl;
//    os << "Employee Salary: " << emp.salary << endl;
//    return os;
//}
// Employee operator+(const Employee& emp1, const Employee& emp2) {
//    string newName = emp1.name + " " + emp2.name;
//    int newAge = emp1.age + emp2.age;
//    float newSalary = emp1.salary + emp2.salary;
//    Employee emp3(newName, newAge, newSalary);
//    return emp3;
//}
// bool operator<(const Employee& emp1, const Employee& emp2) {
//    return emp1.salary < emp2.salary;
//}
//
//
// bool operator>(const Employee& emp1, const Employee& emp2) {
//    return emp1.salary > emp2.salary;
//}