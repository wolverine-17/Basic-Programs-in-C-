#include <iostream>

using namespace std;

// Base class with a virtual function
class Shape {
public:
    virtual double calculateArea() const {
        cout << "Calculating area of a generic shape." << endl;
        return 0.0;
    }

    virtual ~Shape() {
        // Virtual destructor for proper cleanup
    }
};

// Derived class 1: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        cout << "Calculating area of a rectangle." << endl;
        return length * width;
    }
};

// Derived class 2: Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const override {
        cout << "Calculating area of a triangle." << endl;
        return 0.5 * base * height;
    }
};

// Function that takes a Shape reference and calls its calculateArea method
void printArea(const Shape& shape) {
    cout << "Area: " << shape.calculateArea() << " square units" << endl;
}

int main() {
    // Creating objects of derived classes
    Rectangle rectangle(5.0, 3.0);
    Triangle triangle(4.0, 6.0);

    // Using the printArea function with different objects
    cout << "Printing area of Rectangle:" << endl;
    printArea(rectangle);

    cout << "\nPrinting area of Triangle:" << endl;
    printArea(triangle);

    return 0;
}
