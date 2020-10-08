#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double _salarioHora;
    std::string _nome;  

  public:
    static constexpr double horasObrigatorias = 8;
    static constexpr double mesesAno = 12;
    static constexpr double taxaHoraExtra = 2;
    Empregado(double salarioHora, std::string nome) : _salarioHora(salarioHora), _nome(nome){}
    std::string getNome() const { return  _nome; }
    double getSalarioHora() const { return _salarioHora; };
    double pagamentoMes(double horasTrabalhadas);
	
};

#endif