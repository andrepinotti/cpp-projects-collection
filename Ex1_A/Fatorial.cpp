/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fatorial.cpp
 * Author: andre
 * 
 * Created on 15 de novembro de 2022, 20:48
 */

#include "Fatorial.h"
#include <iostream>

using namespace std;

Fatorial::Fatorial() {
}

Fatorial::Fatorial(const Fatorial& orig) {
}

Fatorial::~Fatorial() {
}

int Fatorial::fatorar(int n) {

    if (n == 1 || n == 0) {
        return 1;
    } else {
        for(int i=0; i<n; i++){
        return n * fatorar(n - 1);
        }
    }

}
void Fatorial::lerDados(){
    
    int n;
    cout << "Informe o fatorial: " << endl;
    cin >> n;

    

}