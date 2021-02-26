//objetivo é aprender a programar as primeiras funções em linguagem C++.

#include <iostream>

using namespace std;

#define pi 3.14; //define serve para definir uma variavel imutável. Interessante para repetições
#define curtir cout << "Curta essa pagina!"

//void significa que não será retornado nada. para retornar, repetir a função dentro do main
void inscrever(){
    cout << "Aprendizado da linguagem de programacao em C++" << endl;;
}

int somar(int &x, int &y){
    int t;
    t=1;

    x=30; //definindo o x sendo 30 não irá mudar o valor de a. Entretanto, irá interferir na soma.
    //para modificar o valor de a será necessário declarar o & junto a variável. assim o a passa a ser 30.

    int soma;
    soma = x+y;
    return soma;
}

int main(){
    int t;
    t = 0;

    inscrever();

    int a=5, b=4;
    int s;
    s = somar(a, b);
    cout << "Valor de a: " << a << endl;

    cout << "Soma: " << s << endl;

    cout << "Valor de t: " << t << endl;

    //cout << pi;

    curtir;

    return 0;
}
