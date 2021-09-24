#include <iostream>

using namespace std;

int main(){
    //Declaração de variáveis
	int num, soma1, soma2, i, j;
	
	//Definição do valor de "num" pelo usuário
	cin >> num;
	
	//Valores iniciais de j, i, soma1 e soma2
	i = 0;
	j = 0;
	soma1 = 0;
	soma2 = 0;
	
	//Aqui, o "while" é repetido até que o usuário digite 0
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
	
	/*Nesta seção, o programa "printa" os respectivos valores da quantidade de impares e pares, 
	  e a soma dos impares com impares e pares com pares*/
	cout << j << " impares, total = " << soma2 << "\n";
	cout << i << " pares, total = " << soma1 << "\n";
	
	return 0;
}
