## Respuestas

### Mejoras
¿Qué mejoras se podrían hacer en ese código en las siguientes dimensiones? ¿Por qué?
+ Estilo de codificación
  En el método de dummy las variables X... no cumplen con el estilo de nombramiento
  El método calcPagoAdmin no cumple con el estandar
  Es confuso x el nombre la diferencia entre el metodo mostrarPagoAdmin y recaudarAdmin.
  Se podría cambiar el nombre de mostrarPagoAdmin por verPagoAdminxPropietario

+ Mejores prácticas:
  Mensajes de seguimiento de lo que sucede en el código
    + Aprovechamiento de las clases contenedoras adecuadas según la necesidad.
      Rta ..> El buscar no esta usando uso del metodo find que tienen los mapas
      Código que no se esté utilizando y se podría evitar

    + Uso de memoria dinámica y liberación de memoria
      Rta ..> Falta programar la liberación de memoria en el destructor de la clase Propietario para liberar la memoria de la propiedad

    + CÓdigo duplicado en los métodos que muestran propiedades con y sin parqueadero. Este método se podría mejorar por ejemeplo recibiendo un parámetro que indique qué se quiere buscar
