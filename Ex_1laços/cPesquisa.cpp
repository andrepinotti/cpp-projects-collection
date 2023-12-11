/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * Em uma eleição existem quatro candidatos. Os votos são informados pelos respectivos
códigos:
* (1, 2, 3, 4);
* 5 = voto nulo;
* 6 = voto em branco.
Elabore um algoritmo que calcule e escreva: o total de votos para cada candidato e seu percentual
sobre o total; * o total de votos nulos e seu percentual sobre o total; * o total de votos em branco e
seu percentual sobre o total. 
 */

#include "cPesquisa.h"
#include <iostream>

using namespace std;

cPesquisa::cPesquisa() {
}

cPesquisa::cPesquisa(const cPesquisa& orig) {
}

cPesquisa::~cPesquisa() {
}

void cPesquisa::lerDados(){
    float total, votosnulo, votobranco, voto1, voto2, voto3, voto4;
    cout << "Informe o total de votos que houveram no dia da eleição: " << endl;
    cin >> total;
    cout << "Informe o total de votos nulo: " << endl;
    cin >> votosnulo;
    cout << "Informe o total de votos em branco: " << endl;
    cin >> votobranco;
    cout << "Informe quantos votos recebeu o candidato 1: " << endl;
    cin >> voto1;
    cout << "Informe quantos votos recebeu o candidato 2: " << endl;
    cin >> voto2;
    cout << "Informe quantos votos recebeu o candidato 3: " << endl;
    cin >> voto3;
    cout << "Informe quantos votos recebeu o candidato 4: " << endl;
    cin >> voto4;
     
    calculaVoto(total, votosnulo, votobranco, voto1, voto2, voto3, voto4);
    
}
void cPesquisa::calculaVoto(float total, float votosnulo, float votobranco, float voto1, float voto2,
    float voto3, float voto4){

    float pnulo, pbranco, pvoto1, pvoto2, pvoto3, pvoto4;

    pnulo = (votosnulo/total)*100;
    pbranco = (votobranco/total)*100;
    pvoto1 = (voto1/total)*100; 
    pvoto2 = (voto2/total)*100;
    pvoto3 = (voto3/total)*100;
    pvoto4 = (voto4/total)*100;
    
    cout << "No dia da eleição o percentual dos votos foi de.. " << endl;
    cout << "O percentual de votos nulo foi de: " << pnulo << "%" <<endl;
    cout << "O percentual de votos em branco foi de: " << pbranco << "%"<< endl;
    cout << "O percentual de votos no candidato 1 foi de: " << pvoto1 << "%"<< endl; 
    cout << "O percentual de votos no candidato 2 foi de: " << pvoto2 << "%"<< endl;
    cout << "O percentual de votos no candidato 3 foi de: " << pvoto3 << "%"<< endl;
    cout << "O percentual de votos no candidato 4 foi de: " << pvoto4 << "%"<< endl;
}