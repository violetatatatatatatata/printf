# Proyecto `printf`

## Descripción

Este proyecto es una implementación personalizada de la función `printf` en el lenguaje de programación C.

## Características

- **Manejo de especificadores de formato comunes**:
  - `%c`: Imprime un solo carácter.
  - `%s`: Imprime una cadena de caracteres.
  - `%d` / `%i`: Imprime un número entero con signo.
  - `%u`: Imprime un número entero sin signo.
  - `%x` / `%X`: Imprime un número en formato hexadecimal (minúsculas/mayúsculas).
  - `%p`: Imprime la dirección de memoria de un puntero.
  - `%%`: Imprime un signo de porcentaje literal.

- **Uso de funciones auxiliares para modularización.**
- **Gestor de argumentos con `stdarg.h` para manejo de parámetros variables.**
- **Optimizado para cumplir los requerimientos del proyecto de 42 School.**

## Instalación y Uso

### Clonar el Repositorio
```sh
git clone https://github.com/violetatatatatatatata/printf.git
cd printf
```

### Compilación
```sh
make
```

### Uso en un Programa en C
```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hola, %s!\n", "mundo");
    return 0;
}
```
