/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

 //custo do carro = custo de fábrica + soma doa impostos e fornecedor 
// fornecedor = 28
// impostos = 45

#include "custoCarro.h"
#include <iostream>
#include <cmath>

using namespace std;

custoCarro::custoCarro() {
}

custoCarro::custoCarro(const custoCarro& orig) {
}

custoCarro::~custoCarro() {
}

float custoCarro::calculoPreco(){
    float preco;
    float preco_final;
    
    cout << "Informe o preço de fábrica do carro: " << endl;
    cin >> preco; 
    
 
    preco_final = preco+(preco*0.45)+(preco*0.28);       
    
    cout << "O preço final é de " << preco_final << endl; 
            
    return preco_final;
}