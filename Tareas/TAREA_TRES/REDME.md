# Tarea 3/IE-0217

### Estudiante: Luis Brenes Campos - C21324
### Profesor: Rafael Esteban Badilla Alvarado

# Instrucciones para ejecutar el programa 




# Parte Teórica: Templates-Excepciones-STL-Expresiones Regulares

## Templates

### 1. **Definición de Templates**
   **Explique el concepto de templates en C++ y proporcione un ejemplo simple.**

Los templates o plantillas en C++, son una herrammienta que permiten la programador crear tanto funciones como clases base a las que no se les define, en algunas de sus partes, un tipo de dato específico. En vez de definir un tipo de dato específico para una variable, atributo o invocable, se colocan parámetros de tipos, los cuales, cambiarán dependiendo del tipo de dato enviado por el usuario.

Su ventaja recae en que existen casos donde un mismo dato podría ser de diferentes tipos y no es recomendable cerrar la opción a solo uno. Esto mejora el programa al no tener que crear mismas variables o invocables iguales pero con diferente tipo de dato y al manejo de errores.

Un ejemplo sencillo son las sumas, ya que, pueden realizarse con diferentes tipos de datos que representen números (float, double, integer, ...). En vez de cerrarnos a un solo tipo de dato, el template nos permite crear una sola fución capaz de realizar sumas con cualquier dato mientras lo especifique el usuario.

### 2. **Sobrecarga de Plantillas**
   **¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?**

La sobrecarga en los templates funciona de la misma manera que en las funciones normales, cambiando el tipo de la función y el tipo de los parámetros. Sin embargo, ahora también la sobrecarga permite crear una cantidad diferente de parámetros de tipo a gusto del programador. Por ejemplo, puede crear una función template donde solo exista un parámetro de tipo llamado "T", mientras que, en la sobrecarga de la función, se crearon dos parámetros de tipo llamados "T1" y "T2".

Recordemos que, si tenemos una función template con diferentes maneras de actuar, dependiendo de los argumentos que reciba sabrá de manera automática cuál es la funcionalidad que debe elegir en cada caso. 

### 3. **Plantillas de Clases**
   **Explique cómo se pueden utilizar plantillas en la definición de clases en C++.**

La plantillas en la definición de las clases es pacticamente el mismo que en las funciones:
- Se coloca en comando template al incio.
- Dentro de los símbolos "<>" se debe colocar la definición de uno o varios parámetros de tipos.
- Colocar le parámetro de tipo en los métodos, atributos o parámetros a recibir que lo requieran.

Existe una leve diferencia con las clases normales a la hora de instanciar un objeto, ya que, debemos definir en ese momento el o los tipos de datos que tomarán el papel de los parámetros de tipo. Este proceso se realiza colocando "<>" después del nombre de la clase y definiendo dentro los tipos.

## Excepciones

### 4. **Manejo de Excepciones**
   **Describa los bloques try, catch y throw y cómo se utilizan para el manejo de excepciones en C++.**

`try`: este bloque es el principal a la hora del manejo de excepciones. El código dentro del bloque `try` será el que se tendrá en cuenta a la hora de valorar errores. 

`catch`: son los bloques que reciben los diferentes tipos de errores que puede poseer el programa. En ellos se debe definir un error específico y si el `try` detecta un error de ese tipo, invoca a ese bloque `catch`. Además, dentro del `catch` se agregar código para que sea el programador el encargado de saber cómo manejar ese tipo de error específico y que es ejecutado una vez se invoque. Normalmente imprimer un mensaje de error que informe al usuario cuál es el problema con la ejecución.

`throw`: su función principal es valorar otras excepciones extras que el programador cree que sean necesarias. Usualmente su uso se realiza por medio de condiciones. Cuando la condición se cumple, el bloque `throw` retorna un error elegido por el programador, el cuál invocará al `catch` que se relacione con `throw` para ser ejecutado.

### 5. **Excepciones Estándar**
   **Nombre al menos tres excepciones estándar proporcionadas por C++ y proporcione ejemplos de situaciones en las que podrían ser útiles.**

