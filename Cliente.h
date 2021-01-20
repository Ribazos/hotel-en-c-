/*
 * Cliente.h
 *
 *  Created on: 14 ene. 2021
 *      Author: Alberto
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Cliente {
	protected:
		string dni;
		string nombre;
	public:
		Cliente();
		Cliente(string, string);
		const string& getDni() const;
		void setDni(const string &dni);
		const string& getNombre() const;
		void setNombre(const string &nombre);
};

#endif /* CLIENTE_H_ */
