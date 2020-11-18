/* Este fichero contiene la definición una clase que implementa
  la suma implementada como una función primitiva recursiva
*/
#pragma once

#include <iostream>
#include "BasicFPR.hpp"

class SumFPR: public BasicFPR {
  private:
    int limitFunction (int firstNumber, int secondNumber);
    int recursiveFunction (int firstNumber, int secondNumber);

  public:
    SumFPR();
    ~SumFPR();

    int solve (int firstNumber, int secondNumber);
};