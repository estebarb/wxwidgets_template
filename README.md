# Plantilla wxWidgets con CMake

La idea de esta plantilla es que pueda servir de base para proyectos
programados que requieran usar CMake, wxWidgets y Google Test.

Se implementa funcionalidad básica para tener una ventana y tener pruebas
unitarias.

## Requisitos

Antes de empezar, asegúrense de tener los índices más recientes de apt. Para ello ejecuten:

```bash
sudo apt-get update
```

La plantilla requiere CMake 3.24. Es posible que no tenga esta versión instalada en Ubuntu. Para ello, puede ejecutar los siguientes comandos:

```bash
# Desinstalar cmake
sudo apt-get purge cmake

# Instalar la versión más reciente de CMake desde snap
sudo snap install cmake --classic
```

Para acelerar la compilación, también se recomienda utilizar Ninja:

```bash
sudo apt-get install ninja-build
```

Para instalar wxWidgets, se recomienda seguir los siguientes pasos:

```bash
sudo apt-get install libwxgtk3.0-gtk3-dev
```

Para instalar Google Test, se recomienda seguir los siguientes pasos:

```bash
sudo apt-get install libgtest-dev
```

## Compilación

Para compilar el proyecto se recomienda seguir los siguientes pasos:

```bash
cmake -S . -B build -G Ninja
cmake --build build
```