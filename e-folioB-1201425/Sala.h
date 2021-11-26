/*
 * Sala.h
 *
 *  Created on: 24/05/2015
 *      Author: orlando
 */

#ifndef SALA_H_
#define SALA_H_
#include <time.h>
#include "Empresa.h"
#include <fstream>
#include <iostream>

namespace std {

class Sala {

	int idSala;
	tm data;
	tm horaInicio;
	tm horaFim;
	Empresa utilizador;
public:
	Sala();
	virtual ~Sala();
	Empresa getUtilizador() {return utilizador; };
	int getIdSala() {return idSala; };
	tm getData() { return data; };
	tm getHoraInicio() { return horaInicio; };
	tm getHoraFim() { return horaFim; };
	void setIdSala();
	void setData();
	void setHoraInicio();
	void setHoraFim();
	void setUtilizador();
	void verHorarios(int);
	void verHorario(int,int);
	void gravarHorario(int,int);
};

} /* namespace std */

#endif /* SALA_H_ */
