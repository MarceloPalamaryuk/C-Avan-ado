#include <iostream>
#include <stdio.h>
using namespace std;

const int NUMCARROS = 5;

struct Carrocompeticao {
    string nomPiloto;
    string modeloCarro;
    int numCarro;
    double segundosCorrida;
};
Carrocompeticao carros[NUMCARROS];
Carrocompeticao ordemCarros[NUMCARROS];

void registarCarros(Carrocompeticao carros[NUMCARROS], int tamanho) {
    carros[0].nomPiloto = "Joaquim";
    carros[0].modeloCarro = "Ferary";
    carros[0].segundosCorrida = 34;

    carros[1].nomPiloto = "Market Plaier";
    carros[1].modeloCarro = "Markcedes";
    carros[1].segundosCorrida = 20;

    carros[2].nomPiloto = "Ze das Coubes";
    carros[2].modeloCarro = "BormulaZero";
    carros[2].segundosCorrida = 56;

    carros[3].nomPiloto = "Mark Vestapen";
    carros[3].modeloCarro = "Bagatata";
    carros[3].segundosCorrida = 15;

    carros[4].nomPiloto = "Arnold Yimler";
    carros[4].modeloCarro = "Crakenvagen";
    carros[4].segundosCorrida = 82;

    for (int i=0; i<tamanho;i++) {
        carros[i].numCarro = i+1;
    }
}

void ordenarPorTempo(CarroCompeticao carros, int tamanho) {

}

int main() {
    int tamanho;


    registarCarros(carros, NUMCARROS);

    ordenarPorTempo(carros, NUMCARROS);

    return 0;
}
