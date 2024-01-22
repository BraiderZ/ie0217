#include "Expresiones_practica2.hpp"

void Expresiones::verificarExpresiones(){
    auto const regex = std::regex("^[A-Za-z0-9][A-Za-z0-9._-]{0,13}[A-Za-z0-9]@[A-Za-z]+[.]+[A-Za-z]{2,4}$");
    std::string correo;

    try{

        std::cout << "Ingrese el correo electronico a verificar: ";
        getline(std::cin, correo);

        size_t simbolo_existe = correo.find('@');

        if (simbolo_existe == std::string::npos){
            throw std::runtime_error("El correo debe poseer el simbolo '@'.");
        }
    
        bool verificarCorreo = std::regex_search(correo,regex);

        if (verificarCorreo == true){
            std::cout << "Felicidades! Su correo cumple con los patrones establecidos para su uso." << std::endl;
        }else {
            std::cout << "Lo sentimos, su correo no cumple con los patrones establecidos..." << std::endl;
            std::cout << "Siga las siguientes reglas para que su correo sea permitido: " << std::endl;
            std::cout << "1. El nombre debe poseer de 2 a 15 simbolos que pueden ser letras, numeros, guiones o puntos. Los puntos y guines no son permitidos al inicio y final del nombre." << std::endl;
            std::cout << "2. el dominio inicia con '@' y solo permite letras. Debe terminar con un punto." << std::endl;
            std::cout << "3. La extesion solo permite de 2 a 4 letras." << std::endl;
        }
    } catch (std::exception& e){
        std::cerr << "Error detectado: " << e.what() << std::endl;
    } catch (...){
        std::cout << "Error: hubo un problema a la hora de verificar el correo, intentelo nuevamente." << std::endl;
    }
}