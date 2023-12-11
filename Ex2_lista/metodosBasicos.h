/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   metodosBasicos.h
 * Author: andre
 *
 * Created on 20 de agosto de 2022, 10:05
 */

#ifndef METODOSBASICOS_H
#define METODOSBASICOS_H

class metodosBasicos {
public:
    
    float a, b, c;
    
    metodosBasicos();
    metodosBasicos(const metodosBasicos& orig);
    virtual ~metodosBasicos();
    
    float calculaPontos();
    
private:

};

#endif /* METODOSBASICOS_H */

