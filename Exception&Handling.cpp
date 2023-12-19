#include <iostream>
#include <string>

using namespace std;

int main()
{
    try
    {
        // Get user input for two integers
        cout << "Enter the numerator (integer): ";
        int numerator;
        cin >> numerator;

        cout << "Enter the denominator (integer): ";
        int denominator;
        cin >> denominator;

        // Check if the denominator is zero
        if (denominator == 0)
        {
            throw runtime_error("Error: Division by zero is not allowed.");
        }

        // Perform division and display the result
        double result = static_cast<double>(numerator) / denominator;
        cout << "Result of division: " << result << endl;
    }
    catch (const exception &ex)
    {
        cerr << "Exception caught: " << ex.what() << endl;
    }

    return 0;
}
