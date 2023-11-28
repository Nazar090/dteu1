#include <iostream>

using namespace std;

double z1(int b) {
    return (sqrt(2 * b + 2 * sqrt(pow(b, 2) - 4))) / sqrt(pow(b, 2) - 4) + b + 2;
}

double z2(int b) {
    return 1 / sqrt(b + 2);
}

int main () {
    double b;
    cout << "Enter b value: ";
    cin >> b;
    cout << "z1 = " << z1(b) << "\nz2 = " << z2(b) << endl;
    return 0;
}
