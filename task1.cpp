
#include <iostream>

using namespace std;
const double pi = 3.14;
const int lightSpeed = 299792; // km/s
const int secondsInHour = 3600;

double surfaseArea(int r) {
    return 4 * pi * pow(r, 2);
}

double volumeArea(int r) {
    return 4 * pi * pow(r, 3);
}

int main () {
    int r;
    cout << "1.Input the radius(r): ";
    cin >> r;
    cout << "Surface area(S): " << surfaseArea(r) << "\nVolume area(V): " << volumeArea(r) << endl;
    cout << "2.Input count of hours: ";
    int countHours;
    cin >> countHours;
    cout << countHours * secondsInHour * lightSpeed << endl;
    return 0;
}
