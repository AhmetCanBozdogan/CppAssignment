#include <iostream>
using namespace std;

int main() {
    double t;
    double g = 9.80665;
    cout << "Enter the time:";
    cin >> t ;
    cout << "The distance is " << g*t*t/2 << " meter " << endl ;
    return 0;
}