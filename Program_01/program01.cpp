#include <iostream>
using namespace std;

class SoilSensor
{
private:
    int sensorId;
    float moisture;

public:

    // Constructor
    SoilSensor(int id, float m)
    {
        sensorId = id;
        moisture = m;
    }

    // Function to display sensor data
    void display()
    {
        cout << "Sensor ID: " << sensorId << endl;
        cout << "Moisture: " << moisture << "%" << endl;
    }

    // Function to update moisture
    void updateMoisture(float newMoisture)
    {
        moisture = newMoisture;
    }
};

int main()
{
    // Creating sensor objects
    SoilSensor s1(101, 45.5);
    SoilSensor s2(102, 52.3);

    cout << "=== Sensor Details ===" << endl;

    s1.display();
    cout << endl;

    s2.display();

    // Updating sensor 1 moisture
    s1.updateMoisture(50.2);

    cout << "\n=== Updated Sensor 1 ===" << endl;
    s1.display();

    return 0;
}
