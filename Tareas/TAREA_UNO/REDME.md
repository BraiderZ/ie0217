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

18. **Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

   - Son empleados para acceder tanto a el valor de la variable original por medio de un puntero simple, acceder a la memoria asignada por medio de un puntero simple. Un caso normal para su uso es el manejo matrices bidimensionales y facilicat la creación de videojuegos como lo son "gato" y "ajedrez" (en este último inclusive se utilizan punteros triples). 

19. **¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**

   - El `break` es utilizado en el caso de que queramos terminar el bucle por completo y continunar con el resto del código, mientras que `continue` se utiliza para avanzar al siguiente valor del bucle (omite un valor del bucle).

20. **¿Para qué se utiliza la directiva #ifndef?**

   - Se utiliza al inicio de un archivo `.hpp`. Su objetivo es verificar que si en otro archivo no se han definido los headers de un programa, proceder a definirlo. Esto es una buena práctica, ya que, pueden haber casos donde el varios archivos con el mismo objetivo fueron llamados al mismo tiempo y si no se posee esta directiva, definirá más aspectos de los esperados.

21. **¿Qué es el puntero this en C++?**

   - Cuando tenemos una clase y un objeto invoca un método en específico, el puntero this se encarga de apuntar a la dirección de ese objeto. [4]

22. **¿Qué es un puntero nullptr?**

   - Existen caso en los que se inicializa un puntero de manera nula (no apunta a ningún valor). Para evitar ambigüedades que podrían causar definir al puntero como un 0 o un `null`, se creó `nullptr`.[4]

23. **¿Cuál es la diferencia entre un arreglo y una lista en C++?**

   - Su diferencia recae en los tipos de datos que posee. Un arreglo solo posee datos de un tamaño fijos, mientras que, una lista puede poseer cualquier tipo de dato en su interior. Además, las listas utilizan memoría dinámica.

24. **¿Qué es una función prototipo?**

   - Es una aviso previo al compilador sobre una fucnión a la que creará más a futuro. Esto es muy utilizado para darle orden al programa, donde los prototipos de las funciones se encontrarán en los `.hpp`.

25. **¿Investigue qué es un memory leak?**

   - A diferencia de otras partes de la memoría, cuando el programador decide asignar memoria dinámica (como crear listas), esta no se libera de manera automática, es responsabilidad del usuario liberarla. En el caso de que el programa no libere esta memoria adecuadamente, se dará una pérdida progresiva de memoria del sistema. Este problema es conocido como memory leak y existen varias maneras de verificar si un programa tiene este problema. 

# Parte 2 (Automatización - Makefile)

## Parte Teórica

1. **¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**

   - `CC`: se especifíca el compilador utilizado para el programa.
   - `CFLAGS` y `CXXFLAGS` contienen banderas de compilación para C y C++, respectivamente. Estas banderas se encargan de controlar el comportamiento durante la compilación. 
   - `LDFLAGS` contiene las banderas del enlazador. Mismo trabajo que las otras banderas pero relacionadas al enlazado.

2. **¿De qué se compone una regla en un Makefile?**

   - Posee un objetivo que le dará su nombre propio para su uso, prerequisitos o dependencias que pueden llegar a ser otras reglas y sus comando que serán las acciones a realizar por la regla.

3. **Defina qué es un target y cómo se relaciona con sus prerequisitos.**

   - Un target u objetivo es la función que se quiere crear dentro del makefile. 
   - Algunos de estos targets, dependen de archivos o inclusive de otros objetivos. Para estos casos, al target se el agregan los prerequisitos para que estas dependencias se encuentren actualizadas una vez se ejecute la regla.

4. **¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?**

   - `-I`: en caso de necesitar un archivo de encabezado que no se encuentre en la ubicación actual, con esta bandera puedes especificar la ubicación. 
   - `-c`: es utilizado para solo realizar una parte del proceso de compilación. En este caso se deja de lado el enlazado. Es util si queremos a la hora de realizar cambios en el programa, solo se necesite actulizar una parte de los archivos y no todos.
   - `-o`: se utiliza para agregarle el nombre al archivo de salida.

5. **¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**

   - Se definen con un formato parecido al de lenguajes de programación: `NOMBRE = valor`. En caso de querer utilizarse, se debe usar: `$(NOMBRE)`. Al igual que las variables en los lenguajes, definir variables ayuda a mejorar la lectura del Makefile y se promueve el reciclaje, ya que, en caso de modificar un aspecto guardado en una variable, tan solo se necesita cambiar su valor donde fue definida.

6. **¿Qué utilidad tiene un @ en un Makefile?**

   - Cuando se coloca al inicio de un comando, este se suprime en la salida, ya que, estos se imprimen a la hora de ejecutar una regla. Por ello, usar `@` puede ayudar a mejorar la limpieza de un Makefile

7. **¿Para qué se utiliza .PHONY en un Makefile?**

   - Existen casos en que los objetivos no representan ningún archivo como es el caso de `clean`, que sin importar esto, siempre se ejecutará. Para evitar que a la hora de compilar busque alchivos relacionados a este objetivo, se coloca `.PHONY`.