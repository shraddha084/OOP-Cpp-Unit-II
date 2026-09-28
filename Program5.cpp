#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    string name;

    void showPerson()
    {
        cout << "Name: " << name << endl;
    }
};

// Student inherits Person
class Student : public Person
{
public:
    int rollNumber;

    void showStudent()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student s;                       // Create Student object

    s.name = "Rahul";                 // Set inherited member
    s.rollNumber = 101;               // Set student member

    s.showPerson();                   // Call base class function
    s.showStudent();                  // Call derived class function

    return 0;
}
