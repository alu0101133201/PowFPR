/* Este fichero contiene el cuerpo principal del programa */

#include <iostream>

#include "SumFPR.hpp"
#include "ProductFPR.hpp"
#include "PowFPR.hpp"

int main() {
  int option;
  int base;
  int exponent;

  std::cout << "- Programa que realiza la potencia entre dos números\n\n";
  do {
    PowFPR powerFunction;

    std::cout << "Introduzca la base: ";
    std::cin >> base;
    std::cout << "Introduzca el exponente: ";
    std::cin >> exponent;
    std::cout << "\033[1;32mEl resultado es: " << powerFunction.solve(base, exponent) << "\033[0m\n";
    std::cout << "\nIntroduzca un 0 para salir, otro número para hacer otro cálculo: ";
    std::cin >> option;
  } while (option != 0);
  return 0;
}