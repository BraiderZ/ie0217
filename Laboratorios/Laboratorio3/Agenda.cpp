#include "Agenda.hpp"

template<typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    // Verificar si ya existe el contacto
    typename std::list<Contacto<T> >::const_iterator it;
    for( it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == contacto.getTelefono()){
            throw std::invalid_argument("Ya existe un contacto con este numero");
        }    
    }
    // Se agrega el contacto
    contactos.push_back(contacto);
}

template<typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list<Contacto<T> >::const_iterator it;
    for( it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == telefono){
            contactos.erase(it);
            return;
        }    
    }
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

template<typename T>
void Agenda<T>::mostrarContactos() const{
    typename std::list<Contacto<T> >::const_iterator it;
    for(it = contactos.begin(); it != contactos.end(); ++it){
        std::cout << "Nombre: "     << it->getNombre() << " "
                  << "Telefono: "   << it->getTelefono() << " "
                  << "Email: "      << it->getEmail() << std::endl;
    
    }
}

//Creamos una versión de mostrar contactos buscamos por el usuario
template<typename T>
void Agenda<T>::mostrarContactos(std::list<Contacto<T>> resultados) {
    typename std::list<Contacto<T> >::const_iterator it;
    for(it = resultados.begin(); it != resultados.end(); ++it){
        std::cout << "Nombre: "     << it->getNombre() << " "
                  << "Telefono: "   << it->getTelefono() << " "
                  << "Email: "      << it->getEmail() << std::endl;
    
    }
}

// Por medio de un patron dado por el usuario, buscaremos contactos que posean ese patron en su información para su postetior impresión
template <typename T>
std::list<Contacto<T>> Agenda<T>::buscarContactos(const std::string& patron) const {
    // Creamos una lista donde almacenamos los contactos encontramos     
    std::list<Contacto<T>> resultados;

    // Variable que nos ayuda en la búsqueda
    std::string::size_type pos;
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it) {

        //Busca el patron dados por el usuario y verifica si el patrón existe en el nombre o email. En caso de ser así, lo agrega a la lista de resultados
        pos = it->getNombre().find(patron);
        if (pos != std::string::npos) {
            resultados.push_back(*it);
        } else {
            pos = it ->getEmail().find(patron);
            if (pos != std::string::npos) {
                resultados.push_back(*it);
            }
        }
    }
    // Retorna la lista
    return resultados;
}