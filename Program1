#include <iostream>              // Used for input and output
using namespace std;             // Allows us to use cout directly

// Base class
class Employee
{
protected:
    string name;                 // Stores employee name
    int id;                       // Stores employee ID

public:
    // Function to set common employee information
    void setEmployee(string n, int i)
    {
        name = n;                // Store name
        id = i;                  // Store ID
    }

    // Virtual function for salary calculation
    virtual void calculateSalary()
    {
        cout << "Salary calculation" << endl;
    }
};

// Derived class for Full-Time Employee
class FullTimeEmployee : public Employee
{
private:
    double monthlySalary;         // Stores monthly salary

public:
    // Function to set salary
    void setSalary(double salary)
    {
        monthlySalary = salary;
    }

    // Override salary calculation function
    void calculateSalary() override
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Full-Time Salary: Rs. " << monthlySalary << endl;
    }
};

// Derived class for Part-Time Employee
class PartTimeEmployee : public Employee
{
private:
    double hours;                 // Stores working hours
    double rate;                  // Stores payment per hour

public:
    // Function to set working details
    void setSalary(double h, double r)
    {
        hours = h;                // Store total hours
        rate = r;                 // Store hourly rate
    }

    // Override salary calculation function
    void calculateSalary() override
    {
        double salary = hours * rate;   // Calculate part-time salary

        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Part-Time Salary: Rs. " << salary << endl;
    }
};

// Derived class for Intern
class Intern : public Employee
{
private:
    double stipend;               // Stores intern stipend

public:
    // Function to set stipend
    void setSalary(double s)
    {
        stipend = s;
    }

    // Override salary calculation function
    void calculateSalary() override
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Intern Stipend: Rs. " << stipend << endl;
    }
};

// Main function
int main()
{
    // Create object of Full-Time Employee
    FullTimeEmployee full;

    // Set employee details
    full.setEmployee("Rahul", 101);

    // Set monthly salary
    full.setSalary(50000);

    // Display salary
    full.calculateSalary();

    cout << endl;

    // Create object of Part-Time Employee
    PartTimeEmployee part;

    // Set employee details
    part.setEmployee("Amit", 102);

    // Set hours and hourly rate
    part.setSalary(80, 300);

    // Display salary
    part.calculateSalary();

    cout << endl;

    // Create object of Intern
    Intern intern;

    // Set employee details
    intern.setEmployee("Sneha", 103);

    // Set intern stipend
    intern.setSalary(15000);

    // Display stipend
    intern.calculateSalary();

    return 0;                     // End the program
}
