#include <iostream>
#include <fstream>

class Archivo {

    private: //Atributo privado
        std::fstream archivo;

    public: 
        Archivo(std::string nombre_archivo){
            archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);
            if (!archivo.is_open()){
                std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;
            }
        }

        //Esta función se llama destructor y busca limpiar las acciones realizadas. En este caso, siempre debemos cerrar un archivo después de abrirlo y el destructor se encarga de eso.
        ~Archivo(){
            if (archivo.is_open()){
                archivo.close();
            }
        }
};

int main(){
    
    Archivo mi_archivo("datos.txt");

    //Podemos crearle alguna acción
    
    return 0;

}