#include <iostream>
using namespace std;

#define EPSILON 0.01

double fun(double x) {
    return x * x * x + x * x + 2;
}

void bisection(double a, double b) {
    if (fun(a) * fun(b) >= 0) {
        cout << "Invalid input - no root exists within the given range.";
        return;
    }
    double c = a;
    while ((b - a) >= EPSILON) {
        c = (a + b) / 2;
        if (fun(c) == 0) {
            break;
        } else if (fun(c) * fun(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    cout << "Value of the root: " << c;
}

int main() {
    double a = -200, b = 300;
    bisection(a, b);
    return 0;
}
