/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   NotaMedia.cpp
 * Author: andre
 * 
 * Created on 29 de agosto de 2022, 12:49
 */

#include "NotaMedia.h"
#include <iostream>

using namespace std;

NotaMedia::NotaMedia() {
}

NotaMedia::NotaMedia(const NotaMedia& orig) {
}

NotaMedia::~NotaMedia() {
}

float NotaMedia::mediaAluno(){
    
    int c;
    float n1, n2, n3, media;
    
    cout << "informe a média que você quer calcular \n"
            "1- Média Aritmética"
            "2- Média Ponderada "
            "3- Média Harmônica " <<endl;
    cin >> c;
    
    if(c == 1){
        cout << "Você escolheu média aritmética." << endl;
        cout << "Informe a nota 1: " << endl;
        cin >> n1;
        cout << "Informe a nota 2: " << endl;
        cin >> n2;
        cout << "Informe a nota 3: " << endl;
        cin >> n3;
        
        media = (n1+n2+n3)/3;
        
        cout << "A média é: " << media << endl;
        
    } else if ( c == 2){
        cout << "Você escolheu média ponderada." << endl;
        cout << "Informe a nota 1: " << endl;
        cin >> n1;
        cout << "Informe a nota 2: " << endl;
        cin >> n2;
        cout << "Informe a nota 3: " << endl;
        cin >> n3;
    
        media = ((n1*3)+(n2*3)+(n3*4))/10;
        
        cout << "A média é: " << media << endl;

    }
    
    return media;
}
