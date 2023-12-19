#include <iostream>

using namespace std;

// Class template for a generic Pair
template <typename T1, typename T2>
class Pair
{
public:
    T1 first;
    T2 second;

    Pair(const T1 &f, const T2 &s) : first(f), second(s) {}

    void display() const
    {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};

// Function template to find the maximum of two values
template <typename T>
T maxOfTwo(const T &a, const T &b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Using the Pair template
    Pair<int, double> myPair(5, 3.14);
    cout << "Using Pair template:" << endl;
    myPair.display();
    cout << endl;

    // Using the maxOfTwo template with different types
    int intResult = maxOfTwo(10, 20);
    double doubleResult = maxOfTwo(3.5, 2.8);

    cout << "Using maxOfTwo template:" << endl;
    cout << "Max of two integers: " << intResult << endl;
    cout << "Max of two doubles: " << doubleResult << endl;

    return 0;
}
