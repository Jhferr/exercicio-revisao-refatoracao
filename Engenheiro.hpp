#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  private:  
    int _projetos;
  public:
    Engenheiro(double salarioHora, std::string nome, int projetos) : Empregado(salarioHora, nome), _projetos(projetos) {}
    int getProjetos();
};

#endif