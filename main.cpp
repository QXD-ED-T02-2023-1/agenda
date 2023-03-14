#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contato {
    string nome;
    string numero;
};

int main() {
    vector<Contato> agenda;
    Contato primeiro;
    Contato segundo;

    segundo.nome = "Cicranim dos Santos";
    segundo.numero = "88888888";

    primeiro.nome = "Fulanim da Silva";
    primeiro.numero = "999999999";

    agenda.push_back(primeiro);
    agenda.push_back(segundo);

    cout << agenda[0].nome << "\n" << agenda[0].numero << "\n";
    cout << agenda[1].nome << "\n" << agenda[1].numero << "\n";

    return 0;
}