//Cachorro quente 100 1,20
//Bauru simples 101 1,30
//Bauru com ovo 102 1,50
//Hambúrger 103 1,20
//Cheeseburguer 104 1,30
//Refrigerante 105 1,00
//Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a
//ser pago por aquele lanche. Considere que a cada execução somente será calculado um
//item.
 //

#include "cardapio.h"
#include <iostream>

using namespace std;

cardapio::cardapio() {
}

cardapio::cardapio(const cardapio& orig) {
}

cardapio::~cardapio() {
}

float cardapio::cardapioRestaurante(){
    float item, opc, qtd, preco, precof;
    char resp; 
   
    
    
        
    cout << "Informe o que você quer(101 até 105): " << endl;
    cin >> item;
    
    preco= 0;
    qtd = 0;
    
    if(item == 101){
        cout << "Você escolheu o Cachorro Quente." << endl;
        
       
    } else if(item == 101){
        cout << "Você escolheu o Bauru Simples." << endl;
        preco = preco + 1.30;
        qtd++;
    } else if (item == 102){
        cout << "Você escolheu o Bauru com ovo." << endl;
        preco = preco + 1.50;
        qtd++;

    } else if(item == 103){
        cout << "Você escolheu o Hambúrguer." << endl;
        preco = preco + 1.20;
        qtd++;

    } else if(item == 104) {
          cout << "Você escolheu o Cheeseburguer." << endl;
          preco = preco + 1.30;
          qtd++;

    } else if (item ==105){
        cout << "Você escolheu um refrigerante." << endl;
        preco = preco + 1.00;
        qtd++;
    } 
    
    precof =  (preco * qtd);
    cout << "Você deseja mais algo? (S/N)" << endl;
    cin >> resp;
    
    while(resp == 's'){
        cout << "Informe o que você quer(101 até 105): " << endl;
        cin >> item;
        if(item == 101){
        cout << "Você escolheu o Cachorro Quente." << endl;
        
       
    } else if(item == 101){
        cout << "Você escolheu o Bauru Simples." << endl;
        preco = preco + 1.30;
        qtd++;
    } else if (item == 102){
        cout << "Você escolheu o Bauru com ovo." << endl;
        preco = preco + 1.50;
        qtd++;

    } else if(item == 103){
        cout << "Você escolheu o Hambúrguer." << endl;
        preco = preco + 1.20;
        qtd++;

    } else if(item == 104) {
          cout << "Você escolheu o Cheeseburguer." << endl;
          preco = preco + 1.30;
          qtd++;

    } else if (item ==105){
        cout << "Você escolheu um refrigerante." << endl;
        preco = preco + 1.00;
        qtd++;
        
    }
        
        cout << "Você deseja mais algo? (S/N)" << endl;
        cin >> resp;
      
        if (resp == 'n'){
             cout << "A conta a se pagar é de "<< precof << endl;
        
        precof =  (preco * qtd);
        }
     
    }
    
    return precof;
    }
   
   
