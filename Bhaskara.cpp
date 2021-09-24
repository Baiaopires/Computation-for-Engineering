#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    //Definição de variáveis
    double a, b, c, bhsk1, bhsk2;
    
    //Entrada do usuário para as respectivas variáveis
    cin >> a >> b >> c;
    
    //Definindo o valor de x1 e x2
    bhsk1 = (-(b) + sqrt((b*b) - (4*a*c)))/(2*a);
    bhsk2 = (-(b) - sqrt((b*b) - (4*a*c)))/(2*a);
    
    //Aqui, eu defini o que aconteceria caso o valor de dentro da raiz quadrada fosse negativo
    if ((b*b - 4*a*c) < 0){
        cout << setprecision(2) << fixed << "x1 = " << -b/(2*a) << " + " << (sqrt(-1*((b*b) - (4*a*c))))/(2*a) << "i" << endl;
        cout << setprecision(2) << fixed << "x2 = " << -b/(2*a) << " - " << (sqrt(-1*((b*b) - (4*a*c))))/(2*a) << "i";
    }
    //Aqui, o que acontecerá caso o valor de dentro da raiz quadrada não for negativo, logo, positivo
    else {
        cout << setprecision(2) << fixed << "x1 = " << bhsk1 << endl;
        cout << setprecision(2) << fixed << "x2 = " << bhsk2;
    }
    
    return 0;
}
