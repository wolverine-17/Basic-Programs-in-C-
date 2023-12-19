#include <iostream>
#include <string>

using namespace std;

// Define a class called 'Student'
class Student
{
private:
    string name;
    int age;

public:
    // Constructor to initialize the object
    Student(const string &n, int a) : name(n), age(a)
    {
        cout << "Constructor called for " << name << endl;
    }

    // Destructor to clean up resources when the object is destroyed
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }

    // Member function to display information about the student
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << " years" << endl;
    }
};

int main()
{
    // Create an array of Student objects
    const int numStudents = 3;
    Student students[numStudents] = {
        Student("Alice", 20),
        Student("Bob", 22),
        Student("Charlie", 21)};

    // Display information using the member function
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].displayInfo();
    }

    // No need to manually call destructors, they will be called automatically
    // when the array goes out of scope (end of main function)

    return 0;
}
