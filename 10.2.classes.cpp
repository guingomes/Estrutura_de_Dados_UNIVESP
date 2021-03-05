#include <iostream>
using namespace std;

//3 variaveis na classe carro ano, valor, kilometragem
class carro{
    private:
    int ano;
    float valor, km;

    public: 
    //construtor - função contrutor serve para chamar os dados sem precisar do set.
    carro(int a=0, float v=-1, float k=-1){
        ano = a;
        valor = v;
        km = k;
    }



    void setano(int a){
        ano = a;        
        //this->ano = ano;
    }
    int getano(){
        return ano;
    }
    //valor
    void setvalor(float v){
        valor = v;
    }
    float getvalor(){
        return valor;
    }
    //km
    void setkm(float k){
        km = k;
    }
    float getkm(){
        return km;
    }
};

int main(){
    carro palio(2007, 10000, 150000);
    //carro palio;
    //palio.setano(2007);
    //palio.setvalor(10000);
    // palio.setkm(150000);
    cout << "Palio\n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "valor: " << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;

    carro celta(2000, 12000, 95000);
    //carro celta;
    //celta.setano(2000);
    //celta.setvalor(12000);
    //celta.setkm(95000);
    cout << "Celta\n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "valor: " << celta.getvalor() << endl;
    cout << "Quilometragem: " << celta.getkm() << endl;

    return 0;
}
