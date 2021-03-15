//lista de elementos do mesmo tipo (int, float, booleano)

#include <iostream>

using namespace std;

int main(){
    /*Alocação estática
    //int vet[4];
    //vet[0]=5;
    //vet[1]=10;
    int vet[4] = {5,10};


    //cout << vet[0] << endl;
    cout << "[ ";

    for (int i=0 ; i<4 ; i++){
        cout << vet[i] << " ";
        
    }

    //cout << " ]" << endl;

    int x = sizeof(vet)/sizeof(int);
    int y = sizeof(int);
    cout << "Tamanho de inteiro: " << y << endl;
    cout << "Quantidade de elementos do vetor: " << x << endl; */

    //Alocação dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    
    for (int i=0 ; i<tamanho; i++){

        cout << "Digite o elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    }
    
    for (int i=0 ; i<tamanho ; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    //delete [] vetor;

    return 0;
}
