// Faça um algoritmo que leia um nº inteiro e mostre uma mensagem indicando se este
//número é par ou ímpar, e se é positivo ou negativo.

#include "nInteiro.h"
#include <iostream>

using namespace std;

nInteiro::nInteiro() {
}

nInteiro::nInteiro(const nInteiro& orig) {
}

nInteiro::~nInteiro() {
}

void nInteiro::numPar(){
    int num;
    cout << "informe um número: " << endl;
    cin >> num;
    
    if(num>=0){
        cout << "O número é positivo." << endl;
        
    } else {
        cout << "O número é negativo." << endl;
    
    }

    if(num % 2 == 0){
        cout << "O número é par." << endl;
    
    } else {
        cout << "O número é ímpar." << endl;
    
    }
    
}