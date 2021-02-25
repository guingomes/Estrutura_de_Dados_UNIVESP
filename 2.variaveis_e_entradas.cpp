#include <iostream>
using namespace std;

int main() {
    int var;
    var = 5.2;
    cout << var << endl;

    float var1;
    var1 = 5.2;
    cout << var1 << endl;

    float var2;
    var2 = 5.2e99;
    cout << var2 << endl;

    double var3; 
    var3 = 5.2e99;
    cout << var3 << endl;

    bool var4;
    var4 = true;
    cout << "If variable is true then it get number: ";
    cout << var4 << endl;

    char var5;  //only the last one letter is display
    var5 = 'boll'; 
    cout << var5 << endl;

    string var6;
    var6 = "boll"; //string always get " " not ' '
    cout << var6 << endl;

    int age;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "Age: " << age << endl;
    return 0;
}