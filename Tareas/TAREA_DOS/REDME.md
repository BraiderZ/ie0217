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

- La abstracción se define como la característica principal del paradigma POO para plasmar objetos de la vida real dentro de la programación. Este proceso se logra por medio de los métodos y atributos que le definamos a la clase. Estos métodos y atributos se eligen al abstraernos de todos los detalles de pueden tener los objetos reales y solo concentrarnos en lo más importante.
- Ejemplo del uso de la abstracción tenemos:

      1. Si necesitamos representar a las personas que poseen un saldo dentro de una cuenta de banco, podemos crear una clase con los atrubutos y métodos más relevantes para el usuario. Entre atributos se pueden tener: nombre del usuario, id de la cuenta bancaria y saldo que posee en el banco. Para los métodos, se podrían tener: revisar los detalles de la cuenta, depositar dinero y extraer dinero.
      2. En caso de crear una blibioteca de música, podemos tener atributos como: nombre de la canción, artista, género y duración. Mientras que, para métodos podemos crear: reproducir música y detener música.

**6. Clases y Objetos:**
**Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.**

- Existe la confusión de que las clases y los objetos son lo mismo, lo cual, es erroneo. Las clases consisten en la bases que posee los atributos y métodos de un tipo de objetos en específico. En otras palabras, se encargan de crear el comportamiento que tendran los objetos. Los objetos por su parte, son instancias de las clases y representan una entidad capaz de comportarse según los designios de las clases a las que pertenezca.
- Un ejemplo de esta diferencia es:

      1. Si se busca crear perfiles para diferentes artistas, podemos crear una clase que funcione como la plantilla de su información con atributos como su nombre, edad, labor a la que se dedica y premios ganados a lo largo de su vida. En el momento de que un artista quiera incribirse y tener un perfil, se crea un objeto que poseerá las características definidas en la clase pero, con la información correspondiente al artista en cuestión.

**7. Métodos Virtuales:**
**Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.**

- Aveces cuando se crea una clase padre que heredará sus atributos y métodos a otras clases, se puede saber que ellas utilizarán un método pero que no es posible definirlo en el mismo. Para ello, la clase padre puede crear un método virtual, osea, crear un prototipo del método que, por medio del polimorfismo, las clases hijas se encargarán de modificar a su gusto. U detalle a tener en cuenta sobre las clases virtuales, esque un uso muy común es a la hora de crear punteros de una clase derivada, en donde, si se busca ingrear por medio del puntero a un método, buscará dentro de la clase hija, por lo que, resultada necesario el uso de este tipo de métodos.

**8. Constructores y Destructores:**
**¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.**

- El contructor y el desctrutor son dos métodos escenciales a la hora de crear una clase y que cumplen un papel fundamental para el funcionamiento correcto del código. En primera instancia, el constructor es invocador a la hora de crear un objeto y se encarga de inicializarlo, dandole valor a sus atributos tanto de manera directa o por medio de parámetros, entre otras acciones posibles. En segunda instancia, el destructor se encarga de liberar el espacio a la hora de que un objeto deje de ser utilizado o en el momento en el que termina el programa.
- Ejemplos del uso del construtor son:

      1. Si se crea una cuenta que es parte de una clase, el constructor puede imprimir un mensaje sobre que el proceso fue exitoso.
      2. En caso de crear una clase encargada de calcular diferentes datos de una figura geométrica, el constrcutor puede recibir como parámetros los las medidas y cantidad de lados de una figura.

- Ejemplo del uso del desstrutor es:

      1. Cuando un objeto posee memoria dinámica, es necesario crear un destructor que, a la hora de invocarlo, tengas las instrucciones necesarias para liberar la memoria y no existan Memory Leaks.

**9. Sobrecarga de Operadores:**
**Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.**

- Como se mencionó anteriormente, existe el polimorfismo de operador. En general, los operadores no reconocen el comportamiento que deben de tener con un tipo de dato creado por el usuario, ya que, en su interior pueden haber miles de atributos y métodos. Sobrecargar el operador es darle un significado a los operadores, según a la clase a la que se refiera. Esto puede ser muy util si se necesitan métodos fáciles de comprender por los programadores a la hora de que dos o más objetos de una misma clase interactuen entre ellos.
- Un de la sobrecarga puede ser:

      1. En un juego de batallas donde exista una clase que posea el daño que causa un objeto y la salud del mismo, se puede utilizar el método "-" para referirse a que un objeto le realizó daño a otro.
 
**10. Templates:**
**Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?**

- Los templates son una valiosa herramienta que se encarga de crear funciones o clases por medio de una versión genérica de las mismas. Cuando se crea un template, en vez de colocar un tipo de variable, se coloca  la letra "T".  Esta letra significa que todos los parámetros que recibirán las funciones o clases, son del mismo tipo [1].
- El uso más uitlo de los templates es a la hora de crear funciones o clases que, no nos interese tanto que las variables sean de un tipo en específico y más bien, que diferentes tipos de datos puedan usarlas sin tener problemas, ya que, generalemente solo es un tipo de dato el que se define para su uso. Ejemplo de ello, podría ser el crear una función o clase que se encarga de realizar un promedio entre ciertos número, o sea, no nos interesa si es un integer o un double, sino que, sin importar su tipo, se calcule el promedio.