**Invalid_argument**: Suecede cuando se reciben argumentos no v
alidos Ejemplo: a la hora de recibir argumentos por parte del usuario, este puede enviar cualquier tipo de caracter. En caso de que nuestro objetivo sea un tipo específico de argumento, gracias a esta excepción podríamos avisarle al usuario qué tipo de dato tiene que proporcionar al programa.

**Bad_cast**: Sucede en los casos donde no se puede convertir un puntero que es del tipo de una clase base, se convierta al de una clase derivada. Ejemplo: Con dymaic_cast podemos relizar funciones que, dependiendo al tipo de clase derivada que estemos usando, funciones diferente. Con esta excepción, podríamos tomar en cuenta el caso donde no es válida la clase recibida por la función.

**Overflow_error**: Se encarga de verificar errores cuando una operación aritmética supera el límite del tipo de dato. Ejemplo: A la hora de crear un programa que simule una calculador, esta excepción puede ayudarnos para evitar sobre pasar el límite de unn dato. Cuando se detecte dicho error, se puede proceder tanto a avisar al usuario, como cambiar las variables a un tipoo de dato que sí soporte la operación.


### 6. **Política de Manejo de Excepciones**
   **¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software?**

Las políticas de manejo de excepciones son un conjuntos de pautas establecidas a la hora de crear código. Las políticas en el manejo varían dependiendo del lenguaje de programación y empresa en la que se este trabajando. Cada una de ellas posee objetivos diferentes, dependiendo del motivo por el que se quiera manejar las excepciones en partes específicas de código. [1]

Su importancia recae en la búsqueda de crear programas más robustos, rápidos y fiables para que el usuario se sienta seguro a la hora de usarlo y evitar futuros problemas en la ejecución.

### 7. **Noexcept**
   **Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.**

Noexcept tiene el prósito de inficar si una parte del código no generó ningún tipo de error por medio de un booleano. En general, posee dos principales usos en C++:

- Si creamos una función y le agregamos `noexcept`, se le esta avisando al programa y a los programados que en esa parte del código no suceden excepciones y en caso de haber una, termina el programa.

- Podemos colocar `noexcept (nombre de la parte del código a verificar)` para conocer si se hubieron excepciones. Gracias a ello, podremos tratar con el programa de maneras diferentes en caso de que existan excepciones que afecten a la funcionalidad del código.

## STL (Standard Template Library)

### 8. **Contenedores STL**
   **Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.**

`vector`: Eficaz a la hora de necesitar un conjunto de elementos agrupos que con el tiempo aumente debido a que sun flexibilidad para eliminar y agregar elementos.

`map`: De gran relevancia a la hora de necesitar una búsqueda rápida entre elementos. Además, el orden depende de las claves, por lo que, se podrían organizar agendas de números o cuentas bancarias sin importar el valor porpio de cada usuario.

