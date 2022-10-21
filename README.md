# PC2: Práctica Calificada 2
**course:** Programación II  
**unit:** 3, 4 y 5  
**cmake project:** prog2_pc2_lab106_v2022_2

## Indicaciones Específicas
- El tiempo límite para la evaluación es 100 minutos.
- Cada pregunta deberá ser respondida en un archivo fuente (`.cpp`) y un archivo cabecera (`.h`) con el número de la pregunta:
  - `p1.cpp, p1.h`
  - `p2.cpp, p2.h`
  - `p3.cpp, p3.h`
- Deberás subir estos archivos directamente a [www.gradescope.com](https://www.gradescope.com) o se puede crear un `.zip` que contenga todos ellos y subirlo.

## Competencias
- Para los alumnos de la carrera de Ciencia de la Computación
  - Aplica conocimientos de computación apropiados para la solución de problemas definidos y sus requerimientos en la disciplina del programa.(nivel 2)
  - Diseña, implementa y evalúa soluciones a problemas complejos de computación.(nivel 2)
  - Crea, selecciona, adapta y aplica técnicas, recursos y herramientas modernas para la práctica de la computación y comprende sus limitaciones.(nivel 2)

- Para los alumnos de las carreras de Ingeniería
  - Capacidad para aplicar conocimientos de matemática.(nivel 2)
  - Capacidad para diseñar un sistema, un componente o un proceso para satisfacer las necesidades deseadas dentro de restricciones realistas(nivel 2)

### Pregunta #1 - Producto de matrices (7 points)

Escribir un programa que utilizando matrices dinámicas, lea desde el teclado dos (2) matrices de números enteros de tamaño `n x n`, y que genere una nueva matriz que sea el calculo del producto de las 2 matrices.

**Ejemplo #1**
#### Input Format
```cpp
  3       // Valor n
  2 2 2   // Inicio de primera matriz 
  3 3 3
  4 4 4
  1 2 3   // Inicio de segunda matriz
  1 2 3
  1 2 3
```

#### Constraints
```cpp
No se requiere textos al ingresar valores (std::cout)
```

#### Output Format
```cpp
   6   12   18
   9   18   27
  12   24   36
```

**Ejemplo #2**
#### Input Format
```cpp
  6           // Valor de n
  1 4 5 6 4 3 // Inicio de primera matriz
  4 3 3 4 8 1
  6 3 8 5 9 3
  5 9 3 6 1 7
  4 8 3 6 2 1
  9 5 6 3 1 0
  5 6 4 5 1 5 // Inicio de segunda matriz
  1 7 2 8 4 5
  4 3 5 2 9 1
  7 4 6 5 5 8
  5 1 8 2 6 3
  8 3 6 4 6 5
```
#### Output Format
```cpp
  115   86  123   97  134  105
  111   81  131   90  117   99
  169  119  190  125  187  135
  149  148  139  163  146  159
  100  118  105  128  111  122
  100  120  102  114  104  103
```

### Pregunta #2 - Multiplicación de los menores (6 points)

Escribir un programa que utilizando vectores, lea desde el teclado un vector de números enteros grandes de tamaño `N`, y reemplazar cada valor del vector con el producto de aquellos valores que sean menores al valor a reemplazar, si el valor es el menor de todos (mínimo) no reemplazarlo.

**Ejemplo #1**
#### Input Format
```cpp
6
1 5 3 2 4 4
```

#### Constraints
```cpp
No se requiere textos al ingresar valores (std::cout)
```

#### Output Format
```cpp
1 96 2 1 6 6
```

**Ejemplo #2**
#### Input Format
```cpp
20
2 3 1 2 3 4 1 2 5 6 7 1 9 5 1 6 4 5 8 7
```
#### Output Format
```cpp
1 8 1 1 8 72 1 1 1152 144000 5184000 1 2032128000 1152 1 144000 72 1152 254016000 5184000
```

### Pregunta #3 - Factorización de polinomio (7 points)

Un monomio es una expresión que sigue la siguiente forma: `ax^b` donde: `a` es el coeficiente y `b` el grado.  
Definir una clase que represente un monomio `class monomio_t` y escribir un programa que permita generar un vector de monomios de tamaño `n` que lea el coeficiente y el grado de cada uno de los `n` monomio desde el teclado.
El programa deberá generar un nuevo vector que almacene la factorización de los monomios de modo que solo se almacene un monomio por grado. El resultado debera ser mostrado de modo que los monomios se muestren ordenados de menor grado a mayor grado.

**Ejemplo #1**
#### Input Format
```cpp
5
2 3
1 2
4 3
7 2
4 5
```

#### Constraints
```cpp
No se requiere textos al ingresar valores (std::cout)
```

#### Output Format
```cpp
  8x^2 6x^3 4x^5
```

**Explicación**: Utilizando el vector original de monomios se genera un nuevo vector que
para este ejemplo finalmente tendrá 3 monomios esto debido a que solo existen 3 exponentes `(2, 3, 5)` y cuyos coeficientes serian `(6=2+4, 8=1+7, 5)` los cuales se muestran como un polinomio
donde los monomios se muestran ordenados por el grado `(2, 3, 5)`.  
**Ejemplo #2**
#### Input Format
```cpp
6
10 5
1 1
2 2
3 4
2 1
8 5
```
#### Output Format
```cpp
3x^1 2x^2 3x^4 18x^5
```
