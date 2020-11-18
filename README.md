# Función primitiva recursiva
### Práctica 03 - Complejidad computacional 
###### Sergio Guerra Arencibia - ULL
###### 18/11/2020
  
Este repositorio contiene la implementación la función potencia mediante funciones primitivas recursivas (FPR).

Definición  
```  
Las funciones primitivas recursivas (FPR) son un conjunto de funciones construidas
a partir de ciertas funciones y operaciones básicas que nos permite saber si cierta función es computable o no.   
Las funciones básicas son:
  - Nula o cero
  - Sucesora
  - Proyección

Las operaciones básicas son:
  - Combinación
  - Composición
  - Recursión primitva
```  

La implementación se ha realizado en el lenguaje C++.  
La orientación a objetos utilizada consta de 5 clases.  
En primera de ellas es una clase que implementa las funciones básicas (nula, sucesora y proyección).  
Después tenemos el grupo de funciones que implementa la potencia. La primera de ellas es la clase básica para una FPR. 
Esta es una clase abstracta que contiene las funciones que tendrán que ser definidas para una FPR básica (para nuestro caso
es suficiente con la recursión primitiva, otras FPR necesitarán otras operaciones no contempladas).  
De esta clase heredan las clases que implementan las FPR de suma, producto y, finalmente, potencia.

### Referencias  
[wikipedia](https://es.wikipedia.org/wiki/Recursi%C3%B3n_primitiva#:~:text=Una%20funci%C3%B3n%20recursiva%20primitiva%20es%20n%2Daria%20si%20toma%20como,define%20seg%C3%BAn%20las%20siguientes%20reglas%3A&text=La%20funci%C3%B3n%20sucesor%20S%2C%20de,de%20Peano%2C%20es%20primitiva%20recursiva.)  
