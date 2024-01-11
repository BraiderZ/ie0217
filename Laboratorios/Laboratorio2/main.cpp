#include "MotoCoche.hpp"

int main(){
    MotoCoche miMotoCoche(80, 2, true);
    miMotoCoche.Coche::acelerar();
    miMotoCoche.abrirPuertas();
    miMotoCoche.usarCasco();
    
    return 0;
}