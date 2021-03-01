//objetivo é criar um programa que leia um número inteiro e positivo e informe a soma de todos os inteiros até o número escolhido.

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Diga um numero inteiro positivo:\n";
    cin >> n;

    int soma=0;
    int cont=1;
    /*while (cont <= n){
        soma+=cont;
        cont++;

    } */

    //nesse caso (DO WHILE) para n=0 a soam fica 1. Ou seja, não dá certo.
    /*do{
        soma+=cont;
        cont++;
    } while(cont <= n); */

    for (int j=1 ; j<=n ; j+=1){
        soma+=j;
    }

    cout << "A soma dos numeros de 0 ate " << n << " = " << soma << endl;

    return 0;
}