/*
 * Empresa.cpp
 *
 *  Created on: 26/05/2015
 *      Author: orlando
 */

#include "Empresa.h"
#include <iostream>
namespace std {

Empresa::Empresa() {
	nEmpresa = " ";
	int op=0;

	cout << "E funcionario de uma empresa externa?\n1-Sim \n2-Nao\n";
	cin  >> op;
	if(op==2) return;

    cout << "Qual o nome da empresa externa ?\n";
    getline(cin, nEmpresa);
    getline(cin, nEmpresa);

}

Empresa::~Empresa() {
	// TODO Auto-generated destructor stub
}
void Empresa::verUtilizador(){
	herdado::verUtilizador();
	string e = getNEmpresa();
// se o nome da empresa estiver vazio termina a funçao
	if(e.compare(" ") == 0){
		cout << endl;
		return;
	}
	cout << "Nome da empresa: " << nEmpresa << endl;
}
void Empresa::gravarUtilizador(){
	herdado::gravarUtilizador();
	fstream fout;
    fout.open("Reservas.txt",ios::ate | ios::out | ios::in);
    fout.seekg(0,ios::end);
	string e = getNEmpresa();
	if(e.compare(" ") == 0){
		fout << endl;
		return;
	}
	fout<< "Nome da empresa: " << nEmpresa << endl
		<< endl;
    fout.close();
}
} /* namespace std */
