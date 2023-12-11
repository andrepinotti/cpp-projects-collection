/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   cPrimo.cpp
 * Author: andre
 * 
 * Created on 26 de setembro de 2022, 10:05
 */

#include "cPrimo.h"
#include <iostream>

using namespace std;

cPrimo::cPrimo() {
}

cPrimo::cPrimo(const cPrimo& orig) {
}

cPrimo::~cPrimo() {
}

void cPrimo::numPrimo(){

    int num, aux, div=0;
    cout << "Informe um número: " << endl;
    cin >> num;
    
     for(aux=1 ; aux<=num ; aux++)
        if(num%aux==0)
            div++;

    if(div==2)
        cout<<"É primo"<<endl;
    else
        cout<<"Não é primo"<<endl;
    
}