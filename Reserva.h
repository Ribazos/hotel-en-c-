/*
 * Reserva.h
 *
 *  Created on: 14 ene. 2021
 *      Author: Alberto
 */

#ifndef RESERVA_H_
#define RESERVA_H_

#include "Cliente.h"
#include "Habitacion.h"
#include <iostream>

#include <stdio.h>
#include <string.h>
using namespace std;
class Reserva {
protected:
	int dias;
	string fecha;
	//Cliente* cliente;
	//Habitacion habitacion;

public:
    Reserva();
	Reserva(int, string,Cliente*,Habitacion);
};

#endif /* RESERVA_H_ */
