/*
 * MarcarSala.h
 *
 *  Created on: 24/05/2015
 *      Author: orlando
 */

#ifndef MARCARSALA_H_
#define MARCARSALA_H_

#include <vector>
#include "Sala.h"

namespace std {

class MarcarSala {
	int idReserva;
	vector<Sala> reservas;
	vector<Sala>::iterator it;

public:
	MarcarSala();
	virtual ~MarcarSala();
	int getIdReserva() { return idReserva; };
	void adicionaReserva();
	void apagarReserva();
	void verReservas();
	void verReservaPorSala();
	void gravarReservaPorSala();
	void Menu();
};

} /* namespace std */

#endif /* MARCARSALA_H_ */
