#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //Declaração das variáveis do tipo double
	double x, y, z;
	//Entrada do usuário para os respectivos valores das medidas dos lados do triângulo
	cin >> x >> y >> z;
	//Algoritmo que diz o tipo de triângulo formado com os parámetros "inputados"
		if (x < y + z && y < x + z && z < x + y){
			if (x == y && x == z && y == z){
				cout << "equilatero";
			}
			else if ((x == y && x < z) || (x == z && x < y) || (y == z && y < x)){
				cout << "isosceles";
			}
			else if (x != y && x != z && z != y){
				cout << "escaleno";
			}
		}
		//Mensagem padrão mostrada caso nenhuma das condições anteriores sejam cumpridas
		else {
		cout << "invalido\n"; }

	return 0;
}
