#include <iostream>

using namespace std;


int main() {
    const double N = 9.1;
    const double b = 3;

    cout << "Введіть значення параметра x: ";
    double x;
    cin >> x;

    double a = sqrt(pow(x, 2) + pow(b, 2));

    double y = log10(a) / log10(log(b));

    cout << "Результат обчислення функції y = F(x): " << y << endl;

    return 0;
}
