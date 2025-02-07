#include <iostream>
#include <stdio.h>
#include <string>
#include <ctime>
using namespace std;

const int NUMTELEMOVEIS = 10;
const int NUMRECARGAS = 1000;

struct Telemovel {
    int id;
    int numTel;
};

Telemovel telemoveis[NUMTELEMOVEIS];

struct Saldo {
    int idTelemovelSal;
    float saldo;
    float ultimaRecarga;
    time_t dataultimarecarga;
};

Saldo saldo[NUMTELEMOVEIS];

struct Recargas {
    int idTelemoveRec
    float adicionarSaldo;
    int valorTelemovel;
    time_t datarecarga;
};

Recargas recargas[NUMRECARGAS];

void iniciarTelemoveis() {
    int aux = 0;
    for (int i=0;i<NUMTELEMOVEIS-1;i++) {
        aux = aux + 101;

        telemoveis[i].numTel = 910000000 + aux;
        cout << telemoveis[i].numTel<< "\n";

        telemoveis[i].id = 150 + i+1;

        saldo[i].idTelemovelSal = 150 + i+1;

        saldo[i].saldo = 0;

        saldo[i].ultimaRecarga = 0;
    }
    telemoveis[9].numTel = 910000111;
    telemoveis[9].id = 160;
    saldo[9].idTelemovelSal = 160;
    saldo[9].saldo = 0;
    saldo[9].ultimaRecarga = 0;
}

void adicionarSaldo(int iD) {
    int res;
    cout << "Quanto dinheiro quere colocar?\n";
    cin >> res;

    for (int i=0;i<NUMTELEMOVEIS;i++) {
        if (iD = saldo[i].idtelemovel) {
            saldo[i].saldo += res;
        }
    }
}

int main() {
    int res1, res2;

    iniciarTelemoveis();

    cout << "**** BEM VINDO AO GESTOR DE SALDOS ****\n\n";
    cout << "Insira o seu id. Ex: 150/151\nR.:"
    cin >> res1;
    cout << "\n\nOque pretende fazer?\n1:Adicionar saldo\n2:Ver Historico de recargas.\nR.:"
    cin >> res2;

    if (res2 = 1) {
        adicionarSaldo(res1)
    }

    return 0;
}
