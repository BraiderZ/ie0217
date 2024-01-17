#include <iostream>
using namespace std;

//Las clases siguen la misma idea de las funciones cuando se quiere crear por template
//En caso de querer recibir más de un parámetro, tenemos que definirle el nombre a cada uno
template <class T, class U, class V = char> //En el caso de V, se le define un tipo de dato. Esto lo podemos hacer siempre aunque el usuario pueda cambiarlo después
class ClassTemplate{
    private:
        T var1;
        U var2;
        V var3;

    public:
        ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3){}
    
    //Las los métodos pueden templates. En caso de colocar un prototipo dentro de la clase, simplemente a la hora de definirla, usamos el mismo comando que se utilizó para el template de la clase
    void printVar(){
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main(){
    //Debemos definir el tipo de dato para los argumentos. El último valor no es del todo necesario si se va a utilizar el mismo tipo definido en el template
    ClassTemplate<int, double> objt1(7, 7.7, 'c');
    cout << "objt1 value: " << endl;
    objt1.printVar();

    ClassTemplate<double, char, bool> objt2(8.8, 'a', false);
    cout << "objt2 value: " << endl;
    objt2.printVar();

    return 0;
}