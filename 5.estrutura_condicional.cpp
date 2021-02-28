//exemplo criar um programa que lê as notas e dê como resultado a média aritmética e se o aluno foi aprovado.
/* -comece declarando duas variáveis;
-indique para o usuário informar as notas;
-declare uma variável media
-informe se o aluno foi aprovado ou reprovado.
-informe o conceito do aluno.
*/
#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a Nota 1: \n";
    cin >> nota1;
    cout << "Informe a Nota 2: \n";
    cin >> nota2;
    
    float media=(nota1+nota2)/2;
    cout << "Media= " << media << endl;

    // comparação: Igual: ==; Diferente: !=
    
    //***if simples***
    /*  if (media >= 5){
        cout << "Aluno aprovado!\n";
    }*/

    if (media>= 5) {
        cout << "Aluno aprovado!\n";
    } else {
        cout << "Aluno reprovado :(\n";
    }

    if (media < 2.5){
        cout << "Nota final: D\n";
    } else if (media < 5){
        cout << "Nota final: C\n";
    } else if (media < 7.5){
        cout << "Nota final: B\n";
    } else{
        cout << "Nota final: A\n";
    }
    
    return 0;
}
