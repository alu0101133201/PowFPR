/* Este fichero define una clase que define
   una clase abstracta que sirve como clase base para
   la implementación de funciones primitivas recursivas
*/
#pragma once

#include "BasicFunctions.hpp"

class BasicFPR {
  protected:
    BasicFunctions basicFunctions;

    virtual int limitFunction (int firstNumber, int secondNumber) = 0;
    virtual int recursiveFunction (int firstNumber, int secondNumber) = 0;

  public:
    BasicFPR();
    ~BasicFPR();

    virtual int solve (int firstNumber, int secondNumber) = 0;
};