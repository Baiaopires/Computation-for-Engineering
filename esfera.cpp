#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	//Aqui eu defino as variáveris da minha solução
	double raio, area, volume;
	
	//Neste espaço, peço para quem utilizar o código para colocar qualquer número, de forma a estabelecer um valor para o raio
	cout << ""; cin >> raio;
	
	/*Após a entrada do valor do raio, são calculados os valores, respectivamente, da área da esfera e do volume da esfera
	  a partir das fórmulas conhecidas das duas e com o valor de pi se igualando a 3,14 */
	area = 4 * 3.14 * raio * raio;
	volume = (4 * 3.14 * raio * raio * raio)/3;
	
	/*É então, após os devidos cálculos, mostrado no terminal os respectivos valores da área e do volume, com precisão em 0
	  e 3 casas decimais respectivamente */
	cout << "area = " << setprecision(0) << fixed <<  area << ", " << setprecision(3) << area << endl;
	cout << "volume = " << setprecision(0) << fixed <<  volume << ", " << setprecision(3) << volume << endl;
	return 0;
}
