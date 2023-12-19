#include <iostream>
#include <string>

using namespace std;

// Define a class called 'Person'
class Person {
private:
    // Private data members
    string name;
    int age;

public:
    // Public member functions

    // Constructor to initialize the object
    Person(string n, int a) : name(n), age(a) {}

    // Member function to display information about the person
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << " years" << endl;
    }

    // Getter function to retrieve the person's name
    string getName() const {
        return name;
    }

    // Setter function to update the person's age
    void setAge(int newAge) {
        age = newAge;
    }
};

int main() {
    // Get user input for name and age
    cout << "Enter name: ";
    string userName;
    getline(cin, userName); // Using getline to get a full line with spaces

    cout << "Enter age: ";
    int userAge;
    cin >> userAge;

    // Create an object of the Person class using user input
    Person person1(userName, userAge);

    // Display information using the member function
    cout << "Person 1:" << endl;
    person1.displayInfo();

    // Use the getter function to retrieve the name
    cout << "Person 1's Name: " << person1.getName() << endl;

    // Get user input for updating the age
    cout << "Enter new age for Person 1: ";
    int newAge;
    cin >> newAge;

    // Use the setter function to update the age
    person1.setAge(newAge);

    // Display updated information
    cout << "Updated Person 1:" << endl;
    person1.displayInfo();

    return 0;
}
