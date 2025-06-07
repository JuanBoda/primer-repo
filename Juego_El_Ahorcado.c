#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // Librerias de Windows

void utf8();

int main() {
    utf_8();

    return 0;
}

// Función para compatibilizar caracteres.
void utf_8() {
#ifdef _WIN32
#include <windows.h>
    SetConsoleOutputCP(CP_UTF8);
#endif
}
