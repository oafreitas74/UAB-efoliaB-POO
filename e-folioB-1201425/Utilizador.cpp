/*
 * Utilizador.cpp
 *
 *  Created on: 25/05/2015
 *      Author: orlando
 */

#include "Utilizador.h"
#include <iostream>
namespace std {

Utilizador::Utilizador() {
	nome = "";
	telefone = 0;
	cout << "O nome de quem vai reservar ?\n";
	getline(cin, nome);
	getline(cin, nome);
	cout << "Qual o numero de telefone ?\n";
	cin  >> telefone;
    cout << "Qual o cargo que ocupa ?\n";
    getline(cin, cargo);
    getline(cin, cargo);

}

Utilizador::~Utilizador() {
	// TODO Auto-generated destructor stub
}

void Utilizador::verUtilizador(){

	cout<< "Nome: " << nome << endl
		<< "Telefone: " << telefone << endl
		<< "Cargo :" << cargo << endl;

}
void Utilizador::gravarUtilizador(){
    fstream fout;
    fout.open("Reservas.txt",ios::ate | ios::out | ios::in);
    fout.seekg(0,ios::end);

	fout<< "Nome: " << nome << endl
		<< "Telefone: " << telefone << endl
		<< "Cargo :" << cargo << endl;
    fout.close();
}
} /* namespace std */
