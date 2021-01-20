/*
 * Cliente.cpp
 *
 *  Created on: 14 ene. 2021
 *      Author: Alberto
 */

#include "Cliente.h"

Cliente::Cliente() {
	string nombre = "";
	string dni = "";
}

Cliente::Cliente(string nom, string midni) {
	nombre = nom;
	dni = midni;
}

const string& Cliente::getDni() const {
	return dni;
}

void Cliente::setDni(const string &dni) {
	this->dni = dni;
}

const string& Cliente::getNombre() const {
	return nombre;
}

void Cliente::setNombre(const string &nombre) {
	this->nombre = nombre;
}
