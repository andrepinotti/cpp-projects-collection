/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   custoCarro.h
 * Author: andre
 *
 * Created on 20 de agosto de 2022, 17:43
 */

#ifndef CUSTOCARRO_H
#define CUSTOCARRO_H

class custoCarro {
public:
    custoCarro();
    custoCarro(const custoCarro& orig);
    virtual ~custoCarro();
    
    float calculoPreco();
    
private:

};

#endif /* CUSTOCARRO_H */

