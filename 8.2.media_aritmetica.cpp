/* objetivo é criar um programa em C++ que leia as notas de um aluno e dê como resultado a sua média. 
Mostre também se a média do aluno está acima ou abaixo da média da turma.
*/

#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, medturma;
    cout << "Digite a nota 1: \n";
    cin >> n1;
    cout << "Digite a nota 2: \n";
    cin >> n2;
    cout << "Digite a nota 3: \n";
    cin >> n3;
    cout << "Digite a media da turma: \n";
    cin >> medturma;

    float mediaaluno=(n1+n2+n3)/3;
    cout << "A media do aluno e: " << mediaaluno << endl;

    if (mediaaluno < medturma){
        cout << "O aluno esta abaixo da media!\n";
    } else if(mediaaluno == medturma){
        cout << "O aluno esta na media: \n";
    } else{
        cout << "O aluno esta acima da media!\n";
    }
    return 0;
}