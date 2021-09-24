#include <iostream>

using namespace std;

int main(){
    //Declaração das variáveis, neste caso, "num" para número e "deno" para denominador
	int num, deno;
	
	//Input do usuário na variável "num"
	cin >> num;
	
	//Aqui, eu basicamente estabeleci que a variável "deno" guarde o valor atual de "num"
	deno = num;
	
	//Nesta seção, o algoritimo vai testar se "num", primeiramente, é maior que -1, ou seja, positivo, pois "num" é do tipo int.
	//Com isso, a variável entra no primeiro loop "while", em que o programa irá testar se "num" é diferente de zero e de 1. Caso
	//as duas condições sejam cumpridas, o próximo "while" irá dividir "num" por "deno" até que seja encontrado um valor para "deno",
	//maior que 1, em que o resto da divisão de "num" por "deno" seja zero, provando que "num" é "nao primo". Caso contrário, se
	//"deno == 2" e "num" não for divisível por "deno", o programa irá assumir que "num" é "primo".
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
			cin >> num;
			deno = num;
		}
		//Isto está aqui apenas para garantir que o caso exclusivo do "num == 1" seja considerado como "nao primo", assim como solicitado
		else{
			cout << "nao primo\n";
			cin >> num;
			deno = num;
		}
	}
	return 0;
}
