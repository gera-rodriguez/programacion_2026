# Reto: reto_01.md

## Nombre del equipo: Tamales estilo México

## Integrantes
- **C. Rodríguez Sánchez Gerardo Israel** (Estudiante de la LIC)  
    Correo: `a19200922@alumnos.uady.mx`

## Descripción
Proyecto de POO en C++ que demuestra el uso de **herencia** mediante una jerarquía de vehículos. A partir de la clase base `Vehiculo`, se derivan cuatro clases: `Coche`, `Moto`, `Camion` y `Autobus`. Todas comparten el atributo `placa` y el método `cambiarPlaca()` definidos en la clase base.

## Funcionalidad del programa
Al ejecutar el programa aparece un menú interactivo con las siguientes opciones:

1. **Mostrar información** de todos los vehículos (incluyendo su placa actual).
2. **Cambiar la placa** de cualquiera de los vehículos creados.
3. **Salir** del programa.

El proyecto incluye un **Makefile** que automatiza la compilación y ejecución del programa.

## Uso rápido con Makefile

### Requisitos
- Compilador `g++`
- Herramienta `make`

### Pasos de ejecución
1. Abrir una terminal.
2. Entrar al directorio del proyecto:
  ```bash
  $ cd retos/reto_01
  ```
3. Ejecutar el Makefile:
  ```bash
  $ make
  ```
  > Este comando compila el proyecto y genera el ejecutable en la carpeta `bin/`.

### Targets disponibles
- `make` — objetivo por defecto: compila y ejecuta el proyecto.
- `make clean` — elimina archivos generados (binarios, objetos, etc.).

## Compilación sin `make`

En caso de no contar con la herramienta `make`, este proyecto sigue la convención **Canonical Project Structure**.

1. Para compilar el programa desde la raíz del proyecto, ejecuta el siguiente comando:
  ```powershell
  g++ -std=c++17 -I . libvehiculos/vehiculo.cpp libvehiculos/coche.cpp libvehiculos/moto.cpp libvehiculos/camion.cpp libvehiculos/autobus.cpp libvehiculos/main.cpp -o reto_01
  ```
2. Para ejecutar el programa:
  ```powershell
  ./reto_01
  ```