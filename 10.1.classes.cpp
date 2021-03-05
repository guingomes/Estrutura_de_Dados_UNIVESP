#include <iostream>

using namespace std;

class propaganda{
    private:

    public:
    
    void inscrever(){
        cout << "Se inscreva no curso de C++\n";
    }

    void curta(){
        cout << "Curta as paginas do curso no facebook!\n";
    }

};

int main(){
    propaganda canal;
    canal.inscrever();
    canal.curta();

    return 0;
}
