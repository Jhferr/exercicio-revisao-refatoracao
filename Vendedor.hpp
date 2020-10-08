#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:  
    double _quotaMensalVendas;
  public:
    Vendedor(double salarioHora, std::string nome, double quotaMensalVendas) : Empregado(salarioHora, nome), _quotaMensalVendas(quotaMensalVendas) {}
    double getQuotaMensalVendas();
    double quotaTotalAnual();
};

#endif