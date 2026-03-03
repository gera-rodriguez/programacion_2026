# Ejercicio: ejercicio_01_clases.md
<div align="center">

<img alt="banner_escuela" src="https://img.pikbest.com/backgrounds/20190819/school-season-promotion--opening-school--school-school-banner-illustration_1901829.jpg!sw800"/>

</div>

## Descripción
El directorio **ejercicio_01_clases** contiene la implementación de la actividad, la cual se centra en el diseño de la clase `Estudiante` en C++. Para ello, se hace uso de atributos privados, constructores, métodos de acceso y modificación, así como funciones de apoyo para mostrar información y evaluar el estado académico del estudiante.

El proyecto incluye un **Makefile** que automatiza la compilación y ejecución del programa.

## Uso rápido con Makefile

### Requisitos
- Compilador `g++`
- Herramienta `make`

### Pasos de ejecución
1. Abrir una terminal.
2. Entrar al directorio del proyecto:
  ```bash
  $ cd ejercicio_01_clases
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
  g++ -I . libestudiante/main_estudiante.cpp libestudiante/estudiante.cpp -o estudiante
  ```
2. Para ejecutar el programa:
  ```powershell
  ./estudiante
  ```

## Contacto
- **C. Rodríguez Sánchez Gerardo Israel** (Estudiante de la LIC)  
  Correo: `a19200922@alumnos.uady.mx`