/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   calculaTempo.cpp
 * Author: andre
 * 
 * Created on 20 de agosto de 2022, 14:39
 */

#include "calculaTempo.h"
#include <iostream>
#include <cstdlib>

using namespace std; 

calculaTempo::calculaTempo() {
}

calculaTempo::calculaTempo(const calculaTempo& orig) {
}

calculaTempo::~calculaTempo() {
}

 void calculaTempo::calculaTempoVida(){
    
    int nasc; 
    int idade ,meses, dias; 
    cout << "Informe o ano do seu nascimento: " << endl;
    cin >> nasc;
    
    idade = 2023 - nasc;
    meses = (idade * 12);  
    dias = (meses * 30);
    
    cout << "Você tem aproxidamente " << idade << " anos, " << meses << " meses e "
    << dias << " de vida." << endl;
    

}