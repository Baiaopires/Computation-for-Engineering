#include <iostream>

using namespace std;

int main(){
	int num, deno;
	
	cin >> num;
	
	deno = num;
	
	while (num > -1){
		deno--;
		if(deno != 0 && num != 1){
			while(((num % deno) != 0) && deno > 1){
			deno--;
			}
			if (deno == 1){
				cout << "primo\n";
			}
			else if (deno != 1){
				cout << "nao primo\n";
			}
			else {
				cout << "primo\n";
			}
			cin >> num;
			deno = num;
		}
		else{
			cout << "nao primo\n";
			cin >> num;
			deno = num;
		}
	}
	
	/*
	while (num > 0){
		if(num > 13){
			if (((num % 2) == 0) || ((num % 3) == 0) || ((num % 5) == 0) || ((num % 7) == 0) || ((num % 11) == 0) || ((num % 13) == 0)){
				cout << "nao primo";
			}
			else {
				cout << "primo";
			}
		}
		else {
			if (num <= 13){
				if ((num != 2) && (num != 3) && (num != 5) && (num != 7) && (num != 11) && (num != 13)){
					cout << "nao primo";
				}
				else {
					cout  << "primo";
				}
			}
		}
	cout << "\n";
	cin >> num;
	}
	*/
	return 0;
}