`array`: En caso de necesitar un orden fijo propuesto por el usuario para una cantidad específica de valores, el `array`` es la mejor opción. Esta herramienta nos puede proporcionar ventajas a la hira de agrupar valores que serán utilizados a lo largo del código, tanto establecidos por el progamador, como por el usuario. Además, en casos de tamaño fijo, proporciona un mejor manejo de memoria que un vector.

`set`: Si se necesitan ordenar ciertos valores que, fueron agregados de manera aleatoria a lo largo de la ejecuación del código, `set` es la mejor opción. Por otro lado, `set` no permite valores que sean iguales, puede ayudarnos en caso de querer almacenar palabras únicas en orden.

`unoerdered_set`: Ya que su mayor diferencia con un `set` es la aleartoriedad de los valores en su valor cada vez que le código se ejecute, podría ayudarnos a la creación de código que necesite cambiar el orden de los casos de manera rápida. Su uso puede estar más relacionado a videojuegos o a la creación rápida de claves que no posean valores iguales y se basen en una cantidad específica establecida por el programador o el usuario.

### 9. **Iteradores en STL**
   **Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.**

Un iterador posee un uso parecido al de un puntero, ya que, se encarga de apuntar hacia un contenedor específico. La ventaja del uso de los iteradores recae a la hora de conocer no solo el principio, sino también el final del contenedor. Además, existen diferentes tipo de iterador que nos ayudarán a la hora de explorar un contenedor dependiendo de las necesidades del código: iterar desde el inicio o desde el final, imprimir los valores o modificar valores.

Para acceder a los elementos depende del tipo de iterador que se este utilizando. En general, se utiliza un `for` que va desde el incio del contenedor hasta el final o viceversa. Para iterar entre valores, lo más común es utilizar el `++` para vanzar al siguiente o  el `--` para el valor anteriores. A su vez, algunos itedores perimiten usar `+i` o `-i` donde i es la cantidad de valores que avanzaremos. Una vez unbicados en el valor correspondiente, utilizamos la lógica de punteros para acceder al valor.

### 10. **Algoritmos STL**
**Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.**

`sort`: Dado un rango, se encarga de ordenarlos de manera ascedente.
`find`: Según un rango, su funcionalidad se basa en encontrar un valor específico.
`reverse`: Modifica el orden de un rango, invirtiéndolo completamente.

### 11. **Algoritmos Personalizados**
**¿Cómo podría utilizar un algoritmo personalizado con la STL?**

Los algortimos STL ya posee una funcionalidad por defecto que puede ser modificada por el usuario. Para ello, se debe crear cualquier tipo de invocable (funciones, estructuras con funcionalidades, métodos de clases, ...) y después de especificar el rango como siempre, se agregar como nuevo parámetro el invocable.

## Expresiones Regulares

### 12. **Definición de Expresiones Regulares**
**Defina qué son las expresiones regulares y proporcione un ejemplo simple.**

Una expresión regular consiste en un conjunto de reglas a seguir, establecidas por el programador, a la hora de crear una cadena de texto.

Ejemplo: [0-9]\.$ -> Esta expresión signica que la cadena debe terminar con un número del 0 al 9, seguido por un punto (Luis9.).

### 13. **Caracteres Especiales**
**Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.**

`$`: Se usa para definir el elementos anteriores como los últimos de la cadena.
`\`: En caso de querer utilizar un carácter especial como un elemento, se coloca este carácter antes del otro.
`*`: El elemento anterios puede estar dentro de la cadena de 0 a infinita cantidad de veces.

### 14. **Uso de Expresiones Regulares en C++**
**¿Cómo se utilizan las expresiones regulares en C++? Proporcione un ejemplo.**

Se utizan por medio de la biblioteca `<regex>`. Simplemente se debe utilizar dicha palabra y entre paréntesis definir la cadena con la expresión regular a verificar. Una vez definida la expresión, se puede utilar la función `regex_serch` para verificar si una cadena cumple con el patrón.

Ejemplo: 

```cpp
auto const regex = std::regex patron("[A-Za-z0-9]+") //Se deben usar mínimo una letra mayúscula seguida de al menos una miúscula y terminar en al menos un número.

auto const texto = std::string("Juan87"); //Cadena a verificar
bool const verificarTexto = std::regex_search(texto,regex); //Usamos el comando para que verifique que en mi texto se cumpla el regex por medio de un booleano

std::cout << verificarTexto << std::endl //Imprimimos el booleano
```

### 15. **Validación de Patrones**
**¿Por qué las expresiones regulares son útiles para la validación de patrones en cadenas de texto?**

Algunas de las ventajas de utilizar expresiones regulares:

- Mejora la compresión de los patrones a validar.
- Evita el uso excesivo de `if` para definir la validación, ya que, la expresiones regulares se realiza en una sola línea.
- Los carácteres especiales facilitan la creación de los patrones a validar: no hay necesidad de definir de 0 las reglas.

# Blibiografía

1. IBM, Manejo de errores y excepciones. [IBM] (https://www.ibm.com/docs/es/integration-bus/10.0?topic=extension-errors-exception-handling).


