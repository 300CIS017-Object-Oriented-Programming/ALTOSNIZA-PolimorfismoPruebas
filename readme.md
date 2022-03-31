## Torres de Niza
>Este ejercicio utiliza conocimientos relacionados con herencia, sobreescritura, polimorfismo y calidad de código. 

_Agregue sus respuestas en la carpeta **respuestas/sucodigo.md**. En donde ponga **sucódigo** sea su codigo de estudiante. Haga un pull-request con estos cambios.


### Funcionalidades principales
El administrador del conjunto bosques de Niza desea contratar un software para la gestión de cobros y descuentos a propietarios de la unidad.

Existen dos tipos de propietarios. Propietarios fundadores y propietarios de reventa. Todo propietario tiene nombre, identificación y una única propiedad.

Cada propiedad tiene un número de piso, un número de identificación, un área. Algunas propiedades tienen tieneParqueadero y otras no.

Los propietarios fundadores son aquellos que compraron el apartamento directamente a la constructora.  Los propietarios de reventa son aquellos propietarios que compraron su propiedad a antiguos propietarios.  

Los propietarios fundadores tienen derecho a usar el salón social de manera gratuita.
Los propietarios fundadores tienen un descuento del 1% para la compra de productos en la tienda del edificio. Los propietarios de reventa tienen un descuento el 0,05 en la mensualidad del gimnasio.

Para cada propiedad el propietario debe pagar la administración teniendo en cuenta lo siguiente:

* Cobro por ascensor. Vale 2000 pesos que se multiplican por el piso en el que se encuentre el apartamento.
* El valor base. Cada apartamento paga 50 mil pesos. La tarifa podría cambiar cada año.
* Área. Hay un recargo del 5 por ciento sobre el valor base para los apartamentos de más de 150mts

La administración quiere:
*	1. Conocer el valor recaudado por administración para todo el edificio.
*	2. Imprimir para cada propietario los beneficios a los que tiene derecho. En particular el administrador quiere una cadena de texto que indique los beneficios.
*	3. Ver la lista de propietarios que tienen propiedades con tieneParqueadero.
*
    

****
### Requerimientos no funcionales
* Su programa debe ajustary extender el diseño definido por el arquitecto. A fin de acelerar el desarrollo el arquitecto provee el repositorio con los archivos ya definidos y algunas funcionalidades implementadas. [UML aquí](https://drive.google.com/file/d/1dP_-R5Owa2O__f98HQAE9P3An_p-F7Pz/view?usp=sharing)
* Mantenga el uso de excepciones a lo largo del programa.

****

### 👌 Preguntas a contestar
#### Escoga dos preguntas a contestar de esta categoría 
##### 1. INSPECCIÓN DEL DIAGRAMA UML
Según la implementación planteada, verifique el diagrama UML - revise cuales de las siguientes condiciones son correctas-> explique cada caso.

* En el diagrama las clases se encuentran correctamente nombradas
* En el diagrama las relaciones de asociación, si existen tienen la direccionalidad correcta
* En el diagrama las relaciones de agregación tiene el rombo en la clase que contienen la colección
* El diagrama tiene todas las relaciones que necesita y las relaciones son del tipo correcto
* En el diagrama la relación entre el main y la clase que invoca es de tipo "use". Punteada

##### 2. CLASES ABSTRACTAS
1. ¿Cuáles de las clases del programa son clases Abstractas? ¿Por qué sabe que son abstractas? ¿Qué implicaciones tiene?
2. ¿Existe alguna clase en el diseño actual que no sea abstracta pero debería serlo? ¿Cuál?¿Por qué?

##### 3. SOBRECARGA | SOBREESCRITURA
* Identifique y  explique al menos un uso que este haciendo este proyecto de la sobreescritura
* En este código tenemos  sobrecarga? ¿en dónde?  ¿Por qué?

##### 4. CONTENEDORAS
* La clase Admin tiene una funcionalidad para verificar si existe un propietario. Revise esa implementación.

##### 5. ENCAPSULAMIENTO
El método crearDummyData es privado: ¿por qué cree que este método es privado?¿Está de acuerdo con esa decisión de diseño? Justifique su respuesta

##### 6. REFERENCIAS
* En qué partes del código fuente se hace uso de las referencias de C++. Enumere dos y explique

##### 7. CALIDAD EN CÓDIGO Y DISEÑO
>¿Qué mejoras se podrían hacer en ese código en las siguientes dimensiones? ¿Por qué?
+ Estilo de codificación
+ Mejores prácticas:
  * Mensajes de seguimiento de lo que sucede en el código
  * Aprovechamiento de las clases contenedoras adecuadas según la necesidad.
  * Uso de memoria dinámica y liberación de memoria
  * Código duplicado
  * Código que no sea necesario

*****

#### Conteste todas las preguntas de esta categoría
##### 😎 EXTENSIÓN
> Explique los cambios: modificaciones/adiciones/eliminaciones que requiere el **UML** y el **código** fuente en cada una de estos casos: 

* La propiedad tiene una junta pero solo los propietarios fundadores pueden pertenecer a la junta de administración de la copropiedad y la participación en la junta es opcional.	La administración quiere:
    *  Ver la lista de propietarios fundadores que hacen parte de la junta 
    *  Agregar / retirar propietarios de la junta 
    *  Conocer en todo momento la información del presidente de la junta. 

* Se desea crear un nuevo propietario llamado PropietarioInversion. Este tipo de propietario  no tiene nigún beneficio ni para el uso del salón social ni en la mensualidad del gimnasio. Este propietario tampoco puede participar en la junta de empleados.  EL sistema debe poder operar con este nuevo propietario.

* En caso de que el nuevo tipo de propietario si pueda participar en la Junta, qué cambios deberían hacerse en el programa.  EL sistema debe poder operar con este nuevo propietario.



