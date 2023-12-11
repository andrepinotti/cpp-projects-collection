/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   saldoBanco.cpp
 * Author: andre
 * 
 * Created on 29 de agosto de 2022, 12:14
 */

#include "saldoBanco.h"
#include <iostream>

using namespace std;

saldoBanco::saldoBanco() {
}

saldoBanco::saldoBanco(const saldoBanco& orig) {
}

saldoBanco::~saldoBanco() {
}

float saldoBanco::saldoMedio(){

    int saldom, valorf, credito;
    cout << "Informe o seu saldo médio no banco: " << endl;
    cin >> saldom;

    if(saldom>0 && saldom<=200){
    
        cout << "Você não possui nenhum crédito." << endl;
    
    } else if(saldom>200 && saldom <=400){
    
        credito = saldom * 1.20;
        cout << "Você possui 20% de crédito do seu saldo." << endl;
        cout << "O seu saldo médio é de: " << credito << endl;
    } else if(saldom>400 && saldom<=600) {
        
        credito = saldom * 1.30;
        cout << "Você possui 30% de crédito do seu saldo." << endl;
        cout << "O seu saldo médio é de: " << credito << endl;
    } else if(saldom>600){
        
        credito = saldom * 1.40;
        cout << "Você possui 40% de crédito do seu saldo." << endl;
        cout << "O seu saldo médio é de: " << credito << endl;
    }

}
