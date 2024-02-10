# Tarea 6/IE-0217

### Estudiante: Luis Brenes Campos - C21324
### Profesor: Rafael Esteban Badilla Alvarado

# Instrucciones para ejecutar el programa


## Requisitos previos


## Compilación

## Diferentes opciones del menú

### Salir


# Parte Teórica

## Regresión:

**1. ¿Qué es la regresión lineal y cómo se diferencia de la regresión no lineal?**

Es importante destacar que primero que, una regesrión es una técnica que buscar modelar una función a partir de la relación que posee ciertos valores dependientes con su variable dependiente. Esto quiere decir que, se encargada de darle un sentido matemático al comportamiento de ciertos datos para un mejor control y conocer más sobre los datos. Con ello se pueden poner en evidencia el funcionamiento de ciertas fórmulas y la predicción de datos.

El principal tipo de regresión es la lineal, consiste en intentar represental los datos basados en la función de la recta. En este tipo de regresión se puede poseer una o varias variables independientes en su relación con una variable dependiente. Cada una de estas variables dependiente, se encuentra multiplicada por un beta.

Existen casos donde una función recta no es la mejor opción para representar la relación de los datos. Para ello, se utiliza la regresión no linieal. Este posee diferencias con recpecto a la regresión lineal. Por un lado, la función de la que se basa suele ser una polinómica, exponencial, logarítmica, entre otras. Por otro lado, esto significa que, en vez de poseer una variable dependiente que no posee elevaciones, esta posee una variable independiente elevada a diferentes potencias.

En otras palabras, la regresión lineal y la no lineal, se diferencian por la función en la que se basan y el trato que se les da a las variables independientes.

**2. ¿Qué son los coeficientes de regresión y qué información proporcionan sobre la relación entre las variables?**

Como se mencinó anteriormente, cada variable regresión (sea lineal o no lineal) posee una beta que multiplica a las variables independientes. Este es conocido como coeficiente de regresión y pueden obtenerse usando `.coef__[ubicacion][vairibale]`. La información que nos proporcionan es muy importante, ya que, con ellos podemos conocer la "velocidad" y dirección con la que las variables cambian y se relacionan con sus variables dependientes.

Por ejemplo, en el caso de una regresión lineal, un coeficiente nos indica el grado de inclinación con el que la variable dependiente crece o decrece según la variable independiente.

**3. ¿Qué es el error cuadrático medio (MSE) y cómo se utiliza para evaluar la precisión de un modelo de regresión?**

Existen diferentes métodos de evaluar que una regresión lineal sea precisa. MSE es una métrica que calcula el promedio de los errores cuadrados entre las predicciones y los valores reales. La fórmula  que utiliza ayuda a que se tenga mayor peso en discrepancias de errores grandes.

Para utilizar este método, se necesitan dos conjuntos de datos: datos de entrenamiento y datos de testeo. Cada uno de ellos posee un papel importante en el cálculo de MSE. Para crear los dos conjuntos (bbasandonos en los previos), se deben generar cierta cantidad de datos y dividirlo en un 80% en datos de entrenamiento y un 20% en datos de testeo. La cantidad pude variar al gusto de programador, pero es recomendable que siempre sean más los datos de entrenamiento.

Asi pues, los datos de entrenamiento son utilizados para crear la regresión lineal. Con esto obtenemos, según las características de la regresión, la mejor manera de representar la información y de predecir cómo podrían ser los futuros datos. Una vez existe la regresión, utilizamos los datos de testeo para compararlos según la regresión creada por medio de MSE. Un valor bajo dado por el MSE, indica que se acerca a los datos reales, mientras que, un valor alto nos informa que la regresión no es lo suficientemente precisa.

**4. ¿Cuál es la diferencia entre regresión simple y regresión múltiple y cuándo se utiliza cada una?**

Como se mencionó anteriomente, las regresiones lineal pueden poseer una o más variables. Mientras que una regresión simple solo relaciona una variable independiente con una vairable dependiente, la regresión múltiple relaciona una variable dependiente con más de una variable independiente.

