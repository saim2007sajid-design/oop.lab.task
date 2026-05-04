#include <iostream>
#include <string>
using namespace std;

// Base Class: Vehicle
class Vehicle
{
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {
        cout << "Vehicle Constructor: Brand = " << brand << endl;
    }
};

// Derived Class 1: Car inherits Vehicle
class Car : public Vehicle
{
protected:
    string model;
public:
    Car(string b, string m) : Vehicle(b), model(m) {
        cout << "Car Constructor: Model = " << model << endl;
    }
};

// Derived Class 2: ElectricCar inherits Car
class ElectricCar : public Car
{
private:
    int batteryCapacity;
public:
    ElectricCar(string b, string m, int bat) : Car(b, m), batteryCapacity(bat) {
        cout << "ElectricCar Constructor: Battery = " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    cout << "--- Creating ElectricCar Object ---" << endl;
    ElectricCar e1("Tesla", "Model 3", 75);
    return 0;
}
