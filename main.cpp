#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Contato {
    string nome;
    string numero;
};

int main() {
    vector<Contato> agenda;
    Contato primeiro;
    Contato segundo, terceiro;

    segundo.nome = "Cicranim dos Santos";
    segundo.numero = "88888888";

    primeiro.nome = "Fulanim da Silva";
    primeiro.numero = "999999999";

    terceiro.nome = "Beltranim de Sousa";
    terceiro.numero = "77777777";

    agenda.push_back(primeiro);
    agenda.push_back(segundo);
    agenda.push_back(terceiro);

    for(int i = 0; i < agenda.size(); i++) {
        if(agenda[i].nome == "Beltranim de Sousa") {
            cout << "Encontrado" << endl;
        }
    }

    return 0;
}