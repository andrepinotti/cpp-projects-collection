

#include "maior.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

maior::maior() {
}

maior::maior(const maior& orig) {
}

maior::~maior() {
}

int maior::maiorMenor(){
    int a, b, c;
    int maior;

    cout << "Informe o valor de a: " << endl;
    cin >> a;
    cout << "Informe o valor de b: "<< endl;
    cin >> b;
    cout << "Informe o valor de c: " << endl;
    cin >> c;
 
    
    if(a>b && b>c){
        maior = a;
    }
    
    else if(b>a && b>c){
        maior = b;
    
    }
    else if (c>a && a>b){
        maior = c;
    }
    
    cout << "O maior é: " << maior << endl;
    
    return maior;
}