#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle
{
protected:
    string brand;

public:
    Vehicle(const string &b) : brand(b) {}

    void displayInfo() const
    {
        cout << "Brand: " << brand;
    }
};

// Derived class 1: Car (Single Inheritance)
class Car : virtual public Vehicle
{
public:
    int numDoors;

public:
    Car(const string &b, int doors) : Vehicle(b), numDoors(doors) {}

    void displayDetails() const
    {
        displayInfo();
        cout << ", Type: Car, Number of Doors: " << numDoors << endl;
    }
};

// Derived class 2: Bicycle (Multilevel Inheritance)
class Bicycle : public Vehicle
{
private:
    string type;

public:
    Bicycle(const string &b, const string &t) : Vehicle(b), type(t) {}

    void displayDetails() const
    {
        displayInfo();
        cout << ", Type: Bicycle, Bicycle Type: " << type << endl;
    }
};

// Derived class 3: ElectricCar (Multiple Inheritance)
class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    ElectricCar(const string &b, int doors, int capacity)
        : Vehicle(b), Car(b, doors), batteryCapacity(capacity) {}

    void displayDetails() const
    {
        displayInfo();
        cout << ", Type: Electric Car, Number of Doors: " << numDoors
             << ", Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main()
{
    // Single Inheritance Example
    Car myCar("Toyota", 4);
    cout << "Single Inheritance Example:" << endl;
    myCar.displayDetails();
    cout << endl;

    // Multilevel Inheritance Example
    Bicycle myBicycle("Giant", "Mountain");
    cout << "Multilevel Inheritance Example:" << endl;
    myBicycle.displayDetails();
    cout << endl;

    // Multiple Inheritance Example
    ElectricCar myElectricCar("Tesla", 2, 75);
    cout << "Multiple Inheritance Example:" << endl;
    myElectricCar.displayDetails();

    return 0;
}