El uso de cada una depende de las circunstancias. En general, la regresión simple se utiliza cuando sabemos que una variable independiente es el único dato que irá variando y que solo de él pueden llegar a depender los datos analizados. Sin embargo, cuando sabemos que existen múltiples datos a tener en cuenta para calcular cierta información o nos percatamos que usar una sola variable no logra demostrarnos un comportamiento lógico, necesitamos usar una gresión múltiple.

Por ejemplo, ver la relación entre la cantidad de helados de un tipo vendidos y la cantidad de dinero ganada con ellos, puede usarse una regresión simple ya que solo depende de la cantidad de helados vendidos el dinero a ganar.

Por otro lado, se mejor utilizar una regresión múltiple cuando se buscar encontrar la relación de la cantidad de dinero ganada según habitaciones alquiladas. Esto debido a que las habitaciones poseen tanto largo como ancho, por lo que, necesitamos tomar una variable independiente para el ancho y otra para el largo. De no hacerlo así, podríamos obtener cantidades donde observamos que una habitación de 10 metros de largo fue alquilada a 100000 (su  ancho era de 100 metros) y otro del mismo tamaño vendido a 10000 (su ancho era de 10 metros).

## Clustering:

**1. ¿Qué es el clustering y cuál es su objetivo principal en el análisis de datos?**

El clustering es una técnica de aprendizaje no supervisado (no tiene acción directa del programador) utilizada para la agrupación de datos según ciertas características que posean en común como lo pueden ser: color, tamaño, forma,... Esta técnica necesita de un conjunto de datos inicial al cual realizarle las agrupaciones, las cuales, varían dependiendo del tipo de clustering elegido.

Su objetivo principal es el manejo adecuado de la información y el poder conocer más a fondo el comportamiento de ciertos conjuntos de datos. Por ejemplo, esta técnica puede ser utilizada por los encargados del marketing de una empresa. Una empresa encargada de la venta de proteína en polvo, teniendo en su poder un cierto conjunto de datos sobre búsqueda de personas, podría conocer quienes han buscado más sobre el deporte por medio de un clustering y de esa manera de invertir su dinero de marketing en personas que son más porpensas a comprar esos productos.

**2. Describa brevemente los algoritmos K-Means y DBSCAN y cómo funcionan.**

K-Means es una técnica que busca separar un conjunto de datos en subconjuntos llamados centroides. La cantidad de centroides esta establecida por la letra K, la cual, es elegida por el usuario. Una vez se sepan la cantidad de centroides, estos son colocados de manera aleatoria en el conjunto de datos. Cada dato se hará parte de un subconjunto según el centroide más cercano. Seguidamente, el centroide procede a colocarse en el promedio de los datos de su subconjunto y si algún dato ahora se encuentra más cerca de otro centroide, pasa a formar parte del otro subconjunto. Este proceso se repite hasta encontrar la mejor agrupación.

Con relación a DBSCAN, este se basa en la densidad para calcular sus clusters, eso significa que es capaz de diferenciar formas y tamaños. a diferencia de K-Means, no se establece una cantidad de subconjuntos, sino dos variables las cuales son:

- Épsilon (eps): establece el tamaño de un vecindario, osea, la densidad que deben seguir los puntos para establecer un cluster. Si se establece un eps muy alto, es posible que se fusionen clusters.
- Mínimo de puntos (min_samples): se encarga de establecer el mínimo de puntos que deben de poseer los vecindarios. Un valor alto dsiminuye la cantidad de clusters.

Estos dos datos bastan para el programa separe en la cantidad de clusters correcta la información.

**3. ¿Qué es la inercia en el contexto del clustering y cómo se utiliza para evaluar la calidad de un agrupamiento?**

