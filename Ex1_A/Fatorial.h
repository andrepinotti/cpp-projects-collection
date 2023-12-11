/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fatorial.h
 * Author: andre
 *
 * Created on 15 de novembro de 2022, 20:48
 */

#ifndef FATORIAL_H
#define FATORIAL_H

class Fatorial {
public:
    Fatorial();
    Fatorial(const Fatorial& orig);
    virtual ~Fatorial();
    
    int fatorar(int n);
    void lerDados();
    
private:

};

#endif /* FATORIAL_H */

