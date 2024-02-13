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

El archivo llamado `__init__.py`, es el encargado de indicarle a Python que quien lo posea es un paquete. Si existen subpaquetes dentro de un paquete, también debe poseer el `__init__.py`. Este achivo puede estar vacío, sin embargo, es común que se agregue dentro del funcionamiento inicial del paquete.

**3. ¿Cómo se importa un módulo o función desde un paquete en Python?**

La importación de un módulo y función desde un paquete es muy parecido a como se importa una función de un módulo. De igual manera, se utiliza `from` e `import` para los proceso.

Para importa un módulo se realiza de la siguiente manera:

- `import NombrePaquete.NombreMódulo` y se utiliza `NombrePaquete.NombreMódulo.Nombre_Función()` para invocar una función.
- `from NombrePaquete import NombreMódulo` si queremos que solo se importe el módulo.

Para importa una función:

- `from NombrePaquete.NombreMódulo import NombreFunción` y se utiliza su nombre para invocarlo.

**4. ¿Qué es la variable __all__ en el archivo __init__.py y cuál es su propósito?**

Existeb casos en donde se busca que el archivo `__inir__.py`, posea el funcionamiento inicial del paquete. También puede declarase un avairable especial llamada `__all__`. Esta variable se encarga de administrar cuáles módulos van a ser visibles para la persona que importe un paquete. [2]

Esta variable cunciona cuando se utiliza `from NombrePaquete import *`, lo que le da al usuario la opción de usar módulos y símbolos específicos del paquete. Lo que ayuda a regular el acceso de los usuario a un paquete.

**5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?**

Crear un programa con diseño modular, o sea, separado en módulos u organizar ciertas funciones en paquetes, resulta poseer grandes ventajas. Estas se ven aún más resaltadas en trabajos de múltiples personas o proyectos de grande extensión.

En primera instancia, organizar el código de esta manera ayuda a la organización del programa. Así como las funciones buscan separar funcionalidades en trabajos más pequeños, los módulos nos ayudan con el mismo pbjetivo pero a nivel más grande. Si se necesita realizar modificaciones al código, no es necesario tener la duda de que los cambios de una clase o función pueda ocasionar otros errores, ya que, estos en la mayoría de casos quedarían encpasulados en el módulo. Además, agrupar ciertas funcionalidades que poseen caracterísitcas parecidas en módulos específicos, mejora el control y entendimiento del código.

En segunda instancia, si nos referimos más aprofundidad sobre el trabajo en equipo, resulta ser una opción muy impoortante a tener en cuenta. Cada miembro del equipo puede trabajar en sus propios módulos segñun ciertas normas a seguir. Con ello, una vez terminadas las diferentes funcionalidades, se puede unir el programa sin la necesidad de todos trabajar en un mismo archivpo, lo cual, podría ocasionar problemas con el código de los compañeros de trabajo.

En última instancia, los paquetes y módulos también son buenas herramientas para la reutilización de código. Si una de las funcionalidades se  encuentra dentro de un módulo de un paquete bien organizado, puede llegar a ser usado en programas futuros y ahorrar tiempo. Esta es la lógica de las propias biblitecas a las que accedemos. En pocas palabras, un paquete fomenta un código de más de un uso.

## Python HTTP y Servicios Web (API):

**1. ¿Qué es una API y cuál es su función en el contexto de los servicios web?**

Son un conjunto de reglas que permiten la comunicación de diferentes aplicaciones de softwares. Esta comunicación es realizada por la web, lo cual, hace que cummpla una función fundamental en el contexto de los servicios web. 

Gracias a ello se evita que haya un contacto interno con las bases de datos o funcionamiento interno de otras aplicaciones. Se proporciona una intefaz para solicitar ciertas acciones como lo pueden ser recibir datos, expotar datos, actualizar datos, etc.


**2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP?**

Cada vez que se realiza una aplicación, las condiciones de la manera en la que fue creada son muy únicas. Esto dificulta a la hora de intercambiar datos entre apliaciones tan diversas. REST y SOAP surgieron como solución al problema. Ambas poseen similutedes como la posibilidad de crear API, basarse en el uso de reglas y usar HTTP. [3]

Sin embargo, es importante tener en cuenta las diferencias entre ambos mecanismos. Por un lado, SOAP es un mecanismo rídgio que establece algunos estándares a la hora de intercambiar datos. Estos se basan en una parte en mantener seguridad en el proceso. Además, se debe crear un sobre Soap que modifica en contenido del HTTP en una solicitud SOAP. Las respuestas siempre son dadas en documentos XML.

