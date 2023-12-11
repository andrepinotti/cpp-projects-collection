/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   calculoTempo.cpp
 * Author: andre
 * 
 * Created on 20 de agosto de 2022, 17:22
 */

#include "calculoTempo.h"
#include <iostream>

using namespace std; 

calculoTempo::calculoTempo() {
}

calculoTempo::calculoTempo(const calculoTempo& orig) {
}

calculoTempo::~calculoTempo() {
}

float calculoTempo::conversaoTempo(){

    int h, s, m;
    int resto, segundos;
   
    cout << "Informe o tempo em segundos da fábrica: " << endl;
    cin >> s;
    
    h = s/3600;
    resto = s % 3600;
    m = resto / 60;
    segundos = resto % 60;
    
    cout << "O evento na fábrica teve " << h << " horas, " << m << " minutos e "
   << segundos << " segundos." << endl;         
}