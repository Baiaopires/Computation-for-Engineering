#include <iostream>

using namespace std;

int main(){
	int num, soma1, soma2, i, j;
	
	cin >> num;
	i = 0;
	j = 0;
	soma1 = 0;
	soma2 = 0;
	while (num > 0){
		if ((num % 2) == 0){
			++i;
			soma1 = soma1 + num;
		}
		else {
			soma2 = soma2 + num;
			++j;
		}
		cin >> num;
	}
	
	cout << j << " impares, total = " << soma2 << "\n";
	cout << i << " pares, total = " << soma1 << "\n";
	
	return 0;
}
