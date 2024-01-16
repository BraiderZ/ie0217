#include "funciones.hpp"

/**
 * @file funciones.cpp
 * 
 * @brief Implementación de las funciones para la biblioteca.
 * 
 * 
 * @license 
 * Copyright 2024 [Luis José Brenes Campos]
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 */

/**
 * Muestra el menú del juego. Un total de 5 opciones.
 */
void mostrarMenu(){
    cout << "\n-----Blibioteca de materiales de entretenimiento-----\n";
    cout << "1. Agregar nuevo material\n";
    cout << "2. Eliminar material\n";
    cout << "3. Buscar material\n";
    cout << "4. Tamano de un material\n";
    cout <<  "5. Salir\n";
}

/** 
 * Procesa la opción del usuario
 * @param opcion Número que representa la accion del usuario
 * @param tipo Representa el tipo de material
 * @param buscar Número que representa el tipo de búsqueda a realizar
 * @param nombre Título del material sobre el que se trabaja
 * 
 */
void procesarOpcion(MaterialOrdenado* materiales, MaterialPrecio precio){
    int opcion, tipo, buscar;
    string nombre;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    // Se creó un switch para separar de mejor manera las posibles opciones del usuario e invocar las funciones correspondientes a cada una.
    switch (opcion){
        case 1:
            cout << "\nTipo de material a agregar\n" << endl;
            cout << "1. Noticia | 2. Libro | 3. Pelicula | 4. Podcast: ";
            cin >> tipo;
            procesar_informacion(tipo, materiales);
            break;
        case 2:
            cout << "\nIngrese el titulo del material a eliminar: ";
            cin.ignore();
            getline(cin, nombre);
            materiales->eliminarMaterial(nombre);
            break;
        case 3:
            cout << "\n---Ingrese el tipo de busqueda que desea realizar---\n";
            cout << "1. Busqueda por titulo\n";
            cout << "2. Busqueda por tipo de material\n";
            cout << "3. Busqueda por precio\n";
            cout << "Ingrese una opcion: ";
            cin >> buscar;
            procesar_informacion(buscar, materiales, precio);
            break;
        case 4:
            cout << "\nIngrese el titulo del material del que se desea saber el tamano: ";
            cin.ignore();
            getline(cin, nombre);
            materiales->tamanoMaterial(nombre);
            break;
        case 5: 
            cout << "Saliendo de la blibioteca...\n";
            exit(0);
        
        default:
            cout << "Opcion no valida. Intente de nuevo...\n";
    }
}

/**
 * Se encarga de obtener los datos para agregar unn nuevo material 
 * 
 */
void procesar_informacion(int tipo, MaterialOrdenado* materiales){
    // Posibles datos a necesitar
    string titulo, autor, editorial, genero, estado;
    int cantidad_hojas, duracion, precio;
    
    //Dependiendo del tipo de material, debemos agregar diferentes atributos
    switch(tipo){
        case 1: 
            cout << "Ingrese el titulo: ";
            cin.ignore();
            getline(cin, titulo);
            cout << endl;

            cout << "Ingrese el autor: ";
            getline(cin, autor);
            cout << endl;

            cout << "Ingrese la editorial: ";
            getline(cin, editorial);
            cout << endl;

            cout << "Ingrese el genero: ";
            getline(cin, genero);
            cout << endl;

            cout << "Ingrese el estado: ";
            getline(cin, estado);
            cout << endl;

            cout << "Ingrese la cantidad de hojas: ";
            cin >> cantidad_hojas;
            cout << endl;

            cout << "Ingrese el precio: ";
            cin >> precio;
            cout << endl;
            
            materiales->agregarMaterial(titulo, autor, editorial, genero, estado, cantidad_hojas, precio, "NOTICIA");

            break;
        case 2:
            cout << "Ingrese el titulo: ";
            cin.ignore();
            getline(cin, titulo);
            cout << endl;

            cout << "Ingrese el autor: ";
            getline(cin, autor);
            cout << endl;

            cout << "Ingrese la editorial: ";
            getline(cin, editorial);
            cout << endl;

            cout << "Ingrese el genero: ";
            getline(cin, genero);
            cout << endl;

            cout << "Ingrese el estado: ";
            getline(cin, estado);
            cout << endl;

            cout << "Ingrese la cantidad de hojas: ";
            cin >> cantidad_hojas;
            cout << endl;

            cout << "Ingrese el precio: ";
            cin >> precio;
            cout << endl;
            
            materiales->agregarMaterial(titulo, autor, editorial, genero, estado, cantidad_hojas, precio, "LIBRO");

            break;
        case 3:
            cout << "Ingrese el titulo: ";
            cin.ignore();
            getline(cin, titulo);
            cout << endl;

            cout << "Ingrese el autor: ";
            getline(cin, autor);
            cout << endl;

            cout << "Ingrese el genero: ";
            getline(cin, genero);
            cout << endl;

            cout << "Ingrese el estado: ";
            getline(cin, estado);
            cout << endl;

            cout << "Ingrese la duracion: ";
            cin >> duracion;
            cout << endl;

            cout << "Ingrese el precio: ";
            cin >> precio;
            cout << endl;
            
            materiales->agregarMaterial(titulo, autor, genero, estado, duracion, precio, "PELICULA");
            
            break;
        case 4:
            cout << "Ingrese el titulo: ";
            cin.ignore();
            getline(cin, titulo);
            cout << endl;

            cout << "Ingrese el autor: ";
            getline(cin, autor);
            cout << endl;

            cout << "Ingrese el genero: ";
            getline(cin, genero);
            cout << endl;

            cout << "Ingrese el estado: ";
            getline(cin, estado);
            cout << endl;

            cout << "Ingrese la duracion: ";
            cin >> duracion;
            cout << endl;

            cout << "Ingrese el precio: ";
            cin >> precio;
            cout << endl;
            
            materiales->agregarMaterial(titulo, autor, genero, estado, duracion, precio, "PODCAST");

            break;
    }
}

/**
 * Encargada de elegir el tipo de búsqueda e invocarla
 * @param tipo Puede relacionarse al tipo de material o al tipo de orden cuando se observan los precios
 */
void procesar_informacion(int buscar, MaterialOrdenado* materiales, MaterialPrecio precio){
    string nombre;
    int tipo;
    switch(buscar){
        case 1:
            cout << "Ingrese el titulo del material: ";
            cin.ignore();
            getline(cin, nombre);
            cout << endl;

            materiales->buscarMaterialPorTitulo(nombre);
            break;
        case 2:
            cout << "\nTipo de material\n" << endl;
            cout << "1. Noticia | 2. Libro | 3. Pelicula | 4. Podcast: ";
            cin >> tipo;
            materiales->buscarMaterialesPorTipo(tipo);
            break;
        case 3:
            cout << "1. Menor a mayor precio | 2. Mayor a menor precio: ";
            cin >> tipo;
            precio.crearVectorPrecios(tipo, materiales);
            break;
    }
}

