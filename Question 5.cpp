//Write program to implement Horner’s method. 




#include <iostream>
using namespace std;

// Function to evaluate a polynomial using Horner's method
double hornerMethod(double x, double coefficients[], int n) {
    double result = coefficients[0]; // Start with the highest degree coefficient

    
    for (int i = 1; i < n; i++) {
        result = result * x + coefficients[i];
    }

    return result;
}

int main() {
    int degree;

    // Input degree of the polynomial
    cout << "Enter the degree of the polynomial: ";
    cin >> degree;

    
    double coefficients[degree + 1];


    cout << "Enter the coefficients starting from the highest degree:\n";
    for (int i = 0; i <= degree; i++) {
        cout << "Coefficient of x^" << degree - i << ": ";
        cin >> coefficients[i];
    }

 
    double x;
    cout << "Enter the value of x: ";
    cin >> x;

    // Evaluate the polynomial using Horner's method
    double result = hornerMethod(x, coefficients, degree + 1);

    
    cout << "The value of the polynomial at x = " << x << " is: " << result << endl;

    return 0;
}

