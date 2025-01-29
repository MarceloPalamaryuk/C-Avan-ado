 #include <iostream>
#include <stdio.h>
//#include <string>
using namespace std;

const int NUMALUNOS = 20;

struct Aluno {

    string nome;
    int idade;
    string curso;
    string localidade;
    bool concluido;
    string numeroAluno;
};
Aluno turma1P2024[NUMALUNOS];

/** estruturas de dados / strucks /structures */

void mostrainfo(Aluno xpto) {
    cout << "\n\n|Nome: " << xpto.nome;
    cout << " | Idade: " << xpto.idade;
    cout << " | Curso: " << xpto.curso;
    cout << " | Local: " << xpto.localidade;
    if (xpto.concluido){
        cout << " | Terminou o curso.";
    } else {
        cout << " | Frequenta o curso.";
    }

}

double mediaAlunos( Aluno x,Aluno y){
    return (x.idade + y.idade) / 2.0;
}

double mediaAlunos() {
    double media = 0;
    for (int i = 0; i<NUMALUNOS; i++) {
        media += turma1P2024[i].idade;
    }

    media /= NUMALUNOS;

    return media;
}

int numAlunoConcluiram() {
    int numConcluido = 0;
    for (int i=0;i<NUMALUNOS;i++) {
        if (turma1P2024[i].concluido) {
            numConcluido += 1;
        }
    }
    return numConcluido;
}

void alunosPorConcluir() {
    string res = "";
    for (int i=0;i<NUMALUNOS;i++) {
        if (!turma1P2024[i].concluido) {
            res = res + turma1P2024[i].nome + " (" + turma1P2024[i].numeroAluno + ")\n";
        }
    }
    cout << "\n\nOs alunos que frequentam o curso são:\n" << res;
}

void iniciarTurma() {
    turma1P2024[0].numeroAluno = "14618";
    turma1P2024[0].nome = "Sérgio Karaban";
    turma1P2024[0].idade = 15;
    turma1P2024[0].concluido = true;

    turma1P2024[1].numeroAluno = "14619";
    turma1P2024[1].nome = "Tomás Fernandes Granja";
    turma1P2024[1].idade = 15;
    turma1P2024[1].concluido = false;

    turma1P2024[2].numeroAluno = "14620";
    turma1P2024[2].nome = "Frederico Pereira Fonseca";
    turma1P2024[2].idade = 17;
    turma1P2024[2].concluido = false;

    turma1P2024[3].numeroAluno = "14621";
    turma1P2024[3].nome = "Gonçalo Ferreira Peixoto";
    turma1P2024[3].idade = 15;
    turma1P2024[3].concluido = true;

    turma1P2024[4].numeroAluno = "14622";
    turma1P2024[4].nome = "André Filipe Azevedo Silva";
    turma1P2024[4].idade = 15;
    turma1P2024[4].concluido = true;

    turma1P2024[5].numeroAluno = "14625";
    turma1P2024[5].nome = "Henrique Silva Oliveira";
    turma1P2024[5].idade = 15;
    turma1P2024[5].concluido = false;

    turma1P2024[6].numeroAluno = "14630";
    turma1P2024[6].nome = "Gonçalo Castro Ferreira";
    turma1P2024[6].idade = 21;
    turma1P2024[6].concluido = true;

    turma1P2024[7].numeroAluno = "14642";
    turma1P2024[7].nome = "Renan Tertuliano Straquicini";
    turma1P2024[7].idade = 18;
    turma1P2024[7].concluido = true;

    turma1P2024[8].numeroAluno = "14662";
    turma1P2024[8].nome = "Eduardo Ferreira Machado";
    turma1P2024[8].idade = 12;
    turma1P2024[8].concluido = false;

    turma1P2024[9].numeroAluno = "14674";
    turma1P2024[9].nome = "Samuel Ribeiro Torres";
    turma1P2024[9].idade = 15;
    turma1P2024[9].concluido = true;

    turma1P2024[10].numeroAluno = "14682";
    turma1P2024[10].nome = "Gabriel da Costa Ferreira";
    turma1P2024[10].idade = 15;
    turma1P2024[10].concluido = true;

    turma1P2024[11].numeroAluno = "14685";
    turma1P2024[11].nome = "Rúben Cardoso Alves";
    turma1P2024[11].idade = 15;
    turma1P2024[11].concluido =false;

    turma1P2024[12].numeroAluno = "14688";
    turma1P2024[12].nome = "Rui Duarte Silva Leite";
    turma1P2024[12].idade = 11;
    turma1P2024[12].concluido = false;

    turma1P2024[13].numeroAluno = "14692";
    turma1P2024[13].nome = "Martim Ribeiro Amorim";
    turma1P2024[13].idade = 15;
    turma1P2024[13].concluido = true;

    turma1P2024[14].numeroAluno = "14695";
    turma1P2024[14].nome = "Mateus Arante";
    turma1P2024[14].idade = 35;
    turma1P2024[14].concluido = false;

    turma1P2024[15].numeroAluno = "14711";
    turma1P2024[15].nome = "David Santos Oliveira";
    turma1P2024[15].idade = 15;
    turma1P2024[15].concluido = true;

    turma1P2024[16].numeroAluno = "14712";
    turma1P2024[16].nome = "Santiago Amorim Pereira";
    turma1P2024[16].idade = 15;
    turma1P2024[16].concluido = true;

    turma1P2024[17].numeroAluno = "14713";
    turma1P2024[17].nome = "Tomás Sousa Ferreira";
    turma1P2024[17].idade = 20;
    turma1P2024[17].concluido = true;

    turma1P2024[18].numeroAluno = "14715";
    turma1P2024[18].nome = "Tiago Rafael Lopes Pinheiro";
    turma1P2024[18].idade = 15;
    turma1P2024[18].concluido = false;

    turma1P2024[19].numeroAluno = "14721";
    turma1P2024[19].nome = "Marcelo Alexandre Palamaryuk";
    turma1P2024[19].idade = 15;
    turma1P2024[19].concluido = false;

    for (int i=0;i<NUMALUNOS;i++) {
        turma1P2024[i].curso = "Programador Informatico";
        turma1P2024[i].localidade = "Famalicao";
    }
}

int main(){

    iniciarTurma();

    for (int i = 0; i<NUMALUNOS; i++) {
        mostrainfo(turma1P2024[i]);
    }
    cout << "\n\nA media das idades e = ";
    cout << mediaAlunos();
    cout << "\n\nNº de alunos que concluiram o curso: " << numAlunoConcluiram();
    alunosPorConcluir();

    return 0;
}
