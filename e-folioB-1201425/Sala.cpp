/*
 * Sala.cpp
 *
 *  Created on: 24/05/2015
 *      Author: orlando
 */

#include "Sala.h"
#include <iostream>

namespace std {

Sala::Sala() {

	setIdSala();
	setData();
	setHoraInicio();
	setHoraFim();
}

Sala::~Sala() {
	// TODO Auto-generated destructor stub
}
void Sala::setIdSala() {

	int s;
	while(true){
		cout << "Em qual sala quer reservar (Sala 1, 2 ou 3) ?" << endl;
		cin  >> s;

		if (s > 3 && s > 1 ) cout << "Sala inválida, tente novamente" << endl;
		else break;
		}
		idSala = s;

}
void Sala::setData() {
	char c;
	int dia, mes, ano;

	while(true) {
		cout << "Qual a data da reuniao (DD:MM:AAAA)? \n";
		cin  >> dia >> c >> mes >> c >> ano;

		if (dia > 31 || mes > 12 ) cout << "Data inválida, tente novamente" << endl;
		else break;
	}
	data.tm_year = ano;
	data.tm_mday = dia;
	data.tm_mon = mes;
}
void Sala::setHoraInicio() {
	char c;
	int hora, minuto;

	while(true) {
		cout << "Qual a hora de início da reuniao (HH:MM)? \n";
		cin  >> hora >> c >> minuto;

		if (hora > 23 || minuto > 59) cout << "Hora inválida, tente novamente" << endl;
		else break;
	}
	horaInicio.tm_hour = hora;
	horaInicio.tm_min = minuto;

}

void Sala::setHoraFim() {
	char c;
	int hora, minuto;

	while(true) {
		cout << "Qual a hora de término da reuniao (HH:MM)? \n";
		cin  >> hora >> c >> minuto;

		if (hora > 23 || minuto > 59) cout << "Hora inválida, tente novamente" << endl;
		else break;
	}
	horaFim.tm_hour = hora;
	horaFim.tm_min = minuto;
}
// Ver os horarios das salas todas
void Sala::verHorarios(int n){
	cout<< "Horario N: " << n << endl
		<< "Sala: " << idSala << endl
		<< "Data: " << data.tm_mday << "/" << data.tm_mon << "/" << data.tm_year << endl
		<< "Hora do Inicio: " << horaInicio.tm_hour << ":" << horaInicio.tm_min << endl
		<< "Hora do Fim: " << horaFim.tm_hour << ":" << horaFim.tm_min << endl;
	utilizador.verUtilizador();
	cout<< endl;

}
// Ver os horarios de uma sala à escolha
void Sala::verHorario(int n, int ids){

	if(idSala == ids){
	cout<< "Horario N: " << n << endl
		<< "Sala: " << idSala << endl
		<< "Data: " << data.tm_mday << "/" << data.tm_mon << "/" << data.tm_year << endl
		<< "Hora do Inicio: " << horaInicio.tm_hour << ":" << horaInicio.tm_min << endl
		<< "Hora do Fim: " << horaFim.tm_hour << ":" << horaFim.tm_min << endl;
	utilizador.verUtilizador();
	cout<< endl;
	}
}
//gravar os horarios ordenados por sala
void Sala::gravarHorario(int n, int ids){
	ofstream fout("Reservas.txt",ios::app);
	if(idSala == ids){
	fout<< "Horario N: " << n << endl
        << "Sala: " << idSala << endl
		<< "Data: " << data.tm_mday << "/" << data.tm_mon << "/" << data.tm_year << endl
		<< "Hora do Inicio: " << horaInicio.tm_hour << ":" << horaInicio.tm_min << endl
		<< "Hora do Fim: " << horaFim.tm_hour << ":" << horaFim.tm_min << endl;
	utilizador.gravarUtilizador();
	fout<< endl;
	}
  fout.close();
}
} /* namespace std */