**11. Memoria Dinámica en C++:**
**¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?**

- A la hora de crear un programa, cada uno de los valores definidos (inclusive las instrucciones) tiene su propio espacio en la memoria. Este espacio en general es fijo dependiendo del tipo de valor que sea y el papel que cumple. Sin embargo, existe una parte de la memoria que se conoce como memoria dinámica, la cual, no es utilizada por el programa de manera automática, sino que, el programador puede utilizar a su gusto. Su uso es común cuando queremos definir valores que cambian de tamaño con el tiempo, debido a la flexibilidad que proporciona la memoria dinámica conforme pasa el tiempo de ejecución del programa.

**12. Diferencia entre `new` y `malloc` en C++:**
**¿Cuándo debería utilizar uno sobre el otro?**

- Aunque tanto `new` como `malloc` se encargan de darle al usuario memoria dinámica, poseen diferencias. En primera instancia, `new` crea un puntero del tipo de dato solicitado hacia la memoria reservada, mientras que `malloc`, siempre genera un puntero de tipo `void` y se necesita convertirlo al tipo de valor necesitado. En segunda instancia, `new` tan solo se necesita especificar el tipo de dato que va a ser utilizar en ese espacio, a `malloc` en cambio se le definen la cantidad de bytes que van a ser utilizados. Finalmente, se utiliza el comando `delete` para liberar memoria con `new` y para `malloc`, se utiliza `free`.
- En general, ambos pueden ser utilizados en cuallquier caso. Sin embargo, para mayor facilidad se recomienda el uso de `new` debido a ser más agradable con el usuario, El caso principal en el que se prefiere utilizar `malloc`, es relacionado a si el código tiene que se compatible con código C, ya que, solo este de los dos puede serlo.  

**13. Fuga de Memoria (Memory Leak):**
**¿Qué es una fuga de memoria y cómo puede evitarse en programas en C++?**

- Como se mencionó anteriormente, la memoria dinámica es controlada completamente por el usuario. Es por ello que, el es completamente responsable de liberar la memoria  una vez sea utilizada. En el caso de que esta memoria no se libere, poco a poco se irá acumulando hasta el punto en el que suceda una fuga de memoria. Estas fugas son capaces de obstruir el programa y evitar que funcione correctamente o includive no se ejecute del todo. Simplemente para evitar este problema, se debe liberar la memoria con los comando correspondientes y se pueden utilizar diferentes herramientas que nos advierten de los memory leaks para lograr arreglarlos ante de compilar el código.

**14. Punteros Inteligentes (Smart Pointers):**
**Explique el concepto de punteros inteligentes y proporcione ejemplos de su uso.**

- Un puntero inteligente es una de las maneras más versátiles de controlar el uso de la memoria dinámica. Estos puntero cuando se les ha asignado otro puntero de una memoria dinámica, se encarga de que una vez salga de su alcance el valor, libere la memoria de manera automática. Inclusive, no es necesario indicarle de alguna manera cómo eliminar, ya que, por si solo conoce el proceso [2].
- Ejemplos de su uso:

      1. Cuando se necesite utilizar memoria dinámica y no se tenga un conocimiento claro de en qué momento se deba liberar la memoria.
      2. Si en diferentes partes del código y de manera separada se realizaron tomas de memoria dinámica, el puntero inteligente es una buena opción para llevar el conteo de la memoria que se ha reservado y sea liberada de manera rápida.
 
**15. Diferencia entre `delete` y `delete[]` en C++:**
**¿En qué contexto se utilizaría cada uno?**

- `delete` se utiliza cuando la memoria reservada fue un valor para un valor único, mientras que `delete[]`, es utilizado cuando la memoria reservada fue para un arreglo. El contexto de cuando se utiliza cada uno, depende del tipo de dato que se reservó en la memoria dinámica, ya que, si se utiliza el incorrecto, no surtirá efecto.

**16. Algoritmo de Ordenamiento:**
**¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?**

- Un algoritmo de ordenamiento consiste en un tipo específico de lógica con la que toman un conjunto de valores y son acomodados para su posterior uso o eliminación. Estos algoritmos pueden ser de muchos tipos dependiendo de las peticiones y las necesidades del código. Su importancia recaer a la hora de mejorar la optimización de un programa, ya que, a diferencia de tener muchos valores ordenados sin ninguna logicos o acomodados de manera aleatoria, los algoritmos generan que el tiempo de búsqueda, obtención y eliminación de los valores entren dentro de un intervalo dado, por lo que, el programa correrá a una velocidad optima siempre. 

**17. Bubble Sort:**
**Explique el funcionamiento del algoritmo de ordenamiento "Bubble Sort". ¿Cuál es su complejidad temporal en el peor caso?**

- Este algoritmos funciona recorriendo una lista de valores, comparando los valores adyacentes y cambiado su posición una si no se encuentran de la manera especificada. Este proceso de recorrer la lista lo realiza varias veces hasta no exista ningún cambios más. En el peor de los casos, la complejidad de este algortino es de O(n^2), o sea, potencial.

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

