#include <iostream>
#include <string>
#include "Pila.h"
#include "Pila.cpp"

using namespace std;

int main()
{
    Pila pila; 
    pila.push(30); 
    pila.push(55); 
    pila.push(95);
	cout << "Pila vuota: "; 
    pila.print(); 
    cout << "Elemento in cima alla pila: " << pila.Top() << endl; 
    pila.pop(); 
    cout << "Elementi nella pila dopo pop: "; 
    pila.print(); 
    return 0; 
}