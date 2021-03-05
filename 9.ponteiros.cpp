/*Ponteiros: armazenam o endereço de uma variável. o asterisco (*) simboliza o ponteiro.
*/
#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    int var1;
    int* pont1;
    var1=5;
    pont1=&var1;
    cout << "O valor da variavel por meio do seu nome: " << var1 << endl;
    cout << "Endereco armazenado no ponteiro: " << pont1 << endl;
    cout << "Valor da variavel por meio do ponteiro: " << *pont1 << endl;

    int var2;
    //var2 = *pont1;
    //cout << var2;

    //var1=30;
    //*pont1=30;
    //cout << var1;

    var2 = 50;
    //pont1 = &var2;
    //cout << *pont1 << endl;
    //cout << var1;

    //int* pont2;
    //pont2 = NULL;
    //cout << *pont2;

    return 0;
}
