# Tarea 2/IE-0217

### Estudiante: Luis Brenes Campos - C21324
### Profesor: Rafael Esteban Badilla Alvarado

# Instrucciones para ejecutar el programa 


## Requisitos previos


## Compilación

1. Abre una terminal o un símbolo del sistema.
2. Navega al directorio donde se encuentra el Makefile y los archivos fuente.
3. Ejecuta el siguiente comando para compilar el programa:

   ```bash
   mingw32-make

Con este comando se realizarán las ejecuciones básicas del programa.

## Targets específicos

### Compilar código y crear el archivo adivina.exe
- Ejecuta el siguiente comando:

   ```bash
   mingw32-make build

### Ejecutar el archivo adivina.exe
- Ejecuta el siguiente comando:

   ```bash
   mingw32-make run

### Compilar el código, crear el archivo y ejecutarlo
- Ejecuta el siguiente comando:

   ```bash
   mingw32-make all

### Eliminar archivos de ejecución
- Ejecuta el siguiente comando:

   ```bash
   mingw32-make clean


# Parte Teórica: Documentación de Programación Orientada a Objetos en C++

**1. Conceptos Fundamentales:**
**Define qué es la programación orientada a objetos y explica sus principios fundamentales.**
- El paradigma orientado a objetos se define como una programación basada en la organización del código en diferentes clases de las que serán parte un conjunto de objetos con características en común. Estas características pueden ser atributos, o sea, variables propias y métodos que, toman el rol de funciones.
- Entre sus 4 pilares principales encontramos: 
      
      1. Herencia: la clases pueden adoptar características de otras clases.
      2. Polimorfismo: modifica métodos heredados.
      3. Encapsulamiento: protege información de la clase.
      4. Abstracción: integra ideas del mundo real en la modulación del programa.

**2. Herencia:**
**Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.**
- Una de las principales razones de utilizar el paradgima POO, es la reutilización del código. Especialmente, este aspecto lo logra cumplir por medio de la herencia. Gracias a la herencia, una clase es capaz de obtener tanto atributos como métodos de otras clases anteriomente creadas, evitando tener que volver a escribir código repetitivo.
- Para ejemplificar el concepto, podemos pensar en que queremos organizar a los animales por su tipo de reproducción. Para ello, podríamos crear primero una clase principal llamada "Animales" que agrupe características generales de estos seres vivos. Seguidamente, creamos las clases de cada tipo de animal (mamíferos, reptiles, ...) y que estos hereden de la clase "Animales" estos aspectos generales para evitar reescribirlo.

**3. Encapsulamiento:**
**¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++.**
- Otro gran acierto en este paradigma, es el encasulamiento. Este consiste en la protección de los atributos y métodos de de una clase separándolos en privados, protegidos y públicos. 
- Su importancia recae en ocultar detalles importantes principalmenta al usuario. Además, se pueden crear métodos encargados de filtrar los valores que proporcione el usuario y evitar así fallos en el programa.
- Algunos ejemplos de su uso son:
      1. Crear atributos con valores fijos y para que no puedan ser modificados por el usuario, se les dé cierta seguridad.
      2. A la hora de modificar algunos valores, es necesario proteger el tipo de información envidada por el usuario. Para ello, en vez de dejar simplemente que modifique los valores, sea por medio de getters y setters que proporcionen o modifiquen los valores en vez del usuario directamente.
      3.  A la hora de crear métodos, puede existir la necesidad de separar más el trabajo en otros métodos. Como solo buscan complementar a otras funciones, estos métodos pueden ser protegidos para que solo la propia función tenga acceso a ellas.

**4. Polimorfismo:**
**Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.**

- Existen ocasiones donde los métodos iguales de diferentes clases tienen que ser modificados para darle aún más transfondo. Esto se puede realizar gracias al polimorfismo, o sea, la posibilidad de utilizar un mismo método, dependiendo de la clase que lo invoca.
- Tenemos dos tipos de polimorfismo. Por un lado, el prolimorfimos del tipo, el cual, se refiere principalmente a la idea de modificar métodos heredados. Por otro lado, el polimorfismo de operador, consiste en darle un significado lógico a la suma, resta, multiplicación y divisón a objetos de una clase, aspecto que no tendría sentido si no se definiera.
- Ejemplos del uso de polimorfismo de tipo:

      1. La clase padre llamada "animales" puede tener un método que imprima el sonido que realiza el ser vivo. Las clases devivadas pueden modificar la impresión al sonido que realizan (la clase "perro", ladra).
      2. En caso de realizar un juego de shooters donde existe el método "disparar" en la clase padre y que las clases hijas (los diferentes tipos de armas), modifiquen el daño y cadencia de disparo del método.
- Ejemplos del uso de polimorfismo de operador:

      1. Se puede crear una clase que agrupe a todos los miembros de una empresa con su salario y nombre. Dentro de ella, se puede utilizar el operador "+" para calcular el promedio salarial de todos los trabajadores.
      2. En un juego relacionado a la granja, donde existan clases para los diferentes tipos de animales, el operador "*" puede ser utilizado para crear un nuevo objetos, o mejor dicho, cría entre dos animales de una misma clase. 

**5. Abstracción:**
**¿Cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.**

**6. Clases y Objetos:**
**Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.**

**7. Métodos Virtuales:**
**Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.**

**8. Constructores y Destructores:**
**¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.**

**9. Sobrecarga de Operadores:**
**Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.**

**10. Templates:**
**Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?**

**11. Memoria Dinámica en C++:**
**¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?**

**12. Diferencia entre `new` y `malloc` en C++:**
**¿Cuándo debería utilizar uno sobre el otro?**

**13. Fuga de Memoria (Memory Leak):**
**¿Qué es una fuga de memoria y cómo puede evitarse en programas en C++?**

**14. Punteros Inteligentes (Smart Pointers):**
**Explique el concepto de punteros inteligentes y proporcione ejemplos de su uso.**

**15. Diferencia entre `delete` y `delete[]` en C++:**
**¿En qué contexto se utilizaría cada uno?**

**16. Algoritmo de Ordenamiento:**
**¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?**

**17. Bubble Sort:**
**Explique el funcionamiento del algoritmo de ordenamiento "Bubble Sort". ¿Cuál es su complejidad temporal en el peor caso?**

**18. QuickSort:**
**Describa el algoritmo de ordenamiento "QuickSort". ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento?**

**19. Diferencia entre Ordenamiento Estable e Inestable:**
**¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.**

**20. Merge Sort:**
**Hable sobre el algoritmo de ordenamiento "Merge Sort". ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?**



# Blibiografía

1. 
2. 
3. 
4. 

