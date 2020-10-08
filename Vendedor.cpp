#include <string>
#include <iostream>
#include "Empregado.hpp"
#include "Vendedor.hpp"

double Vendedor :: quotaTotalAnual() {
  return _quotaMensalVendas * mesesAno;
}
double Vendedor :: getQuotaMensalVendas(){
  return _quotaMensalVendas;
}
