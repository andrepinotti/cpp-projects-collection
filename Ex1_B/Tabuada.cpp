/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Tabuada.cpp
 * Author: andre
 * 
 * Created on 15 de novembro de 2022, 21:09
 */

#include "Tabuada.h"
#include <iostream>

using namespace std;

Tabuada::Tabuada() {
}

Tabuada::Tabuada(const Tabuada& orig) {
}

Tabuada::~Tabuada() {
}
void Tabuada::calculo(int N, int i) {
    // Base
    if (i > 10)
        return;

    // Mostrar a tabela
    cout << N << " X " << i << " = " << N * i << endl;

    // Chamando a função recursiva para repitir multiplicando a soma por + 1
    return calculo(N, i + 1);
}

// Código para ler os dados

void Tabuada::lerDados() {
    int N;
    // Número que quero saber a multiplicação
    cout << "Digite o número que você deseja ver a tabuada: ";
    cin >> N;

    // Chamando a função para mostrar na tela a tabuada
    calculo(N, 1);
}
