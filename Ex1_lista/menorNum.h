/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   menorNum.h
 * Author: andre
 *
 * Created on 8 de setembro de 2022, 20:34
 */

#ifndef MENORNUM_H
#define MENORNUM_H

class menorNum {
public:
    
    menorNum();
    menorNum(const menorNum& orig);
    virtual ~menorNum();
    
    void lerDados();
    int numeroMenor(int n1, int n2);
    
private:

};

#endif /* MENORNUM_H */

