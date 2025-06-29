# Compilador de Ada a Python

Este repositorio contiene un transpilador que convierte código fuente del lenguaje Ada a código Python equivalente, utilizando herramientas de compilación como GNU Flex y Bison.

## Autores
- Mildward Erik Condori Nina
- Jhon Elias Aguilar Anccori

## Características principales

- Traduce un subconjunto del lenguaje Ada a Python 3
- Soporta estructuras básicas como:
  - Declaraciones de variables (`Integer`, `Boolean`, `String`, `Float`)
  - Sentencias condicionales (`if-then-else`, `elsif`)
  - Bucles (`for`, `while`)
  - Procedimientos y funciones simples
  - Operadores aritméticos (`+`, `-`, `*`, `/`, `mod`) y lógicos (`and`, `or`, `not`)
  - Entrada/salida básica (`Put_Line`, `Put`, `Get_Line`)

## Requisitos previos

- [GNU Flex](https://github.com/westes/flex) (≥ 2.6)
- [GNU Bison](https://www.gnu.org/software/bison/) (≥ 3.7)
- [GCC](https://gcc.gnu.org/) (MinGW en Windows)
- [Make](https://www.gnu.org/software/make/)

## Estructura del proyecto
* ada.l # Especificación del analizador léxico (Flex)
* ada.y # Gramática del analizador sintáctico (Bison)
* ejemplo.ada # Ejemplo de código Ada (Fermat)
* Makefile # Script de compilación
* README.md # Este archivo
* salida.py # Salida generada (Python)\

## 
## Instalación y uso

1. Clonar el repositorio:
   git clone https://github.com/tu-usuario/compilador-ada-python.git
  cd compilador-ada-python

2. Compilar el transpilador:
  make

3. Ejecutar la traducción:
   type ejemplo.ada | .\ada_translator.exe > salida.py