Es un parámetro a tener en cuenta en unos de los métodos para calcular la cantidad de subgrupos que tendrá el clustering K-Means llamado: método del codo. Esto se realiza por medio de una fórmula con la cuál se pueden calcular la inercia de cada cluster dependiendo de la cantidad de subgrupos. Una vez calculados los valores, se grafican. Es recomendable que se elija un valor cerca del 'codo' de la gráfica.

Este valor se basa en que si la inercia es muy alta los clusters no son los suficientes debido a que los valores dentro de un mismo subgrupo pueden estar muy separado, mientras que, una inercia baja agrupa un conjunto de valores muy pequeño como para tener un uso.

**4. ¿Qué son los centroides y cómo se utilizan en el algoritmo K-Means?**

Como se mencionó anteriormente, un centroide es el pilar encargado de representar y agrupar en subgrupos un conjunto de datos. Cada subconjunto posee su propio centroide. Este no puede ser utilizado directamente por el usuario, ya que, la lógica del clustering se encarga de usarlos de manera automática cada subgrupo, simplemente se deben establecer la cantidad de centroides que poseerá el método de clustering elegido.

De manera automática, el centroide se colocará aleatoriamente dentro del conjunto de datos y obtendrá en su subconjunto los valores que se encuentren más cerca de ese centroide que de los otros. Después, el centroide procede a acommodarse en el centro (promedio) de los valores y agrupa o desagrupo valores dependiendo si la cercanía lo acercó o alejó más del centroide. El proceso lo realiza hasta conseguir la agrupaciónn más indónea.

**5. Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos.**

Por un lado, los datos estructurados son cualquier conjunto de información que posea una forma definida, comunmente, separada en filas y columnas para conocer sus diferentes características. Este conjunto de datos ha sido utilizado por muchos años y es el principal conjunto de datos que utilizados cuando realizamos gráficas, creamos un DataFrame, diccionario, etc. Su estrcutura definida nos ayuda a comprender y manejar los datos de manera más rápida.

Por otro lado, las estrcuturas de datos no estrcuturas son todas aquellas que no poseen una forma fija. Entre datos no estrcuturados podemos encotrar mensajes. Su uso empezó a hacerse importante con la creación de las redes sociales y la cantidad de información que era envidada por mensajes privados, comentarios, entre muchos otros. Su manejo y control empezó a ser más común aproximadamente en el año 2005. [1]

En otras palabras, los datos estructurados poseen un orden establecido que mejora el entendimiento y manejo de la información, mientras que, los datos no estrucuturados son aquellos que se basan en conjuntos con formas variables como loes mensajes de texto de las redes sociales.

## Paquetes en Python (init.py):

**1. ¿Qué es un paquete en Python y cómo se diferencia de un módulo?**

Un paquete en Python es un conjunto de módulos organizados en diferentes directorios. Su deferencia con los módulos recae en que un módulo posee funciones u objetos que pueden ser importados a un archivo para ser usados, mientras que, el paquete es quien se encarga de administrar conjuntos de módulos que posiblemente componen en su totalidad una gran funcionalidad, de la cual, podremos obtener las que nos sean convenientes.

**2. ¿Cuál es la función del archivo __init__.py dentro de un paquete de Python?**

El archivo llamado `__init__.py`, es el encargado de indicarle a Python que quien lo posea es un paquete. Este achivo puede estar vacío, sin embargo, es común que se agregue dentro del funcionamiento inicial del paquete.

**3. ¿Cómo se importa un módulo o función desde un paquete en Python?**

**4. ¿Qué es la variable __all__ en el archivo __init__.py y cuál es su propósito?**

**5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?**

## Python HTTP y Servicios Web (API):

**1. ¿Qué es una API y cuál es su función en el contexto de los servicios web?**

**2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP?**

**3. Describa los pasos básicos para consumir una API utilizando Python.**

**4. ¿Qué es la autenticación de API y por qué es importante?**

**5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?**

# Blibiografía

1. Nombre de la persona u organizacion, Titulo. [Nombre de la pagina](url).

