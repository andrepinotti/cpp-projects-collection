/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   menorNum.cpp
 * Author: andre
 * 
 * Created on 8 de setembro de 2022, 20:34
 */

#include "menorNum.h"
#include <iostream>

using namespace std;

menorNum::menorNum() {
}

menorNum::menorNum(const menorNum& orig) {
}

menorNum::~menorNum() {
}

void menorNum::lerDados(){
    int n1, n2;
    
    cout << "Informe o n1: " << endl;
    cin >> n1;
    cout << "Informe o n2: " << endl;
    cin >> n2;
    
    numeroMenor(n1, n2);
    
}
int menorNum::numeroMenor(int n1, int n2){
    int menor ;
    
    if(n1 > n2){
        cout << "O menor número é: " << n2 << endl;
    } else {
        cout << "O menor número é: " << n1 << endl;
    } 
  
}