/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Fibonacci.cpp
 * Author: andre
 * 
 * Created on 15 de novembro de 2022, 21:14
 */

#include "Fibonacci.h"
#include <iostream>

using namespace std;

Fibonacci::Fibonacci() {
}

Fibonacci::Fibonacci(const Fibonacci& orig) {
}

Fibonacci::~Fibonacci() {
}

//Parâmetros: número de termos, último número e penúltimo número

void Fibonacci::fibonacciRecursivo(int limite, int ult = 1, int pen = 1) {
    if (limite > 0) {
        int prox = ult + pen;
        cout << prox << " ";
        fibonacciRecursivo(limite - 1, pen, prox);
    }
}

void Fibonacci::lerDados() {
    int limite;

    cout << "Digite o limite: ";
    cin >> limite;
    fibonacciRecursivo(limite);
}
