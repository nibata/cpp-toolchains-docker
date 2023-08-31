#include <iostream>
#include "string"
#include "include/MyClass.h"
#include <cstdio>

using namespace std;


int main() {
    MyClass objeto(1, "Nicolás");
    string nombre;

    printf("Hola %s persona número %i \n", objeto.get_name().c_str(), objeto.get_id());

    cout << "¿Cuál es tu nombre?:" << endl;

    cin >> nombre;

    printf("Hola %s", nombre.c_str());

    return 0;
}
