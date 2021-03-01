//Dada a função f(x0 = x^2-3x+5). Crie um algoritmo em C++ que tenha uma função que calcula o valor de f(a),
//em que a é um npumero real informado pelo usuário.
#include <iostream>
using namespace std;

float x;

int main(){
    cout << "Digite um numero: \n";
    cin >> x;
    float f= ((x*x) - (3*x) + 5);
        
    cout << "O resultado da funcao no ponto " << x << " vale: " << f;

    return 0;
}

/* 
outra maneira de resolver:

float f(float x){
    float valor;
    valor = x*x - 3*x + 5;
    return valor;
}

int main(){
    float a;
    cout << "Digite um numero real\n";
    cin >> a
    float valorf = f(a);
}

*/