Por otro lado, Rest es un sistema más flexible que impone 6 reglas que se deben seguir para realizar una solicitud. Estas solicitudes se dan por medio de verbos HTTP como get. Aunque en general las respuestas suelen estar en JSON, pueden ser en otro formato.

En pocas palabras, SOAP es un mecanismo más rídigo que REST.

**3. Describa los pasos básicos para consumir una API utilizando Python.**

- Importar la biblitena `requests`: es importante a la hora de consumir un API, importa la biblioteca que nos permite realizar el procedimiento. Con ello, al igual que sucede con otras bibliotecas, se nos da la oportunidad de utilizar múltiples funcionalidades, en este caso, para manejar servicios web.

- Realizar la solicitud: por medio de los diferentes verbos, podemos realizar acciones. Por ejemplo, podemos usar `GET` si queremos obtener información de un sitio web o `POST` si queremos enviar algo.

- Manejo de datos: una vez obtenido los datos, los cuales, generalmente se encuentran en formato JSON, debemos darle su correspondiente manejo y proceso según la razón por la que los pedimos.

**4. ¿Qué es la autenticación de API y por qué es importante?**

Consiste en la seguridad que poseen la información de los servicios que se encuentran en la web. Generalmente, estos se realizar por medio del nombre de usuario y una contraseña establecida. Además, se debe verificar los permisos que posee cada usuario para realizar las diferentes solicitudes.

Este proceso es importante, ya que, la información en el internet que no sea segura, es de fácil acceso a cualquier personas. Datos personales, información de empresas y otras aspectos pueden caer en las manos equivocadas si no se procede con una autenticación. Aunado a ello, establecer ciertos márgenes de solicitud ayuda a que solo las personas especializadas, puedan modificar la información y que no realicen modificaciones por un mal manejo de los datos.

**5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?**

Cada verbo HTTP compone un papel fundamental a la hora de compartir información. Dependiendo del verbo utilizado, se indica la acción a realizar en la API. Los verbos mencionado son los más importantes a la hora de este proceso. Las funciones de cada uno son:

- GET: obtener datos.
- POST: enviar datos.
- PUT: actualizar datos.
- DELETE: eliminar datos.

De manera esta manera sencilla, se establece la acción a realizar a la hora de comunicar las aplicaciones. Cabe destacar que, el uso literal de verbos en inglés, también mejor la comprensión de lo que sucede en el proceso de solicutd y respuesta.

# Parte Práctica Análisis

Una vez realizada toda la sección lógica del programa, resulta fructuoso valorar los resultados. Para ello, analizaremos brevemente cada gráfica y rendimiento.

## Regresión Lineal y no Lineal 1

Para la primera regresión se hizo uso del año de cada vehículo y se calculó el precio promedio de los autos. Como se observará en las gráficas, los datos tienden a aumentar de precio conforme pasan los años. Esto tiene un sentido lógico, ya que entre más nuevo es un auto, más probabilidades de que posea una mayor duración. Además, va arraigado a las tendencias modernas de la sociedad que buscan lo último a la moda.

### Lineal

![Gráfica 1](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/Regresion%20Lineal%201.png)

### No Lineal

![Gráfica 2](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/Regresion%20No%20Lineal%201.png)

Si observamos ambas regresiones, notamos como aunque claramente existe  una diferencia entre la relación de los datos y la predicción, varían de manera no muy llamativa. Aquí, tiene más correlación una gráfica no lineal parabólica, debido a la forma de los datos. Además, vemos como el R^2 llega a tener un valor mucho mejor en el caso de la regresión no lineal.

Cabe destacar que, tanto es la regresión no lineal 1 como en la 2, observamos como ciertas zonas toman una apariencia no tan suave y se muestran más como líneas rectas. Esto no se debe a un problema a la hora de graficar, sino que, a la poca cantidad de datos que poseen las gráficas. Si intentaramos diminuir o aumentar alguna de las dos partes de datos usadas (testeo o entrenamiento) no nos daría gran ayuda y la cantidad elegida para cada una, resulta ser la más adecuada.

## Regresión Lineal y no Lineal 2

Para este segundo caso, nuevamente se utilizan los años de los vehículos, pero ahora tomando en cuenta otra caracterísitica: el kilometraje. Lo que se busca es concoer el promedio del kilometraje de cada auto dependiendon del año de fabricación. Como era de esperarse, es común que los autos más viejos posean mayor kilometraje.

