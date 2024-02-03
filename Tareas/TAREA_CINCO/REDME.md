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

Un generador en Python es una función que genera un iterador que produce una secuencia de valores, valor a valor, cada vez que este sea utilizado.
Sus ventajas sobre listas dependen el objetivo de nuestro código. En general, las 3 ventajas más importantes son:

- Ahorro de memoria ya que no estaremos guardando todos los valores a la vez. 
- Además, con los generadores podemos crear secuencias infinitas a diferencia de las listas que se limitan al tamaño estipulado.
- Finalmente, los generadores son "pipeables" lo que significa que pueden utilizarse un generador dentro de un generador o enviarlo a una función.

### 2. Explica cómo se puede crear un generador usando la función yield.

El generador es una función, por lo cual, la primera parte de su creación lleva la misma lógica que una función. Su diferencia recae en utilizar `yield` en el momento que queramos retornar un valor. No importa que exista después de dicha palabra en el código, este se pausará en esa indicación y una vez que se vuelva a invocar el generador, iniciará su ejecución desde el `yield` hasta volver a encontrar nuevamente una declaración de este tipo. Si en el resto del bloque del generador no existe una declaración `yield`, volverá a ejecutar la función desde el inicio hasta volver a la primera declaración que exista.

### 3. ¿Cuándo es más apropiado usar generadores en lugar de listas?

Como se mencionó en las ventajas del uso de generadores sobre las listas, depende de la situación cuando resulta más apropiado su uso. En primera instancia, un generador en más apropiado si buscamos ahorrar memoria, ya que, solo almacena un valor de la secuencia a la vez. Por lo cual, si sabemos que los valores únicos de la secuencia no tendrá inmportancia más adelante del código, es mejor utilizar un generador. Una lista estaría reservando espacio con muchos valores que tal vez solo lleguen a tener un uso.

En segunda isntancia, existen casos en donde no queremos limitar la secuencia que se esté utilizando que queramos que los valores aumenten sin problemas. También en estos casos es mejor crear un generador que una lista. Por ejemplo, si queremos generar las potencias del número 2 en donde cada vez se mostrará el siguiente valor, es más sencillo crear un generador que ejecute una lógica del tipo 2^n que crear una lista del tipo [1, 2, 4, 8, 16, 32, 64, ...] ya que con la segunda nunca terminaríamos.

En tercera instancia, si queremos que nuestra secuencia sea de uso sencillo cuando queremos que sufra diferentes cambios en un solo momento, el pipeline del generador termina siendo más efectivo que tener que pasar como parámetro una lista o iterar valor por valor e invocar función por función en vez de todas a la vez.

## Pandas

### 1. ¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas?

Podríamos decir que la diferencia recae en el tamaño de cada una. Por un lado, una serie esta compuesta por una columna con los índices de cada valor y una columna con valores. Por otro lado, un DataFrame puede tener más de una columnas de valores. Estos significa que un DataFrame puede almacenar más características y dividir en más grupos un conjuto de datos. En otras palabras, la Serie es unidimensional y el DataFrame bidimensional.

También, su diferencia puede ser vista como que un DataFrame esta compuestas por un conjunto x de series. O sea, un DataFrame puede ser visto como un conjunto de series y una serie con una característica de un DataFrame.

### 2. Explica cómo manejar valores nulos o faltantes en un DataFrame.

Para manejar valores nulos en un DataFrame, existe diferentes métodos dentro de pandas que nos ayudarán a ello. [1]

*.isnull()*

Sirve para cono ser los valores nulos de un DataFrame. Con este método se nos devolverá booleanos que nos indican True cuando existe un valor nulo. Colocando el nombre de la columna dentro del método, solo nos dará los booleanos de esa columna. También, podríamos utilizar `.sum()` después del método para saber la cantidad de valores nulos que se encuentren en el DataFrame.

*.dropna()*

Su función es quitar del DataFrame todas las filas que posean valores nulos. En realidad, no elimina los valores dentro del DataFrame, sino que crea uno nuevo con los eliminando dichas filas con algíun valor nulo.

Si queremos especificar de cuáes columnas queremos relizar la eliminación de valores nulos, colocamos la palabra subset=[nombre_columna]. Por otro lado, si queremos que los cambios se mantengan en el DataFrame original, colocamos inplace=True dentro del método.

*.fillna()*

En caso de que no queremos eliminar filas con valores nulos, también podemos agregar un valor específico a los valores nulos usando este método. Simplemente se coloca el valor que poseerán los valores nulos dentro del método. También podemos utilizar las mismas indicaciones en caso de que queramos que sea el DatFrame original el que sufra estos cambios.


### 3. ¿Cuál es la diferencia entre loc y iloc en Pandas?

Tanto loc como iloc buscan seleccionar datos, su diferencia recae en qué manera seleccionan los datos. PoR un lado, loc seleccionará los datos especificando condiciones con los nombres de las columnas. Por ejemplo ['Edad'] > 35, lo que significa que se tomarán las filas que tenga un valor mayor a 35 en la columna de Edad.

Por otro lado, iloc realiza el mismo proceso pero basado en los índices. Cada fila del DataFrame posee un índice que la identifica al igual que las columnas. Por ejemplo, [9:25, 2:5] tomaría las filas de la 9 a la 24 y de la columna 2 a la 4.

Depende de cuál sea nuestro objetivo con los valores que queremos tomar de los datos, elgir entre loc e iloc.

# Blibiografía

1. Dr. Xabi, Manejo de Valores Faltantes (Missing Values) en Pandas (Google Colab). [Youtube](https://www.youtube.com/watch?v=U4F27P_9l78).

