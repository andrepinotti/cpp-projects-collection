/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   nMultiplos.cpp
 * Author: andre
 * 
 * Created on 22 de agosto de 2022, 14:22
 */

#include "nMultiplos.h"
#include <iostream>
#include <cmath>

using namespace std; 

nMultiplos::nMultiplos() {
}

nMultiplos::nMultiplos(const nMultiplos& orig) {
}

nMultiplos::~nMultiplos() {
}

int nMultiplos::multNum(){
    int a, b; 
    
    cout << "Informe o valor de a: " << endl;
    cin >> a; 
    cout << "Informe o valor de b: " << endl;
    cin >> b; 
    
    if (a % b == 0){
        cout << "Os números são múltiplos." << endl;
    
    } else {
    
        cout << "Os números não são múltiplos." << endl;
    }

}