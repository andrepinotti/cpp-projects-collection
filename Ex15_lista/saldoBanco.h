/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   saldoBanco.h
 * Author: andre
 *
 * Created on 29 de agosto de 2022, 12:14
 */

#ifndef SALDOBANCO_H
#define SALDOBANCO_H

class saldoBanco {
public:
    saldoBanco();
    saldoBanco(const saldoBanco& orig);
    virtual ~saldoBanco();
    
    float saldoMedio();
    
private:

};

#endif /* SALDOBANCO_H */

