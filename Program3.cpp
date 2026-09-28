#include <iostream>                 // Used for input and output
using namespace std;                // Use standard namespace

// Base class
class Vehicle
{
protected:
    string vehicleNumber;           // Stores vehicle number
    string fuelType;                // Stores fuel type

public:
    // Function to set common details
    void setDetails(string number, string fuel)
    {
        vehicleNumber = number;     // Store vehicle number
        fuelType = fuel;            // Store fuel type
    }
};

// Truck class
class Truck : public Vehicle
{
public:
    void showDetails()
    {
        cout << "Truck Number: " << vehicleNumber << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Capacity: 10 Tons" << endl;
    }
};

// Delivery Van class
class DeliveryVan : public Vehicle
{
public:
    void showDetails()
    {
        cout << "Van Number: " << vehicleNumber << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Capacity: 2 Tons" << endl;
    }
};

// Delivery Bike class
class DeliveryBike : public Vehicle
{
public:
    void showDetails()
    {
        cout << "Bike Number: " << vehicleNumber << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Capacity: 50 Kg" << endl;
    }
};

int main()
{
    Truck truck;                    // Create truck object
    truck.setDetails("MH12AB1234", "Diesel");
    truck.showDetails();

    cout << endl;

    DeliveryVan van;                // Create van object
    van.setDetails("MH12CD5678", "Petrol");
    van.showDetails();

    cout << endl;

    DeliveryBike bike;              // Create bike object
    bike.setDetails("MH12EF9012", "Petrol");
    bike.showDetails();

    return 0;                       // End program
}
