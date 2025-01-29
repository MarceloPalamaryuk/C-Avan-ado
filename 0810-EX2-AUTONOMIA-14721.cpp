#include <stdio.h>
#include <iostream>
using namespace std;

const int NUMMODULOS = 7;


struct Modulo {
    string codModulo;
    string nomeModulo;
    string disciplina;
    int notaModulo;
    bool concluido;
};

void mostrarInfo (Modulo x, Modulo y) {
    cout << "O modulo " << x.nomeModulo;
    cout << " numero " << x.codModulo;
    cout << " da disciplina de " << x.disciplina;
    cout << ", esta ";
    if (x.concluido) {
        cout << " concluido";
    } else {cout << " em andamento ";}
    cout << " com nota " << x.notaModulo;

    cout << "\n\n";

    cout << "O modulo " << y.nomeModulo;
    cout << " numero " << y.codModulo;
    cout << " da disciplina de " << y.disciplina;
    cout << ", esta ";
    if (y.concluido) {
        cout << " concluido";
    } else {cout << " em andamento ";}
    cout << "com nota " << y.notaModulo;
}

double mediaDisciplina(Modulo x, Modulo y) {
    double media = 0, numNotas = 0;
    if (x.concluido) {
        media = media+x.notaModulo;
        numNotas = numNotas+1;
    }
    if (y.concluido) {
        media = media+y.notaModulo;
        numNotas = numNotas+1;
    }
    media = media/numNotas;
    return media;
}

string concluidoDisciplina(Modulo x, Modulo y) {
    string res = "";
    if (x.concluido && y.concluido) {
        res = res + x.nomeModulo + ", " + y.nomeModulo;
    } else if (y.concluido) {
        res = res + y.nomeModulo;
    } else if (x.concluido) {
        res = res + x.nomeModulo;
    } else {res = "Nenhum!";}
    return res;
}

string porconcluirDisciplina(Modulo x, Modulo y) {
    string res = "";
    if (!x.concluido && !y.concluido) {
        res = res + x.nomeModulo + ", " + y.nomeModulo;
    } else if (!y.concluido) {
        res = res + y.nomeModulo;
    } else if (!x.concluido) {
        res = res + x.nomeModulo;
    } else {res = "Nenhum!";}
    return res;
}

int main() {
    Modulo modulos[NUMMODULOS];

    modulos[0].codModulo = "0804";
    modulos[0].nomeModulo = "Algoritmos";
    modulos[0].disciplina = "Programacao";
    modulos[0].notaModulo = 18;
    modulos[0].concluido = true;

    modulos[1].codModulo = "0805";
    modulos[1].nomeModulo = "Estruturas de Dados";
    modulos[1].disciplina = "Programacao";
    modulos[1].notaModulo = 17;
    modulos[1].concluido = false;

    mostrarInfo(modulo1, modulo2);


    cout << "\n\nA media da nota e = " << mediaDisciplina(modulo1, modulo2);

    cout << "\n\nOs modulos concluidos sao: " << concluidoDisciplina(modulo1, modulo2);

    cout << "\n\nOs modulos por concluidos sao: " << porconcluirDisciplina(modulo1, modulo2);

    /*cout << "O modulo " << modulo1.nomeModulo;
    cout << " numero " << modulo1.codModulo;
    cout << " da disciplina de " << modulo1.disciplina;
    cout << ", esta ";
    if (modulo1.concluido) {
        cout << " concluido";
    } else {cout << " em andamento ";}
    cout << "com nota " << modulo1.notaModulo;

    cout << "\n\n";

    cout << "O modulo " << modulo2.nomeModulo;
    cout << " numero " << modulo2.codModulo;
    cout << " da disciplina de " << modulo2.disciplina;
    cout << ", esta ";
    if (modulo2.concluido) {
        cout << " concluido";
    } else {cout << " em andamento ";}
    cout << "com nota " << modulo2.notaModulo; */

    return 0;
}
