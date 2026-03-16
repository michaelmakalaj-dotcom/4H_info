#include <iostream>
#include <string>
#include "Pila.h"
using namespace std;

Pila::Pila() 
{
    top = NULL; 
}

void Pila::push(int valore) 
{
    Nodo* newNode = new  Nodo; 
    newNode->info = valore; 
    newNode->next = top; 
    top = newNode; 
}

void Pila::pop() 
{
    if (top != NULL)
    {
        Nodo* temp = top; 
        top = top->next; 
        delete temp; 
    }
}

int Pila::Top() 
{
    if (top != NULL) 
    {
        return top->info; // Restituisce il valore del campo info del nodo in cima alla pila
    }
        return 0;
    }

bool Pila::isEmpty() 
{
    return top == NULL; 
}

void Pila::print() 
{
    Nodo* current = top; 
    while (current != NULL) 
    {
        cout << current->info << " "; 
        current = current->next; 
    }
    cout << endl;
}