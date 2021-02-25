#include <iostream>
#include <math.h> //biblioteca para fazer potencia entre outras coisas.
using namespace std;

int main(){
    

    int soma; //apos a atribuição da variavél pode-se atribuir a função soma.
    int a=5, b=2;
    soma = a + b;

    cout << "Sendo a=5 e b=2, as operacoes abaixo serao:" << endl;

    cout << "Soma: "  << soma << endl;

    /* Pode ser vantajoso atribuir a soma direto na função imprimir
    cout << "A soma é: " << a+b << endl;
    Dessa forma, diminui o uso da memória */

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;

    int mult = a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a/b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restdiv = a%b;
    cout << "O resto da divisao: " << restdiv << endl;

    float div = (float)a/(float)b; //se não atribuir as variáveis a e b como float, a divisão retornará com valores inteiros (int)
    cout << "Divisao: " << div << endl;

    float pot1 = pow(a,b);
    cout << "Potencia de a^b: " << pot1 << endl;

    float pot2 = pow(b,a);
    cout << "Potencia de b^a: " << pot2 << endl;

    //Incremento e Decremento
    //Formas de incremento a*=3; a+=2
    
    cout << "a antigo: " << a << endl;
    a+=1;
    cout << "a novo, com incremento de 1: " << a << endl;

    cout << "b antigo: " << b << endl;
    b-=1;
    cout << "b novo, com decremento de 1: " << b << endl;

    
    return 0;
}