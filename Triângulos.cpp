#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, y, z;
	cin >> x >> y >> z;
		if (x < y + z && y < x + z && z < x + y){
			if (x == y && x == z ){
				cout << "equilatero";
			}
			else if ((x == y && x < z) || (x == z && x < y) || (y == z && y < x)){
				cout << "isosceles";
			}
			else if (x != y && x != z && z != y){
				cout << "escaleno";
			}
		}
		else {
		cout << "invalido\n"; }

	
	return 0;
}
