/*
 * Esporadico.h
 *
 *  Created on: 15 ene. 2021
 *      Author: Alberto
 */

#ifndef ESPORADICO_H_
#define ESPORADICO_H_
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Cliente.h"
using namespace std;
class Esporadico: public Cliente {
	protected:
		int descuento;
	public:
		Esporadico();
		Esporadico(string, string,int);
};

#endif /* ESPORADICO_H_ */
