#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Creamos una clase que represente a la lista. Este posee el valor del nodo y la ubicación del siguiente valor
class Node {
    public:
        int value;
        Node* next;
};

int main() {
    // Creamos todos los punteros que queramos
    Node* head; //El primer elemento de la lista
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Les damos memoria dinámica
    one = new Node();
    two = new Node();
    three = new Node();

    // Asignamos valores
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Tenemos que conectar los nodos
    one->next = two;
    two->next = three;
    three->next = NULL;

    //Imprimimos
    head = one;
    while (head != NULL){
        cout << head->value;
        head = head->next;
    }
    return 0;
}