/*
 * MarcarSala.cpp
 *
 *  Created on: 24/05/2015
 *      Author: orlando
 */

#include "MarcarSala.h"
#include <iostream>
#include <cstdlib>
namespace std {

MarcarSala::MarcarSala() {

	idReserva = 0;
}

MarcarSala::~MarcarSala() {
	// TODO Auto-generated destructor stub
}
void MarcarSala::Menu(){
int op=0;


cout<< "        ============================================== " << endl
    << "        |       Licenciatura de Informatica          | " << endl
    << "        |        Programacao por Objetos C++         | " << endl
    << "        |                 E-folio B                  | " << endl
    << "        |     Aluno N.1201425 - Orlando Freitas      | " << endl
    << "        ============================================== " << endl
	<< endl
	<< endl
	<< "Escolhe uma opçao: " << endl
	<< "1- Adicionar nova reserva" << endl
	<< "2- Apagar reserva" << endl
	<< "3- Ver reserva marcadas" << endl
	<< "4- Ver reserva marcadas por sala" << endl
	<< "0- Guardar em ficheiro e Sair" << endl;
cin >> op;

switch (op) {
		case 1:
			adicionaReserva();
			break;
		case 2:
			apagarReserva();
			break;
		case 3:
			verReservas();
			break;
		case 4:
			verReservaPorSala();
			break;
		case 0:
	// ao sair gravar todos os Reserva
			gravarReservaPorSala();
			exit(0);
			break;
		default:
			Menu();
			break;
	}
	Menu();

}
void MarcarSala::adicionaReserva(){

	reservas.push_back(Sala());

}
void MarcarSala::apagarReserva(){
	int n;
	verReservas(); // Ver os reserva todos para melhor escolha
	cout << "Qual o horario a apagar";
	cin  >> n;
	reservas.erase(reservas.begin()+(n-1));

}
// Ver os reserva das salas todas
void MarcarSala::verReservas(){
	int n = 1;
	for (it = reservas.begin(); it != reservas.end(); it++){
			(*it).verHorarios(n);
			cout << endl;
			n++;
		}
}
// Ver os reserva de uma sala à escolha
void MarcarSala::verReservaPorSala(){
	int ids, n = 1;
		cout<< "De que sala quer ver a reserva (Sala 1, 2 ou 3)? " << endl;
		cin >> ids;
		cout<< endl
			<< "Sala - " << ids << endl;
		for (it = reservas.begin(); it != reservas.end(); it++){
			(*it).verHorario(n,ids);
			cout << endl;
			n++;
		}
}
//Gravar todos os reserva
void MarcarSala::gravarReservaPorSala(){
// for para mostrar os reserva da sala 1 primeiro e a 3 em ultimo.
for(int ids=1; ids<4;ids++){
    int n = 1;
		for (it = reservas.begin(); it != reservas.end(); it++){
			(*it).gravarHorario(n,ids);
			cout << endl;
			n++;
		}
    }
}
} /* namespace std */
