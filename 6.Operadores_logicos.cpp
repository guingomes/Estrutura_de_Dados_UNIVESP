//utilizando o mesmo algoritmo anterior e acrescentando casos de: E (&&); OU (||); NÃO (!)
#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a Nota 1: \n";
    cin >> nota1;
    cout << "Informe a Nota 2: \n";
    cin >> nota2;

    float freq;
    cout << "Qual a frequencia do aluno?\n";
    cin >> freq;
    
    float media=(nota1+nota2)/2;
    cout << "Media= " << media << endl;    

      if (media < 2.5){
        cout << "Nota final: D\n";
    } else if (media < 5){
        cout << "Nota final: C\n";
    } else if (media < 7.5){
        cout << "Nota final: B\n";
    } else{
        cout << "Nota final: A\n";
    }
    
    //Operadores lógicos E: &&; OU: ||; NÃO: !
    
    /*if (media >= 5 && freq >=75){
        cout << "Aluno aprovado!\n";
    } else{
        cout << "Aluno reprovado\n";
    } */

    /*if (media < 5 || freq < 75){
        cout << "Aluno Reprovado :(\n";
    } else{
        cout << "Aluno Aprovado!\n"; 
    } */

    //Operador ternário
    (media >=5 && freq>=75) ? cout << "Aprovado" : cout << "Reprovado";


    
    return 0;
}

