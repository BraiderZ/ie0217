# Tarea 1/IE-0217

### Estudiante: Luis Brenes Campos - C21324
### Profesor: Rafael Esteban Badilla Alvarado

# Parte 1 (Introducción a C++)

## Parte Teórica

1. **¿Cuál es la principal diferencia entre C y C++?**
   - Uno de los problemas relacionados al lenguaje de programación C, era la falta del paradigma POO. Este problema fue resuelto con la creación de C++, el cual, cuanto con la principal diferencia de hacer porsible la programación orientada a objetos, con sus típicas características como lo es la herencia.

2. **¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.**
   - La diferencia fundamental es la manera en la que se actúa con el código fuente. En el caso de lenguajes de programación como Python, son interpretados, por lo que, el codigo fuente se procesa línea por línea mientras el programa esta en ejecución. Por otro lado, lenguajes como C y C++ son compilados, o sea, el código fuente es procesado en un solo paso antes de ejecutar el programa. 
   - Aunque ambos tipos de lenguajes son válidos para realizar multiples tareas, conociendo las ventajas de cada uno, se puede considerar cuál es el más óptimo para un trabajo específico. Para el caso de lenguaje compliado, ejemplos donde su uso es más adecuado son: en caso de buscar una ejecución y distribución instantaneamente, querer programas de ejecución más rápida y, no dar accesibilidad al código fuente al usuario. Por otro lado, ejemplos donde un lenguaje intrepretado es más óptimo son: en caso de trabajar multiplataforma debido a que no habrían problemas, se puede testaer y comprobar el programa de manera más rápida y, en caso de querer detectar errores de manera más eficiente.[1]
3. **Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**
   - Los linker buscan enlazar el archivo ejecutable con ciertas referencias dadas por el programador. Principalmente, estas son blibiotecas. Esta función es esencial a la hora de procesar el código, ya que, el objetivo de las blibiotecas u otros archivos es reciclar código y mejorar el orden, evitando la redundancia a la hora de crear programas y enfocarse en problemas más específicos.
4. **Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.**
   - Los tipos de datos primarios en C++, son datos simples como lo son los números o las letras que se agrugan, por ejemplo, en integer (`int`) y character (`char`). Los datos derivados no son otros que datos que poseen un tipo primario asociado, como es el caso de los pointer (`*`) que posee la ubicación en la memoria de otro dato.
5. **Defina qué significa inicializar y declarar una variable.**
   - En caso de C++, a la hora de crear una variables, se deben especificar tres aspectos importantes: tipo de dato que será la variable, nombre de la variable y valor asignado a la variable. A la hora de declarar una variable, tan solo se especifica el nombre y el tipo de dato que es, mientras que, al inicializar se le da también un valor. Existen casos en donde nos interesa declalarar la variable y después inicializarla más adelante.

6. **¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**
   - A la hora de crear una función, debemos definir el tipo de dato que retorna, su nombre y parámetros a recibir. Si llegamos a crear otra función con el mismo nombre pero variando los parámetros a recibir, el compilador es lo suficientemente inteligente para reconocer la diferencia e invocar a una función u otra. Esto nos ayuda a reciclar código y mejorar la lectura del código en el caso de que queramos tener funciones muy similares pero que difieren en aspectos pequeños.
7. **¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**
   - Un puntero almacena la dirección de memoria de otra variable. Es utilizada en casos en los que queremos cambiar el valor de una variable sin la necesidad de modificarla directamente, comunmente es utilizadas a la hora de enviar parámetros a funciones. En la vida real, un puntero se puede ejemplificar como una persona apuntando la dirección en la que se encuentra otra persona o un letrero con la dirección exacta de un lugar.
8. **¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.**
   - Almacena el valor original, mientras que, dentro de las funciones, se crea una copia de la variable local para ser utilizada a su gusto.
   - En algunos caso queremos que un valor en específico sea conocido por otro el código y lo puedan utilizar a su conveniencia. Para ello, se crean las variables globales, ya que, una variable local solo es conocida dentro del lugar donde fue creada.
9. **Investigue y explique tres métodos comunes de la biblioteca string en C++.**
   - `.find(parametro)`: Busca si un la cadena dada como parámetro se encuentra de otra cadena. En caso de ser así, retorna la posición del primer carácter.[2]
   - `.substr(paramentro1, parametro2)`: Retorna una parte de la cadena. El primer parámetro especifica la posición del primer carácter y el segundo la cantidad de carácteres que tendrá la nueva cadena.[2] 
   - `.length()`: Retorna el tamaño de la cadena.[2]
