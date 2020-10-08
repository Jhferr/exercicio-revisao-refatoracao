#include <string>
#include <iostream>
#include "Empregado.hpp"

double Empregado :: pagamentoMes(double horasTrabalhadas) {
  double horasSalario = horasTrabalhadas;
  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > horasObrigatorias) {
    double horaExtra = horasTrabalhadas - horasObrigatorias;
    horasSalario += horaExtra / taxaHoraExtra;
  }
  return horasSalario * _salarioHora;
}