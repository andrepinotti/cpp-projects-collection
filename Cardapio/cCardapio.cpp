/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cCardapio.cpp
 * Author: andre
 * 
 * Created on 26 de setembro de 2022, 13:09
 */

#include "cCardapio.h"
#include <iostream>

using namespace std;

cCardapio::cCardapio() {
}

cCardapio::cCardapio(const cCardapio& orig) {
}

cCardapio::~cCardapio() {
}

void cCardapio::lerPedido(){

    int qtd, code;
    float preco;
    
    //Escolha de um produto e logo em seguida informar a quantidade
    
    cout << "Informe o código do produto que deseja consumir:\n"
            "1- Cachorro Quente"
            "\n2- Bauru Simples"
            "\n3- Bauru com Ovo"
            "\n4- Hamburguer"
            "\n5- Cheeseburguer"
            "\n6- Refrigerante" << endl;
    cin >> code;
    
    if(code == 1){
        cout << "Você escolheu cachorro quente." << endl;
        cout << "Informe a quantidade: " << endl;
        cin >> qtd;
        preco = 1.7 * qtd;
    } else if(code == 2){
        cout << "Você escolheu Bauru Simples." << endl;
        cout << "Informe a quantidade: " << endl;
        cin >> qtd;
        preco = 2.30 * qtd;
    } else if(code == 3){
        cout << "Você escolheu Bauru com ovo." << endl;
        cout << "Informe a quantidade: " << endl;
        cin >> qtd;
        preco = 2.6 * qtd;
    } else if(code == 4){
        cout << "Você escolheu o Hamburguer." << endl;
        cout << "Informe a quantidade: " << endl;
        cin >> qtd;
        preco = 2.4 * qtd;
    } else if(code == 5){
        cout << "Você escolheu Cheeseburguer." << endl;
        cout << "Informe a quantidade: " << endl;
        cin >> qtd;
        preco = 2.5 * qtd;
    } else if(code == 6){
        cout << "Você escolheu Refrigerante." << endl;
        cout << "Informe a quantidade: " << endl;
        cin >> qtd;
        preco = 1 * qtd;
    } 
    else {
        cout << "Código Invalido." << endl;
    }
    cout << "O valor a se pagar é de: " << preco << endl;
}