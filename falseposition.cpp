#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double func(double x) {
    return pow(x, 3) - x - 1;
}

int main() {
    double x0, x1, x2;
    cout << "Enter two numbers x0 and x1 such that f(x0) * f(x1) < 0:" << endl;
    cin >> x0 >> x1;

    int n = 0;
    if (func(x0) * func(x1) < 0) {
        cout << "n" << setw(20) << "x0" << setw(20) << "f(x0)" << setw(20) << "x1" << setw(20) << "f(x1)" << setw(20) << "x2" << setw(20) << "f(x2)" << endl;

        while (true) {
            cout << ++n << setw(20) << x0 << setw(20) << func(x0) << setw(20) << x1 << setw(20) << func(x1);

            x2 = x0 - ((x1 - x0) * func(x0)) / (func(x1) - func(x0));
            double f_x2 = func(x2);

            cout << setw(20) << x2 << setw(20) << f_x2 << endl;

            if (abs(f_x2) <= 0.00005) {
                cout << "The root is = " << x2 << endl;
                break;
            }

            if (func(x0) * f_x2 < 0) {
                x1 = x2;
            } else {
                x0 = x2;
            }
        }
        cout << "root " << x2 << endl;
    } else {
        cout << "Invalid numbers" << endl;
    }

    return 0;
}
