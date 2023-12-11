/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   cPesquisa.h
 * Author: andre
 *
 * Created on 26 de setembro de 2022, 09:35
 */

#ifndef CPESQUISA_H
#define CPESQUISA_H

class cPesquisa {
public:
    
    cPesquisa();
    cPesquisa(const cPesquisa& orig);
    virtual ~cPesquisa();
    
    void lerDados();
    void calculaVoto(float total, float votosnulo, float votobranco, float voto1, float voto2, float voto3, float voto4);
    
private:

};

#endif /* CPESQUISA_H */

