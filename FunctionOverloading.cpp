#include <iostream>

using namespace std;

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to add two double values
double add(double a, double b)
{
    return a + b;
}

int main()
{
    // Call the overloaded functions
    int result1 = add(5, 10);
    int result2 = add(3, 7, 2);
    double result3 = add(2.5, 3.7);

    // Display the results
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}
