#include <iostream>
#include <string>
using namespace std;
// user defined data type called Employee that contains data members that
// are all public and no internal member functions are allowed
struct Employee
{
    string name;
    int age;
    double salary;
    bool remote;
} e1; // an Employee variable

struct Test
{
    int i;
    int f;
} t;

// accessor function to display employee details using the
// employee variable as the input parameter
void displayEmployee(const Employee e)
{
    cout << e.name << " " << e.age << endl;
    cout << e.salary << "  " << boolalpha << e.remote << endl;
}
int main()
{
    // initialising the e1 employee variable
    e1 = {"Ghost", 32, 5000.00, true};

    // creating and initialising employee varialbe
    Employee e2 = {"Killer", 18, 4000.00, false};
    displayEmployee(e1);
    // a pointer to employee data type variable and assigned the adress
    //  of an employee variable
    Employee *eptr = &e2;
    // accessing struct data members using the struct pointer
    cout << eptr->name << " " << eptr->age << endl;
    cout << eptr->salary << " " << eptr->remote << endl;
    cout << "size of employee struct" << sizeof(Employee) << endl;
    cout << "size of e1 " << sizeof(e1) << endl;
    cout << "size of e2 " << sizeof(e2) << endl;
    cout << "string size" << sizeof(string) << endl;
    cout << " size of t" << sizeof(t) << endl;
}