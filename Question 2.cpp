//Write a program to solve non-linear equation using Newton’s method. Your program should read an initial guess from keyboard and display the followings if the solution is obtained:
//a. Estimated root of the equation 
//b. Functional value at calculated root 
//c. Required number of iterations 





#include <iostream>
#include <cmath>
using namespace std;

// Function to represent the equation f(x) = e^(-x) - x
double func(double x) {
    return exp(-x) - x;
}

// Derivative of the function f'(x) = -e^(-x) - 1
double derivative(double x) {
    return -exp(-x) - 1;
}

// Function to implement Newton's Method
void newton(double initial_guess, int max_iterations, double tolerance) {
    double x = initial_guess;
    int iteration = 0;

    while (iteration < max_iterations) {
        // Compute the function value and its derivative at the current point
        double fx = func(x);
        double fx_prime = derivative(x);

        // Check if the derivative is zero (to avoid division by zero)
        if (fx_prime == 0) {
            cout << "Derivative is zero, no solution found." << endl;
            return;
        }

        // Update the guess using Newton's method
        double new_x = x - fx / fx_prime;

        // Check if the change is smaller than the tolerance
        if (fabs(new_x - x) < tolerance) {
            cout << "Converged to the root: " << new_x << endl;
            cout << "Functional value at the root: " << func(new_x) << endl;
            cout << "Number of iterations: " << iteration + 1 << endl;
            return;
        }

     
        x = new_x;
        iteration++;
    }

    // If maximum iterations are reached, output the last result
    cout << "Maximum iterations reached. Approximate root: " << x << endl;
    cout << "Functional value at the approximate root: " << func(x) << endl;
    cout << "Number of iterations: " << max_iterations << endl;
}

int main() {
    double initial_guess;
    int max_iterations;
    double tolerance;

    // Read the initial guess, maximum iterations, and tolerance from the user
    cout << "Enter an initial guess for the root: ";
    cin >> initial_guess;

    cout << "Enter the maximum number of iterations: ";
    cin >> max_iterations;

    cout << "Enter the desired tolerance: ";
    cin >> tolerance;

    // Call the Newton's Method to solve the equation
    newton(initial_guess, max_iterations, tolerance);

    return 0;
}

