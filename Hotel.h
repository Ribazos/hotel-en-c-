/*
 * Hotel.h
 *
 *  Created on: 14 ene. 2021
 *      Author: Alberto
 */

#ifndef HOTEL_H_
#define HOTEL_H_
//#define NUM_HAB 10
#include <vector>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Hotel.h"
#include "Habitacion.h"
#include "Cliente.h"
#include "Reserva.h"
using namespace std;
class Hotel {

protected:
		//Habitacion* habitaciones[NUM_HAB];
		//Reserva* reservas[10];
		//Cliente* cliente[10];
		//char* nombre;
		vector<Cliente*> cliente;
		vector<Habitacion*> habitacion;
		vector<Reserva*> reserva;
public:
	Hotel();
	Hotel(Habitacion*, Reserva*,Cliente*,char*);

	Cliente* buscarCliente(string);//buscar cliente  string dni
	vector<Cliente *> getCliente();
	bool addCliente(string, string, string);

	Cliente* buscarHabitacion(int);//buscar habitacion con el numero de la habitacion
	bool libreHabitacion(string, string, string);

	Cliente* buscarReserva(string); //buscar la reserva con el numero de la habitacion


	void consultarPrecioTotal();
	void consultarDescuentos();
	void modificarDescuentos();
	void calcularGananciasTotales();

	void addReserva(Habitacion*, Reserva*,Cliente*);

};

#endif /* HOTEL_H_ */
