#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double v;
    double s;
    double jarak;

    cout << "Masukkan s : " ;
	cin >> s;
	cout << "Masukkan v : " ;
    cin >> v;
    jarak = sin(2 * s * 3.141 / 180) * 10;
    cout << "Jarak terjauh : " ;
    cout << jarak << endl;
    return 0;
}