10. **¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**
    - El bucle while verifica la condición para continuar al inicio de su ejecución, mientras que el bucle do-while, realiza la ejecución una vez y después verifica las condiciones. En otras palabras, el do-while se ejecuta al menos una vez.
11. **¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.**
    - No se pueden almacenar funciones en estructuras debido a que no son tipos de datos que se pueden asignar como sí lo son los datos simples de C++. En caso de querer realizar esto, se puede hacer por medio de punteros. [3]
    - En el caso del encapsulamiento, sí podemos establecer miembros tanto privados como públicos. La principal razón de ello es que en C++ las clases y las estrucutras son muy parecidas y una de las caracteristicas principales de las clases, es el encapsulamiento. [4] 

12. **Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.**
    - Dividir el código en diferentes archivos es de gran utilidad debido a que mejora la organización del programa. Se podría decir que, como con las funciones buscamos establecer una tarea a cada una, divir en .hpp, .cpp y main.cpp cumple el mismo objetivo pero en otro nivel.
    - `.hpp`: Contiene los proptotipos de las funciones y de algunos tipos de datos como las estrcuturas.
    - `.cpp`: En el colocamos la funcionalidad de las funciones.
    - `main.cpp`: Se encarga de iniciar el programa y de inicializar algunas variables importantes para el funcionamiento de las funciones.
13. **Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.**
    - Es un proceso en el que convertimos un tipo de dato en otro. Algunos de ejemplos de su  uso son: cuando se busca mejorar la precisión de números (pasar de un integer a un float) y convertir un número que fue recibido como un character en un int para poder realizarle las operaciones básicas.
    - Manera implíplcita: tenemos una variable incializada de un tipo y una variable declarada de otro. Si la segunda variable la inicializamos con el valor de la primer variable, esta tomará su valor y lo cambiará al otro tipo.
    - Manera explícita: simplemente tenemos una variable inicializada de un tipo y otra que inicializaremos (de otro tipo) asigandole el valor de la primer variable. Esta vez, agregar entre paréntesis el tipo de variable a la que cambiará la primer variable a la hora de asignarla a la segunda.

14. **¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.**
    - El uso de la sentencia `goto` es una mala práctica de programación debido a que dificulta mucho la comprensión del código debido a que a diferencia de otras sentencias, esta se vuelve muy personal a hora de su uso. Además, a la hora de necesitar cambios en el código fuente, puede ocasionar ciertos problemas para colocar la nueva flag.
    - Otra de las razones por las que no es recomendable, esque existen mejores maneras de realizar el mismo resultado sin ser tan invasivos con el código. Por ejemplo, si queremos terminar un bucle o salir de una función, es mejor utilizar `break` y `return` respectivamente. Por otro lado, si queremos avanzar a la siguiente iteración de un bucle, podemos utilizar un `continue`. 
15. **¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.**
    - Las variables se guardan en la memoria del programa. Debido a que se busca la mayor eficiencia del programa, la memoria se separa en diferentes partes y dependiendo de la importancia de la variable, será enviada a una parte u otra de la memoria. En el caso de las variables globales, las cuales queremos que se mantengan sus valores guardados hasta finalizar el código, se guardan en un apartado propio para ellas junto con las variables constantes. Por otro lado, las variables locales se guardar en el "heap", una sección de memoria dinámica, o sea, una vez se termine su uso específico (lo más común es al finalizar una función), el valor de la variable es eliminado.

16. **¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**
    - Parámetro por valor: cuando una función recibe este valor, crea una copia de .a variable a la que se encontraba relacionada. Eso significa que, las modificaciones que se le realice dentro de la función, no modificará el valor de la variable original 
    - Parámetro por referencia: en este caso la función recibe la dirección de memoria de la variable. Esto se realiza en el caso de que sí queramos modificar los valores de la variable original.
    - Parámetro por puntero: parecido al caso anterior, la función recibe la dirección de momoria de la variable pero explícitamente. Con ello, no solo veremos reflejados los cambios en la variable original, sino que, poderemos realizar algunos otros tipos de acciones.

17. **Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**
    - Este apunto al primer valor del arreglo, además, no es necesario ser específicos a la hora de inicializar el puntero, con solo el nombre de la variable es suficiente. En caso de querer acceder al resto de valores del arreglo, simplemente debemos utilizar el símbolo `+` seguido de un número entero. Esto se debe a que una vez hayamos asignado el arreglo al puntero, este sabe los tipos de datos que se encuentran en el arreglo y cuantos bytes posee cada valor.