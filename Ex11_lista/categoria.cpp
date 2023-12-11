//Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
//seguintes categorias:
//infantil A = 5 - 7 anos 
//infantil B = 8-10 anos
//juvenil A = 11-13 anos
//juvenil B = 14-17 anos
//adulto = maiores de 18 anos

#include "categoria.h"
#include <iostream>

using namespace std;

categoria::categoria() {
}

categoria::categoria(const categoria& orig) {
}

categoria::~categoria() {
}

void categoria::categoriaNatacao(){
    int idade;
    
    cout << "Informe a idade do nadador: " << endl;
    cin >> idade; 
    
    if(idade>=5 && idade<=7 ){
    cout << "O nadador é da categoria infantil A." << endl;
    
    } else if(idade>=8 && idade<=10){
        cout << "O nadador é da categoria infantil B." << endl;
        
    }  else if(idade>= 11 && idade<=13){
        cout << "O nadador é da categoria juvenil A." << endl;
    
    } else if(idade>=14 && idade<=17) {
        cout << "O nadador é da categoria juvenil b." << endl;
        
    } else if (idade>=18) {
        cout << "O nadador é da categoria adulta." << endl;
    
    }
    
}