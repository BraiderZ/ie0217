#include <iostream>

using namespace std;

#define SIZE 5

//Creamos una clase para el Queue
class Queue {
    private:
        int items[SIZE], front, rear;

    public:
        Queue(){
            front = -1;
            rear = -1;
        }


    bool isFull(){
        if (front == 0 && rear == SIZE - 1){
            return true;
        }else
            return false; //Funciona como FALSE
    }

    bool isEmpty(){
        if (front == - 1){
            return true;
        }else
            return false;
    }

    void enQueue(int element){ //Recibe el elemento que se va a agregar
        if (isFull()){ //Verificamos que no este lleno
            cout << "\nQueue is full" << endl;
        }else {
            //Agregamos un valor en la cola
            if (front == -1) front = 0; //Siempre apunta al primer elemento agregado
            rear++;
            items[rear] = element;
            cout << endl
                << "Inserted " << element << endl;
        }
    }

    int deQueue(){
        int element;
        if (isEmpty()){ //Verificamos que no este vacío
            cout << "\nQueue is empty" << endl;
            return (-1);
        }else {
            element = items[front];
            //En caso de que al quitar el elemento, quede sin nada
            if (front >= rear){
                front = -1;
                rear = -1;
            } else{
                front ++;
            }
            cout << endl
                << "Delete -> " << element << endl;
            return (element);
        }
    }

    void display(){
        int i;
        if (isEmpty()) {
            cout << endl
                << "Empty Queue " << endl;
        }else {
            cout << endl
                << "Front index-> " << front;
            cout << endl
                << "Items-> ";
            for (int i = front; i <= rear; ++i){
                    cout << items[i] << " ";
            }
            cout << endl
                << "Rear index-> " << rear << endl;
        } 
    }
};

int main(){
    Queue q;

    //No se puede eliminar algo que no posee
    q.deQueue();

    //Agregar valores
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    //No se pueden agregar más datos de los disponibles
    q.enQueue(6);

    //Imprimir
    q.display();

    //Eliminar un elemento
    q.deQueue();

    //Imprimir
    q.display();

    return 0;
}