Sin embargo, existe 2 aspectos llamativos. En primera instancia, aunque sí se cumple que los autos más viejos poseen mayor kilometraje, esto no es una norma tan común como sucede con los precios, habiendo años posteriores con mayor kilometraje. Este detalle puede ir de la mano con la cantidad de autos que hay por año y del aumento del uso de autos propios en la primera y medidios de la segunda década de los 2000.

En segunda instancia, hay un declive muy marcada a la hora de hablar de autos completamente nuevos. Estos poseen valores muy diferentes a los que podrían verse a la mitad de la gráfica.

### Lineal

![Gráfica 3](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/Regresion%20Lineal%202.png)

### No Lineal
![Gráfica 4](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/Regresion%20No%20Lineal%202.png)

A diferencia de la primer regresión, observamos aquí una mayor diferencia con respecto a las predicciones. La regresión lineal no solo tiene una gran discrepancia a plena vista con los datos, sino que, su R^2 es demasiado bajo para valorar que sea una buena decisión para estos datos. En contraposición, una regresión no lineal de grado 3, logra acoplarse de muy buena manera a los datos registrados.

Nuevamente, tenemos el proble de que al ser pocos datos, la regresión no lineal tiene secciones donde no es suave, pero que en caso futuro de trabajar con más datos, nos daría como resultado una mejor regresión.

## Redimiento de las Regresiones

Aquí podemos observar otros detalles sobre el rendimiento de las regresiones.

![Captura 1](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/Rendimiento.png)

## Clustering 1

El primer clustering de tipo K-Means se basa en analizar la relación entre los precios y el kilometraje. Nuevamente observamos una relación bastante acertada, ya que, los valores de los autos son más bajos si poseen un kilometraje mayor. Esto se debe a que un auto con mayor kilometraje posee más desgaste. Inclusive, se podría decir que, el kilometraje de un auto termina siendo más relevante que el año de creación, ya que, en la gráfica de precios con respecto al año, habían más discrepancias que las que se observan en esta.

### Método del codo

![Gráfica 5](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/M%C3%A9todo%20del%20Codo.png)

Para este primer cluseting se decidió utilizar el método del codo. La gráfica resultante nos dice que, las mejores opciones se encuentran entre 3 a 4 clusters. Finalmente se decidieron 4 debido a haber datos tan alejado, mejojaría la separación de los resultados.

### Resultado

![Gráfica 6](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/Clustering%201.png)

El cluster logra ser separado en 4 parte de manera muy limpia, teniendo como principal objetivo, separar los datos según el precios. En la vida real, esto nos ayudaría a encontrar los autos basandose en el precio y calidad.

## Clustering 2

El segundo clustering de tipo K-Means vuelve a relacionar el año y el precio, pero ahora sin tener en cuenta el promedio. Esto nos ayuda a ver desde otra prespectiva la relación de estas dos caracteríticas. Nueva,ente, observamos como sí tiene gran relavancia el año de creación del auto con sus precios.

### Método de la Silueta

Para diferenciar el rendimiento del primer cluster, se prefirió utilizar el otro método aprendido. En este caso, una cantidad de 3 cluster termina siendo significativamente más apropiado que utilizar 4 o más.

![Gráfica 7](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/M%C3%A9todo%20de%20la%20Silueta.png)

### Resultado

El cluster se ha encargado de no solo separar con respecto a los años, sino que, deja en claro esa relación que posee la vida util de un auto y su precio. Este otro tipo de búsqueda puede ser también muy importante en caso de querar buscar un auto de un año específico o un precio asequible.

![Gráfica 8](https://github.com/BraiderZ/ie0217/blob/main/Tareas/TAREA_SEIS/imagenes/Clustering%202.png)

 

# Blibiografía

1. Bi Solutions, ¿Qué son los datos estructurados y no estructurados?. [Youtube](https://www.youtube.com/watch?v=iSm1gmDiH6Q).

2. DelftStack, __all__ en Python. [DelftStack](https://www.delftstack.com/es/howto/python/_all_-variable-in-python/).

3. AWS, ¿Cuál es la diferencia entre SOAP y REST?. [AWS](https://aws.amazon.com/es/compare/the-difference-between-soap-rest/#:~:text=La%20API%20de%20REST%20expone%20los%20datos.&text=SOAP%20es%20independiente%20y%20puede,REST%20solo%20funciona%20con%20HTTPS.&text=SOAP%20solo%20admite%20el%20intercambio%20de%20datos%20XML).

