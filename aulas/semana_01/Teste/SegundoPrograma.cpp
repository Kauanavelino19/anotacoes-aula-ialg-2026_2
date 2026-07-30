

#include <iostream>
using namespace std;

void MostraMensagen(string &Nome) {
     cout << "Digite seu nome: ";
    cin >> Nome;

    cout << "Ola, seja bem vindo " << Nome << "!" << endl;
}

int main() {
    string nome;
    MostraMensagen(nome);

    return 0;
}