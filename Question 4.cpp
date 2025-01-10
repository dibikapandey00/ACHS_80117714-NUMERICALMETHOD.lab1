//Write a program to solve non-linear equation using Fixed Point Iteration method. Your  program should read an initial guess from keyboard and display the followings if the solution is  obtained: 
//a. Estimated root of the equation 
//b. Functional value at calculated root 
//c. Required number of iterations 





#include <iostream>
#include <cmath>
using namespace std;

// Function to represent g(x) = e^(-x)
double g(double x) {
    return exp(-x);  // g(x) = e^(-x)
}

// Function to implement the Fixed Point Iteration Method
void fixedPointIteration(double x0, int max_iterations, double tolerance) {
    int iteration = 0;
    double x1;

    while (iteration < max_iterations) {
        // Compute the next approximation
        x1 = g(x0);

        // Check if the change is smaller than the tolerance
        if (fabs(x1 - x0) < tolerance) {
            cout << "Converged to the root: " << x1 << endl;
            cout << "Functional value at the root: " << exp(-x1) - x1 << endl;
            cout << "Number of iterations: " << iteration + 1 << endl;
            return;
        }

        // Update x0 for the next iteration
        x0 = x1;
        iteration++;
    }

    // If maximum iterations are reached, output the last result
    cout << "Maximum iterations reached. Approximate root: " << x1 << endl;
    cout << "Functional value at the approximate root: " << exp(-x1) - x1 << endl;
    cout << "Number of iterations: " << max_iterations << endl;
}

int main() {
    double x0;
    int max_iterations;
    double tolerance;

    // Read the initial guess, maximum iterations, and tolerance from the user
    cout << "Enter the initial guess (x0): ";
    cin >> x0;

    cout << "Enter the maximum number of iterations: ";
    cin >> max_iterations;

    cout << "Enter the desired tolerance: ";
    cin >> tolerance;

    // Call the Fixed Point Iteration method to solve the equation
    fixedPointIteration(x0, max_iterations, tolerance);

    return 0;
}

