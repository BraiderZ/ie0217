# Tarea 5/IE-0217

### Estudiante: Luis Brenes Campos - C21324
### Profesor: Rafael Esteban Badilla Alvarado

# Instrucciones para ejecutar el programa

## Requisitos previos

## Compilación

## Diferentes opciones del menú

# Parte Teórica

## Iteradores

### 1. ¿Qué es un iterador en Python y cuál es su propósito?

Un iterador es un método que tiene como proposito iterar entre cada uno de los valores de un conjunto como lo son las tuplas, listas, sets, etc. Esto significa que avanza por cada valor del conjunto revisandolo y con ello poderlo utilizar según sea necesario.

Para crear un iterador necesitamos crear una variables de la siguiente manera: nombre_iterador = iter(conjunto). Una vez hecho eso, iremos avanzando entre los valores usando: next(nombre_iterador).

Cabe destacar que, los iteradores pueden ser personalizadas en caso de que queramos iterar un objeto. Para ello, definimos los método mágicos `__iter__()` y `__next__()`.

El objetivo principal de un iterador es poder acceder a los diferentes valores del conjunto u objeto de manera secuencial para utilizarlo en diferentes casos de manera sencilla.

### 2. Explica la diferencia entre un iterable y un iterador.

La diferencia race en su papel a la hora de iterar valores. Por un lado, los iterables son las variables, objetos o atributos que tienen la característica de poder ser iterados y acceder así a cada uno de sus valores para utilizarlos en diferentes contextos. Por otro lado, el iterador es el encargado de acceder a los valores de un iterable. En otras palabras, el iterable es el conjunto de valores a los que iremos accediendo y el iterador quien los obtiene.

## Excepciones

### 1. Define qué es una excepción en Python.

Con forme el programa se vuelve más denso y sus tareas poseen procesos que podrían generar errores, se debe tener cuidado con que dichos errores no causen daños a la hora de ejecutar el código. Para evitar estos problemas la solución que se encontró son las excepciones. 

Se podría decir que una excepción en Python es una regla que debe cumplir un bloque de código con respecto a ciertos problemass que podría generar. En caso de que esto ocurra, la excepción se encargará de tomar el error y evitar que genere un problema mayor en la ejecución.

Las excepciones son indipensables en códigos robustos y aún más cuando van orientados a un público. Existen ocasiones en las que el código en manos de un usuario que no conoce su funcionamiento termine generando errores. Un buen código con excepciones evitaría estos casos.

### 2. ¿Cuál es el propósito de la cláusula try...except en el manejo de excepciones?

Las cláusulas compuesytas por try y except son las encargadas del control de excepciones.

`try` se encarga de indicar el bloque de código en el que se tendrá un manejo de excepciones. Todo lo que este dentro de dicha cláusula, estará en vigilancia de errores. El alcance del `try` es amplio, por lo que, si se invocan métodos o funcciones dentro del bloque, también se manejarán sos excepciones.

`except` tiene como objetivo definir el conjunto de reglas a seguir dependiendo del error que suceda. Cada `except` viene idenficado con su tipo de error en la mayoría de casos. Si sucede el error correspodiente a una de las reglas estipuladas, se ejecutará el bloque de código de la excepción. Es común que sean impresiones avisando del problema ocurrido o genere flags que evitan que el código ejecute acciones capaces de generar problemas más severos.

### 3. Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones.

Como se mencionó anteriormente, `except` se encargará de ejcutarse cuando se encuentre un tipo de error específico dentro del bloque `try`. La gran diferencia recae en que `finally` no busca manejar excepciones, sino que, compone una regla extra al final de bloque `try`.

Cuando sucede una excepción, no importa el resto del código dentro del bloque y se procede a ejecutar la excepción correspondiente. Esto significa que, el resto de excepciones creada también serán ignoradas. Sin embargo, `finally` falle o no el código, siempre se ejecutará una vez termine el bloque sin problemas o una vez termine la excepción.

En pocas palabras `except` es una regla que se ejecuta cuando sucede un error específico, mientras que, `finally` es una regla que siempre se ejecuta al final sin importa lo sucedido en el camino de la ejecución.

## Generadores

### 1. ¿Qué es un generador en Python y cuál es su ventaja sobre las listas tradicionales?


### 2. Explica cómo se puede crear un generador usando la función yield.


### 3. ¿Cuándo es más apropiado usar generadores en lugar de listas?


## Pandas

### 1. ¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas?



### 2. Explica cómo manejar valores nulos o faltantes en un DataFrame.


### 3. ¿Cuál es la diferencia entre loc y iloc en Pandas?



# Blibiografía

1. Learn Pyton, Free Interactive Python Tutorial. [LearnPython](https://www.learnpython.org/).
2. yacklyon, CURSO de PYTHON 2020 🐍 métodos CLASE Y ESTÁTICOS. [Youtube](https://www.youtube.com/watch?v=wrSq0plMFOI).
3. atareao, Clases abstractas, interfaces y polimorfismo. Pyldoras Pythonicas. [Youtube](https://www.youtube.com/watch?v=l-HMdiw2SNM).

