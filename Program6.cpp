#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    int age;                          // Protected member

public:
    void setAge(int a)
    {
        age = a;
    }
};

// Derived class
class Student : public Person
{
public:
    void showAge()
    {
        // Derived class can access protected member
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s;                        // Create object

    s.setAge(20);                     // Set age
    s.showAge();                      // Display age

    return 0;
}
