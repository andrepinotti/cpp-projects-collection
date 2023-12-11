/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Fibonacci.h
 * Author: andre
 *
 * Created on 15 de novembro de 2022, 21:14
 */

#ifndef FIBONACCI_H
#define FIBONACCI_H

class Fibonacci {
public:
    Fibonacci();
    Fibonacci(const Fibonacci& orig);
    virtual ~Fibonacci();
    
    void fibonacciRecursivo(int limite, int ult, int pen);
    void lerDados();
    
private:

};

#endif /* FIBONACCI_H */

