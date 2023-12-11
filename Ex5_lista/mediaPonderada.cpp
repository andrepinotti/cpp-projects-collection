/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   mediaPonderada.cpp
 * Author: andre
 * 
 * Created on 20 de agosto de 2022, 14:54
 */

#include "mediaPonderada.h"
#include <iostream>
#include <cstdlib>

using namespace std;

mediaPonderada::mediaPonderada() {
}

mediaPonderada::mediaPonderada(const mediaPonderada& orig) {
}

mediaPonderada::~mediaPonderada() {
}

float mediaPonderada::calculaMedia(){
    
    float n1, n2, n3, p1, p2, p3;
    float media;  
    
    p1 = 2;
    p2 = 3;
    p3 = 5;
    
    cout << "Informe a nota 1: " << endl;
    cin >> n1;
    cout << "Informe a nota 2:" << endl;
    cin >> n2;
    cout << "Informe a nota 3: " << endl;
    cin >> n3;
   
    
    media = ((n1*p1)+(n2*p2)+(n3*p3))/10;
    
    cout << " A média do aluno é: " << media << endl;
    
}