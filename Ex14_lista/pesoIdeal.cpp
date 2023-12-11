/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   pesoIdeal.cpp
 * Author: andre
 * 
 * Created on 29 de agosto de 2022, 12:01
 */

#include "pesoIdeal.h"
#include <iostream>

using namespace std;

pesoIdeal::pesoIdeal() {
}

pesoIdeal::pesoIdeal(const pesoIdeal& orig) {
}

pesoIdeal::~pesoIdeal() {
}

float pesoIdeal::pesoHM() {

    char sexo;
    float h, peso;
    
    cout << "Informe o seu sexo(M/F): " << endl;
    cin >> sexo;

    cout << "Informe a sua altura: " << endl;
    cin >> h;
            
    if(sexo == 'm'){
        peso = (72.7*h)-58;
        cout << "o seu peso ideal é de: " << peso <<endl;
   
    }  else if(sexo == 'f'){ 
        peso = (62.1*h)-44.7;
        cout << "O seu peso ideal é de: " << peso <<endl;
    }      
       return peso;     
}