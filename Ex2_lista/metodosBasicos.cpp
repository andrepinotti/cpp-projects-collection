/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   metodosBasicos.cpp
 * Author: andre
 * 
 * Created on 20 de agosto de 2022, 10:05
 */

#include "metodosBasicos.h"
#include <iostream>
#include <cmath>

using namespace std; 

metodosBasicos::metodosBasicos() {
}

metodosBasicos::metodosBasicos(const metodosBasicos& orig) {
}

metodosBasicos::~metodosBasicos() {
}

float metodosBasicos::calculaPontos(){
    float d, r, s;
    cout << "Informe o valor de A: " << endl; 
    cin >> this->a; 
    cout << "Informe o valor de B: " << endl; 
    cin >> this->b; 
    cout << "Informe o valor de C: " << endl;
    cin >> this->c;
    
    r = pow((a + b), 2) ;
    s = pow((b + c), 2) ; 
    
    d = (r + s)/2;
    
    return d; 
}