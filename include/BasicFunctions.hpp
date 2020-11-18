/* Este fichero define una clase que contiene las funciones básicas
*  que se pueden usar para construir un función
*  primitiva recursiva.
*/
#pragma once

#include <vector>

class BasicFunctions {
  private:
  
  public:
    BasicFunctions();
    ~BasicFunctions();

    int zero(int);
    int successor(int);
    int projection(std::vector<int>, int);
};