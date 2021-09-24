#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	double raio, area, volume;
	cout << ""; cin >> raio;
	area = 4 * 3.14 * raio * raio;
	volume = (4 * 3.14 * raio * raio * raio)/3;
	
	cout << "area = " << setprecision(0) << fixed <<  area << ", " << setprecision(3) << area << endl;
	cout << "volume = " << setprecision(0) << fixed <<  volume << ", " << setprecision(3) << volume << endl;
	return 0;
}
