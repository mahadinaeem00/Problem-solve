#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Setting the precision to 12 decimal places
    cout << setprecision(3);

    // Printing the two variables
    cout << "Double Type Number  = " << a << endl;
    cout << "Float Type Number      = " << b << endl;

    return 0;
}
