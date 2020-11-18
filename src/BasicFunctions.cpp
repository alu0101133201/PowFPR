/* Este fichero implementa una clase que contiene las funciones básicas
*  que se pueden usar para construir un función
*  primitiva recursiva.
*/

#include "BasicFunctions.hpp"

BasicFunctions::BasicFunctions() {}

BasicFunctions::~BasicFunctions() {}

int BasicFunctions::zero(int x) {
  return 0;
} 

int BasicFunctions::successor(int x) {
  return (x + 1);
}

int BasicFunctions::projection(std::vector<int> setOfElements, int index) {
  return (setOfElements[index]);
}