/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   calculaNasc.cpp
 * Author: andre
 * 
 * Created on 20 de agosto de 2022, 11:34
 */

#include "calculaNasc.h"
#include <iostream>

using namespace std; 

calculaNasc::calculaNasc() {
}

calculaNasc::calculaNasc(const calculaNasc& orig) {
}

calculaNasc::~calculaNasc() {
}

int calculaNasc::calculaIdade(){
   
    int nasc, meses, dias;
    int idade; 
    
    cout << "Informe o ano em que você nasceu: " << endl;
    cin >> nasc; 
    
    idade = 2022 - nasc;
    meses = (idade*12) ;
    dias = (meses *30) ;
            
    cout << "Você tem aproximadamente " << dias << " dias de vida." << endl; 
            
    return dias;
}
