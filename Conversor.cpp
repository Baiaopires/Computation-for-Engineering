#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	//Neste espaço defino os tipos das variáveis
	double valor1;
    int valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, valor10, valor11, valor12, valor13;
	
	//Aqui é requisitado para que o usuário do programa insira o valor a ser convertido
	cout << ""; cin >> valor1;
	
	/*Aqui é onde a mágica acontece. Testei várias combinações. No fim, descobri que com a utilização
	  do reajuste do valor de "valor1" a cada cálculo dos seguintes "valores", o que restaria no "valor1"
	  seria o resto da subtração de "valor1" pelo valor anterior */
	valor2 = valor1/100;
	valor1 = valor1 - valor2*100;
	valor3 = valor1/50;
	valor1 = valor1 - valor3*50;
	valor4 = valor1/20;
	valor1 = valor1 - valor4*20;
	valor5 = valor1/10;
	valor1 = valor1 - valor5*10;
	valor6 = valor1/5;
	valor1 = valor1 - valor6*5;
	valor7 = valor1/2;
	valor1 = valor1 - valor7*2;
	valor8 = valor1/1;
	valor1 = valor1 - valor8*1;
	valor9 = valor1/0.5;
	valor1 = valor1 - valor9*0.5;
	valor10 = valor1/0.25;
	valor1 = valor1 - valor10*0.25;
	valor11 = valor1/0.10;
	valor1 = valor1 - valor11*0.10;
	valor12 = valor1/0.05;
	valor1 = valor1 - valor12*0.05;
	valor13 = valor1/0.01 + 0.001;
	
	//Aqui eu apenas mandei o programa mostrar ao usuário o resultado do algoritmo formatado
	cout << valor2 << " nota(s) de R$100" << endl;
	cout << valor3 << " nota(s) de R$50" << endl;
	cout << valor4 << " nota(s) de R$20" << endl;
	cout << valor5 << " nota(s) de R$10" << endl;
	cout << valor6 << " nota(s) de R$5" << endl;
	cout << valor7 << " nota(s) de R$2" << endl;
	cout << valor8 << " moeda(s) de R$1" << endl;
	cout << setprecision(0) << fixed << valor9 << " moeda(s) de R$0,50" << endl;
	cout << setprecision(0) << fixed << valor10 << " moeda(s) de R$0,25" << endl;
	cout << setprecision(0) << fixed << valor11 << " moeda(s) de R$0,10" << endl;
	cout << setprecision(0) << fixed << valor12 << " moeda(s) de R$0,05" << endl;
	cout << setprecision(0) << fixed << valor13 << " moeda(s) de R$0,01" << endl;
	
	return 0;
}
