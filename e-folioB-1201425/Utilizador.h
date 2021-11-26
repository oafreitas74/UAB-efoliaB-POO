/*
 * Utilizador.h
 *
 *  Created on: 25/05/2015
 *      Author: orlando
 */

#ifndef UTILIZADOR_H_
#define UTILIZADOR_H_
#include <iostream>
#include <fstream>
#include <iostream>
namespace std {

class Utilizador {
	string nome;
	int telefone;
	string cargo;
public:
	Utilizador();
	virtual ~Utilizador();
	string getNome() { return nome; };
	int getTelefone() { return telefone; };
	string getCargo() {return cargo; };
	void getDescricao();
	void verUtilizador();
	void gravarUtilizador();
};

} /* namespace std */

#endif /* UTILIZADOR_H_ */
