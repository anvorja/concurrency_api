## API Server con Crow C++

Un servidor web API simple construido con el framework Crow para C++.

### Features
 - Endpoint /ping - Responde "pong" para verificar que el servidor está activo
 - Endpoint /compute - Realiza un cálculo intensivo y devuelve el resultado
 - Servidor multihilo optimizado para el número de cores de la CPU
 - Configuración sencilla con CMake
 - HTTP/1.1 and Websocket support.
 - Multi-part request and response support.
 - Compilador C++20 (g++ 10+, clang 10+, MSVC 2019+)
 - CMake 3.16+


> **Warning**
>
> Si NO tienes la carpeta Crow/ (¡ESTO ES IMPORTANTE!) 

Si al revisar el contenido del proyecto NO ves la carpeta Crow/, simplemente ejecuta:

```
git clone https://github.com/CrowCpp/Crow.git
```

##  Estructura esperada:

```
api/
├── Crow/           ← ¡Esta carpeta debe existir!
├── CMakeLists.txt
├── main.cpp
└── README.md
```