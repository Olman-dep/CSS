#include <iostream>

int main() {
    int var = 10;        // Una variable entera
    int *ptr = &var;     // Un puntero que almacena la dirección de var

    std::cout << "Valor de var: " << var << std::endl;          // Muestra el valor de var
    std::cout << "Dirección de var: " << &var << std::endl;     // Muestra la dirección de var
    std::cout << "Valor almacenado en ptr: " << ptr << std::endl; // Muestra la dirección de var almacenada en ptr
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl; // Muestra el valor de var accedido a través de ptr

    return 0;
}
