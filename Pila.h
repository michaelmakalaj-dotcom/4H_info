#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <string>
using namespace std;

struct Nodo 
{
    int info; 
    Nodo* next; // Puntatore nodo successivo alla pila
};

class Pila 
{
    private:
        Nodo* top; 
    public: 

        Pila();
        void push(int valore); 
        void pop(); 
        int Top();
        bool isEmpty(); 
		void print(); 
};
#endif 