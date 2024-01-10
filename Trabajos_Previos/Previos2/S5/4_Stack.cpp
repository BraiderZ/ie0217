#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int size = 0;

//Creamos una estrcutura para el stack
struct stack {
    int items[MAX];
    int top;
};

//Definimos un nuevo tipo basado en la estrcutura creada
typedef struct stack st;

//Como es memoria dinámica, usamos punteros.
void createEmptyStack(st *s){
    s ->top = -1; //como el primera valor se ubica en 0, -1 lo inicia.
}

int isFull(st *s){
    if (s->top == MAX - 1){
        return 1; //Funciona como TRUE
    }else
        return 0; //Funciona como FALSE

}

int isEmpty(st *s){
    if (s->top == - 1){
        return 1;
    }else
        return 0;
}

void push(st *s, int new_item){ //Recibe el puntero y el nuevo valor
    if (isFull(s)){ //Verificamos que no este lleno
        cout << "\nSTACK FULL" << endl;
    }else {
        //Agregamos un valor al top
        s->top ++;
        s->items[s->top] = new_item;
    }
    size++;
}

void pop(st *s){ 
    if (isEmpty(s)){ //Verificamos que no este vacío
        cout << "\nSTACK EMPTY" << endl;
    }else {
        cout << "Item popped = " << s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}

void printStack(st *s){ 
    printf("Stack: ");
    for (int i = 0; i < size; ++i){
        cout << s-> items[i] << " ";
    }
    cout << endl;
}

int main(){
    int ch;
    st *s = (st *)malloc(sizeof(st)); //Apartamos memoria de tamaño y tipo del stack

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nAfter popping out\n";
    printStack(s);

    return 0;
}

