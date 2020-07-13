#include <iostream>
#include <string>

using namespace std;

int main(){

string nombre;
cout << "introduce tu nombre" << endl;
cin >> nombre;
cout << "tu nombre es " << nombre << endl;
// es el equivalente al system("pause") 
cin.ignore();
cin.get();
return 0;
}