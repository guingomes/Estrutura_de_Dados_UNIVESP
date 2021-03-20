//crie um algorítmo em c++, em que o usuário informa os gastos com alimentação de 5 familias,
//calcule a média de gastos e informe se cada família gastou abaixo, acima ou na média.
//aula 14 douglas
#include <iostream>
using namespace std;

int main(){
    float gastofamilia[5];
    for(int i=0; i<5; i++){
        cout << "Digite o gasta da familia " << i+1 << endl;
        cin >> gastofamilia[i];
    }
    float media=0;
    for(int i=0; i<5; i++){
        media+=gastofamilia[i];
    }
    media=media/5;

    cout << "A media de gastos das 5 familias e: " << media << endl;

    for(int i=0 ; i<5 ; i++){
        if (gastofamilia[i] < media){
            cout << "O gasto da familia " << i+1 << " esta abaixo da media.\n";
        }else if (gastofamilia[i] > media){
            cout << "O gasto da familia " << i+1 << " esta acima da media.\n";
        }else {
            cout << "O gasto da familia " << i+1 << " esta na media.\n";
        }
    }
    
    return 0;
}
