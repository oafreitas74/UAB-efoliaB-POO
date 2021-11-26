/*
 * Empresa.h
 *
 *  Created on: 26/05/2015
 *      Author: orlando
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_
#include "Utilizador.h"
#include <fstream>
#include <iostream>
namespace std {

class Empresa: public Utilizador {
    string nEmpresa;
    typedef Utilizador herdado;
public:
	Empresa();
	virtual ~Empresa();
	string getNEmpresa() {return nEmpresa; };
	void verUtilizador();
	void gravarUtilizador();
};

} /* namespace std */

#endif /* EMPRESA_H_ */
