#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

const int NUMALUNOS=20;

struct Alunos{
    string nomAluno;
    int numAluno[5];
};
Alunos alunos[NUMALUNOS];

/*void iniciarTurma() {
    alunos[0].nomAluno = "Sergio";
    alunos[1].nomAluno = "Tomas G.";
    alunos[2].nomAluno = "Andre";
    alunos[3].nomAluno = "Marcelo";
    alunos[4].nomAluno = "Gonçalo P.";
    alunos[5].nomAluno = "Henrique";
    alunos[6].nomAluno = "Gonçalo F.";
    alunos[7].nomAluno = "Renah";
    alunos[8].nomAluno = "Eduardo";
    alunos[9].nomAluno = "Samuel";
    alunos[10].nomAluno = "Frederico";
    alunos[11].nomAluno = "Ruben";
    alunos[12].nomAluno = "Rui";
    alunos[13].nomAluno = "Martim";
    alunos[14].nomAluno = "Mateus";
    alunos[15].nomAluno = "David";
    alunos[16].nomAluno = "Santiago";
    alunos[17].nomAluno = "Tomas";
    alunos[18].nomAluno = "Tiago";
    alunos[19].nomAluno = "Gabriel";

    for (int i=0;i<NUMALUNOS;i++) {
        alunos[i].numAluno = to_string(14677 + i);
    }
}

void mostrarInfoAluno() {
    ofstream ficheiro ("infoalunos.txt");
    for (int i=0;i<NUMALUNOS;i++) {
        ficheiro << alunos[i].numAluno << ";" << alunos[i].nomAluno << endl;
        cout << alunos[i].numAluno << ";" << alunos[i].nomAluno << endl;
    }
    ficheiro.close();
}*/

void dividirTexto() {
    string myText;
    fstream ficheiro ("infoalunos");
    while (getline (ficheiro, myText)) {
        char myStr[] = to_string(myText);
        for (int i=0;i<5;i++) {
            cout << myStr[i];
        }
    }
}

void lerDados(string ficheiros) {
    string myText;
    int aux, i=0;
    fstream MyReadFile(ficheiro);
    while (getline (MyReadFile, myText)) {
        int length= myText.length();
        char myStr[length+1];
        strcpy(myStr, myText.c_str());
        char * myPtr = strtok (myStr, ";");
        aux = 0;
        while (myPtr != NULL) {
            if (aux == 0) alunos[i].numAluno = stoi(myPtr);
            if (aux == 1) alunos[i].nomAluno = myPtr;
            aux ++;
            myPtr = Strtok(NULL, ";");
        }
        i++;
    }
}

int main () {
    //iniciarTurma();
    //mostrarInfoAluno();
    return 0;
}
