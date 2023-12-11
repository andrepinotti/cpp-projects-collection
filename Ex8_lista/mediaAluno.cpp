/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   mediaAluno.cpp
 * Author: andre
 * 
 * Created on 20 de agosto de 2022, 18:04
 */

#include "mediaAluno.h"
#include <iostream>

using namespace std;

mediaAluno::mediaAluno() {
}

mediaAluno::mediaAluno(const mediaAluno& orig) {
}

mediaAluno::~mediaAluno() {
}

float mediaAluno::valorMedia(){
    float n1, n2, n3, media; 
    
    cout << "Informe a nota 1: ";
    cin >> n1; 
    cout << "Informe a nota 2: ";
    cin >> n2;
    cout << "informe a nota 3: ";
    cin >> n3;

    media = ((n1+n2+n3)/3);
    
    cout << "A média do aluno é " << media << endl;

    if(media >= 6){
    
        cout << "O aluno está aprovado." << endl;
           
    } else {
        cout << "O aluno está reprovado." << endl;
}  
            
}