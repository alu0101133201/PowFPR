/* Este fichero define una clase que implementa
  la potencia entre dos números implementada como 
  una función primitiva recursiva
*/
#pragma once

#include <iostream>
#include "ProductFPR.hpp"

class PowFPR: public BasicFPR {
  private:
    ProductFPR multiplier;

    int limitFunction (int firstNumber, int secondNumber);
    int recursiveFunction (int firstNumber, int secondNumber);

  public:
    PowFPR();
    ~PowFPR();

    int solve (int firstNumber, int secondNumber);
};