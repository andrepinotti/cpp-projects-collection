/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Tabuada.h
 * Author: andre
 *
 * Created on 15 de novembro de 2022, 21:09
 */

#ifndef TABUADA_H
#define TABUADA_H

class Tabuada {
public:
    Tabuada();
    Tabuada(const Tabuada& orig);
    virtual ~Tabuada();
    
    void calculo(int N, int i);
    void lerDados();
    
private:

};

#endif /* TABUADA_H */

