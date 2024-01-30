# Tarea 4/IE-0217

### Estudiante: Luis Brenes Campos - C21324
### Profesor: Rafael Esteban Badilla Alvarado

# Instrucciones para ejecutar el programa "adivina.exe"


## Requisitos previos

- Asegúrate de tener un entorno de desarrollo C++ instalado, como [MinGW](http://mingw.org/).
- Clona o descarga el repositorio en tu máquina local.

## Compilación


## Targets específicos

# Parte Teórica

1. **En Python, ¿cuál es la diferencia fundamental entre una lista y una tupla?**

Existen dos principales diferencias entre una tupla y una lista. La primera de ellas es su manera de ser creada: la lista se crea con paréntesis cuadrados, mientras que, la tupla con paréntesis redondos.

Sin embargo, la principal diferencia recae en los datos que almacena. Una lista es dinámica, o sea, los valores dentro de la lista pueden cambiar e inclusive agregar más valores.  En el caso de la tupla esto no es posible, una vez creada una tupla con un tamaño y valores definidos, estos no se podrán modificar por el resto del programa. En pocas palabras, la tupla es más conveniente cuando queremos almacenar valores que no cambien (comandos de un videojuego) y la lista en casos donde vayamos cambiando o agregando más valores (menú de un restaurante).

2. **¿Qué significa la sobrecarga de operadores en Python y cómo se implementa?**

La sobrecarga de operadores en Python al igual que en otros lenguajes, va de la mano a la hora de crear un clase. A diferencia de los diferentes tipos de datos que vienen por defecto en el lenguaje, crear una clase puede traer ciertos enigmas para el interprete. Ejemplo de ello, son los operadores, ya que, por defecto no se sabe el comportamiento que se debe de tener cuando se suman dos objetos de una clase o cuáles datos se deben imprimir cuando se utiliza un print.

Para resolver este problema, el lenguaje nos da la opción de usar métodos mágicos a la hora de crear una clase. Dependiedo del método mágico elegido, se le dará sentido al operador relacionado con él. Por ejemplo, si creamos una clase para trabajadores donde como atributos poseen su nombre y salario, podríamos utilizar el método mágico `__add__`, para que cuando se sumen dos objetos, se nos retorne el promedio entre ambos salarios. Para que esto funcione, simpelemte creamos un método de manera normal, pero su nombre debe ser el del método mágico elegido.

3. **Explique el concepto de "alcanzabilidad" (scope) de una variable en Python.**

Consiste en la vida y funcionamiento que tiene una variable, dependiendo del lugar donde fue creada. Cada variable definida en el código, tiene un alcance máximo que define el usuario a la hora de ser creada. Existe dos principales tipos de alcance: global y local.

Variables globales: estas variables son defindas fuera de cualquier bloque creado por el usuario. Su caracterísitica princial es que cualquier futuro bloque de código creado por el usuario, puede usar la variable y el valor especificado dentro de ella. Sin embargo, si es modificada dentro de un bloque, no sufrirá cambios por defecto. Si queremos que sufra cambios, se debe colocar `global` dentro del bloque donde se modificará el valor. En pocas palabras, `global` funciona como un pequeño contrato donde se da la oprtunidad de moficiar la variable.

Variables locales: a diferencia de las variables globales, estas son definidas dentro de un bloque de código y solo dentro de ese bloque existe esa variable. Además, la vida de estas variables termina una vez que deja de ejecutarse el bloque donde fue definida, o sea, se reinicia la variable, una vez se sale del bloque de código.

En general, se busca crear variables globales en casos donde tendremos valores que serán usamos varias veces a lo largo del programa, mientras que, creamos variables globales cuando necesitamos definir un valor importante solo para una parte del programa.

4. **¿Qué es un decorador en Python y cuál es su función principal?**

Los decoradores en Python son una herramienta que permite extender o mejorar la funcionalidad de una función existente. Su función principal es añadir características adicionales o modificar el comportamiento de una función sin cambiar su código interno. Los decoradores son implementados como funciones que toman otra función como argumento y devuelven una nueva función que generalmente envuelve la ejecución de la función original. La sintaxis especial @decorador facilita la aplicación de decoradores de manera concisa. [1]

Un ejemplo podría ser la creación de una función que imprime información al usuario, a la cual se le agrega más detalles antes y después de la impresión mediante un decorador que a su vez recibe argumentos dados por el usuario, evitando así la necesidad de invocar funciones adicionales directamente.

5. **¿Cómo se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally.**

Al igual que en lenguaje de programación C++, para el manejo de excepciones en Python, se tienen diferentes bloques que cumplen cierta funcionalidad para evitar errores en la ejecución del código, evitando que pueda colapsar. El principal bloque es `try`, dentro de este bloque se agrega el código al cuál queremos manejarle posibles errores. Si sudede un error dentro del bloque `try`, el programa procede a buscar los bloques `except`. Este grupo de bloques almacenan un tipo de error definido por el programador y cuando sucede un error de ese tipo, se ejecutará el código que almacene (suelen ser prints que explican el error y un cierre del programa). Finalmente, existe el bloque `finally`, este bloque se ejecutará **siempre** una vez hayan terminado las funcionalidades los otros dos bloques anteriores.

Un ejemplo podría ser a la hora de crear una función en donde el usuario proporciona un valor que dividirá a otro. Como es bien sabido, sucederá un error si el usuario divide entre 0 o envía un string en vez de un número. Por ello, dentro de la función agregamos un bloque `try` que tendrá la división a realizar. Por otro lado se crearon dos bloques `except` que, uno se ejecuta si se realizó una división entre cero y otro cuando el argumento enviado fue un string. Dentro de estos except se imprime al usuario cuál fue el problema. Finalmente, se creó un bloque `finally` que simplemente imprime un agradecimiento al usuario por uutilizar el programa.

6. **¿Qué son los generadores en Python y para qué se utilizan?**

Los generadores son funciones que retornan valores, uno a la vez, de la forma especial en la que definió el programador.[1]

Se utilizan principalmente para la creación de secuencias infinitas pero controladas para la obtención de datos. Todo esto se logra por medio de la instrucción `yield`. Cuando la función en invocada, no ejecutará todo el código en su interior, sino que, para en la instrucción y la proxima vez que sea invocada la función, procederá a la siguiente instrucción o al siguiente valor que proporcione la mis intrucción.

7. **Explique la diferencia entre los métodos __init__ y __call__ en clases de Python.**

Estos dos métodos mágicos poseen funcionalidades diferentes que, llegan a ser de gran valor a la hora de crear una clase. Por un lado, `__init__` es conocido por el "constructor" de la clase. Su función consiste en invocarse en el momento que se cree un nuevo objeto de una clase con el objetivo de inicializar atributos y modificarlos según los parámetros recibidos. Por ejemplo, si creamos una clase llamada Animal y creamos un objeto de la siguiente manera: animal1 = Animal(6). El constructor se encarga de tomar el 6 y darse al atributo de edad, o sea, en un solo paso se definió la edad del animal.

Por otro lado, el método `__call__` tiene como objetivo definir qué sucederá cuando se invoque un objeto como si de un invocable se tratase. Siguiento el mismo ejemplo, podría invocar a animal1() y que al invocarlo se ejecute una funcionalidad en caso de que queramos agregar más información sobre el animal.

8. **¿Cómo se organizan los módulos y paquetes en Python? ¿Qué es __init__.py?**

Tanto los módulos como los paquetes en python se organizan por medio del nombre del archivo.En el lado de los módulos, utilizamos `import nombre_archivo_módulo` si queremos agregar un módulo a nuestro archivo. Este proceso podemos realizarlo con todos los módulos que queramos agregar. Además, podemos utilizar `from nombre_archivo_módulo import funcionalidad` si queremos simplemente agregar a nuestro archivo, una funcionalidad específica del módufulo como una función o una clase.

En el caso de los paquetes funciona de la misma manera, con la diferencia de que un paquete contiene un conjunto de archivos e inclusive subpaquetes. Para ello tambien utilizamos `import` pero agregaremos un punto después del nombre del paquete si queremos importat un subpaquete o a un archivo específico del paquete.

Es importante mencionar el archivo llamado `__init__.py`, el cual se debe colocar dentro de un paquete para que Python lo determine como un paquete. Este achivo puede estar vacío, sin embargo, es común que se agregue dentro del funcionamiento inicial del paquete.

9. **Explique la diferencia entre los métodos append() y extend() en listas de Python.**

Las listas no dan la posibilidad de agregar nuevos valores. Para ello, podemos realizar un `append()` o `extend()`. Por un lado, `append()` se utuliza en el caso de que queramos agregar un solo valor a la lista. Esto lo hacemos de la siguiente manera: `lista.append(valor_nuevo)`. El valor nuevo se colocará de manera automática en la última posición de la lista.

Por otro lado, `extend()` se utiliza si queremos agregar más de un valor a la lista, esto claro, si tenemos otra lista con valores en su interior. Su uso es parecido al `append()`: `lista.extend(otra_lista)`. Con ello, la lista obtendrá todos los valores de otra lista y de igual manera, colocará los valores al final.

10. **¿Cuál es la diferencia entre un método de clase y un método estático en Python?**

Antes de hablar propiamente de la diferencia entre ambos métodos, es importante mencionar su similitud. Ambos necesitan un decorador para ser definidos: @staticmethod para el método estático y @classmethos para el método de clase.

Hablando de sus diferencias, estas se encuentran en el papel que desenpeñan. El método de clase tiene la particularidad de no necesitar una instancia para ser invocado y en vez de utilizar `self` utiliza `cls`. Su principal objetivo es modificar atributos o dar valores a los atributos en un caso específico. Por otro lado, el método estático no tiene relación con su alredesdor, o sea, con el resto de la clase. Esta caracterísica hace que no pueda utilizar ningún a tributo a no ser que sea enviado por parámetro. Esta también puede invocarse sin existir una instancia. [2]

En general, su diferencia recae en el uso: método de clase de modifica los atributos y método estático puede ser invocado para cumplir una función sin necesidad de crear una intancia.

11. **Hable sobre las diferencias entre herencia simple y herencia múltiple en Python.**

Cuando queremos crear una clase que, tiene similitudes con una clase anteriormente creada, utilizamos la herencia. Con ello, la nueva clase hereda tanto los atributos como métodos de la clase padre: esto es conocido como herencia simple. Sin embargo, existen casos donde la nueva clase que se va a crear, tiene similitudes con más de una clase anteriormente creada. Para estos casos, utilizamos la herencia múltiple, donde la nueva clase hereda de más de una clase.

Por ejemplo, podríamos crear una clase llamada ornitorrinco, la cual, sabemos que tenemos tanto características de los ovíparos como de los mamíferos. Si anteriormente habíamos creado estos dos grupos de animales, podríamos hacer que el ornitporrinco herede los atributos de ambos grupos por medio de la herencia múltiple.

12. **¿Cómo se manejan los errores de importación de módulos en Python?**

El principal error a la hora de la importación de un módulo sucede cuando Python no logra encotrarlo. Este error es denominado por Python como `ModuleNotFoundError`. Por ello, la mejor manera de manejar errores sobre la importación, es utilizando un bloque `try` donde en su interior tengamos la importación. Además, creamos la excepción `ModuleNotFoundError` e imprimimos un mnesaje que nos indique cuál fue el método que no logró importarse.  Con ello, evitamos que el código llegue a colapsar.

Además, se debe tomar en cuenta que, muchos de estos errores se deben a que módulos que no son propios no fueron instalados con anteicipación , por lo que se recomienda verificar si es así en caso de recibir dicho error.

13. **¿Cuál es la diferencia entre una clase y un objeto en Python?**

La clase puede ser denominada como una plantilla con ciertos atributos y métodos. Por medio de esta plantillas podremos crear instancias que poseer dichos métodos y atributos. Por otro lado, los objetos son las instancias creadas en base a una clase.

Dicho de otra manera, mientras que una clase es la estructura de una variable, un objeto es la variable que se basa en dicha estructura.

Por ejemplo, podríamos crear una clase llamada Estudiantes. Dentro de la clase creamos atributos como el nombre, edad y un carnet. Gracias a dicha clase, ahora podemos crear una variable llamada estudiante1 que se basa en la clase Estudiantes y por ello, podemos definirle su porpio nombre, edad y carnet.

14. **Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.**

En el lenguaje Pyhton, la diferencia entre una clase abstracta no es mucha con respecto a una interfaz, debido a que no existe en propio termino interfaz en Pyhton.

Sin embargo, podríamos decir que, una clase abstracta es una clase base que posee métodos abstractos, o sea, que no pueden ser invocados. La idea principal de estos métodos es ser un tipo de contratos que deben de seguir las subclases, o sea, las subclases pueden tomar ese método abstracto y darle una funcionalidad y volver un método concreto. Con ello, ahora el método ahora sí puede ser invocado. El detalle recae en que una clase abstracta puede poseer métodos que no sean abstractos, por lo cual, podemos crear instancias de dicha clase. [3]

Por otro lado, la interfaz es una clase abstracta que solo posee métodos abstractos por lo que en ningúun caso se pueden crear instancias de dicha clase y solo funciona como una plantilla a seguir por los métodos que hereden de la interfaz. 

15. **Explique el concepto de sobreescritura de métodos en Python y cómo se realiza.**

El concepto de sobreescritura de métodos se basa en la primicia de que un mismo invocable puede poseer diferente funcionalidad dependiendo del momento o lugar desde el que fue invocado. Entrando más a detalles, este concepto se utiliza a nivel de métodos a la hora de herencia. Cuando una clase hereda métodos de otra clase, esta puede modificar los métodos que heredó según lo necesite.

Esto se realiza de una manera muy sencilla. En primera instancia, creamos una clase padre que posea un método, por ejemplo, una clase animal que tenga un método que imprima: "Puedo comer". En segunda instancia, creamos una clase que hereda de la clase padre. Una vez heredemos, "creamos" un método con el mismo nombre al del método creado en la clase padre y de funcionalidad ahora imprime: "Me gusta la carne".

Así de simple, un mismo método posee dos funcionalidades diferentes dependiedo de la clase desde la que se invocó gracias a la sobreescritura. 

# Parte Práctica 2

## Medición de Tiempo de Ejecución

Para la medición del tiempo de ejecución, la interfaz cambió a una función para ser capaz de iniciarla mientras timet toma la medición. Una vez colocada la parte del código extra, se realizaron pruebas con 50 alergias y con 11 alergias. Las pruebas fueron: impresión de todas las alergias, combinación del puntaje de alergia del usuario, agregar nombres de las alergias a verificar, agregar nombres y valores de las alergias a verificar, y agregar nuevo valor a la lista de alergias. Esto para verificar la mayor cantidad de métodos posibles.

Si desea ver el commit donde se agregó el código relacionado a esta parte:

[Enlace al Commit](https://github.com/BraiderZ/ie0217/commit/cd47a6f982baf25e695436ee0171ca6368d6c6d7)

### Impresión de todas las alergias

#### 11 alergias

![11 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/11%20Alergias_Opcion1.png)

#### 50 alergias

![50 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/50%20Alergias_Opcion1.png)

En este caso podemos determinar que el tiempo de ejecución es muy parecido, siendo tan solo una diferencia de aproximadamente un segundo. **Cabe destacar para esta parte como el resto de pruebas, que existen sleeps en varias partes del código para mejorar la visulización del usuario y este tiempo también lo toma en cuenta la medición.**

Si eliminamos ese tiempo extra del sleep, rondan entre los 3 y 2 segundos de ejecución, lo cual, si contamos los momentos donde interviene el usuario, es muy poco.

### Combinación del puntaje de alergia del usuario

#### 11 alergias

![11 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/11%20Alergias_Opcion2.png)

#### 50 alergias

![50 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/50%20Alergias_Opcion2.png)

En la parte del código donde el usuario ingresa su puntaje de alergia es donde podemos observar mayor diferencia ya su vez, mayor tiempo que en el resto de proceso. Es importante tener en cuenta que, esto se debe a la recursividad utilizada para buscar la combinación correcta, ya que, entre más valores se agreguen a la lista de alergias, la cantidad de posibilidades aumenta desproporcionalmente.

En el caso de 11 alergias se usó un puntaje de 4 dígitos debido a que fue el mayor valor encontrado para buscar el máximo tiempo posible. Mientras que, se usaron 8 dígitos en el caso de 50 alergias, ya que, con 10 se estuvo esperando más de 30 minutos de que el  programa diera una respuesta y terminaba su búsqueda.

Todo esto puede deberse a la propiedad exponencial que posee la recursividad creada.

### Agregar nombres de las alergias a verificar

#### 11 alergias

![11 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/11%20Alergias_Opcion3.1.png)

#### 50 alergias

![50 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/50%20Alergias_Opcion3.1.png)

Nuevamente tenemos un caso donde los resultados son muy parecidos. Las diferencias de tiempo inclusive pueden estar arraigadas al momento donde se ingresaron los datos, o sea, no es problema del programa.

### Agregar nombres y valores de las alergias a verificar

#### 11 alergias

![11 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/11%20Alergias_Opcion3.3.png)

#### 50 alergias

![50 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/50%20Alergias_Opcion3.3.png)

A la hora de agregar tanto el valor como el nombre, sí podemos observar una diferencia más significativa. Ya aquí puede entrar en juego la cantidad de verificaciones que tiene que realizar el código y como este se ve afectado dependiendo de la cantidad de alergias en el sistema.

### Agregar nuevo valor a la lista de alergias

#### 11 alergias

![11 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/11%20Alergias_Opcion4.png)

#### 50 alergias

![50 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/50%20Alergias_Opcion4.png)

Un caso poco particular al ser la ejecución con más alergias quien obtiene una medición más grande de tiempo. Esto nos detalla nuevamente el tiempo que tardó el usuario en ingresar los datos y no tanto la falta de optimización del código.

## Perfilado del Código

Para el perfilado se decidió utilizar cProfile. Esta vez, en vez de realizar pruebas dependiendo de la función a realizar, se prefierió una única prueba en donde se utilizara una vez cada una de las 4 opciones disponibles para el usuario: cProfile nos dará los resultados por separado de cada función. Igualmente, esta única prueba se realiza tanto con 11 como con 50 alergias.

Solo se agregán los primeros valores que proporcione el cProfiles, ya que, muchos de los siguientes procesos son marcados con 0 de tiempo total.

El commit con el código para el perfilado es el siguiente:

[Enlace al Commit](https://github.com/BraiderZ/ie0217/commit/e73b7156a8f674b372146376744fc63e42e4dc01)

### 11 alergias

![11 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/11%20Alergias_cProfile.png)

### 50 alergias

![50 alergias](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_CUATRO/50%20Alergias_cProfile.png)

En primera instancia, los tiempos totales de ambas evaluaciones tienen más del doble diferencia, viendose más marcado el hecho de que entre más alergias, el código tiene que realizar más procesos. Si obervsamos con detenimiento todo el tiempo se almacena también en el main, debido a que es quienn inicia y termina el programa.

En segunda instancia, para las 11 alergias, el tiempo más destacado es que toma opcionIngresar, o sea, momentos donde es el usuario quien tarde lo que quiera en ingresar opciones. Por otro lado, con 50 alergias vuelve a ser encontrarCombinación quien toma una gran parte del tiempo, siendo este el proceso que debe buscar la combinación correcta en caso de que el usuario ingrese su puntaje de alergia. Inclusive, para las 11 alergias este método no se encuentra en el top, dandonos una idea de lo mucho que le afecta a la ejecución valorar casos grandes.

Observando más a detalle esta recursividad de encontrar Combinacion y tomando en cuenta que cada vez que no encuentra una solución vuelve a llamarse, observamos como hay más de 6 millones de llamadas al método.


## Reflexión final

El código en su complejidad, posee buenos niveles de ejecución, tanto así que los sleeps sí son buena opción para mejorar la visualización. Sin embargo, la búsqueda de combinaciones debe mejorarse mucho para conseguir una velocidad óptima en caso de que le usuario necesite agregar un puntaje alto cuando hay muchas alergias en el sistema.

Una posible solución al problema puede estar relacionado a cómo las potencias de 2 se relacionan con los bits y la posibilidad del lenguaje de manipular bits. Mi falta de conocimiento sobre el tema de bits debido a cursos que me faltan por llevar, dificulta mi posibilidad de realizar dicha solución.

Esto nos deja claro como la programación puede estar tan relacionado a otro temas como lo es la ingeriería y las matemáticas. Un buen programador no solo conoce las bibliotecas y comando de un lenguaje, también conoce sobre múltiples temas que mejorar la velocidad y eficacia de su código.

# Blibiografía

1. Learn Pyton, Free Interactive Python Tutorial. [LearnPython](https://www.learnpython.org/).
2. yacklyon, CURSO de PYTHON 2020 🐍 métodos CLASE Y ESTÁTICOS. [Youtube](https://www.youtube.com/watch?v=wrSq0plMFOI).
3. atareao, Clases abstractas, interfaces y polimorfismo. Pyldoras Pythonicas. [Youtube](https://www.youtube.com/watch?v=l-HMdiw2SNM).

