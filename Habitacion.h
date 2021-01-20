/*
 * Habitacion.h
 *
 *  Created on: 14 ene. 2021
 *      Author: Alberto
 */

#ifndef HABITACION_H_
#define HABITACION_H_
#include <vector>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Habitacion {
	protected:
		float precioHab;
		int habOcupada[10]={0,0,0,0,0,0,0,0,0,0}; //0 libre, 1 ocupada.
	public:
		Habitacion();
		Habitacion(float,int);
		const string& getHabitacion() const;
		void setHabitacion(const string &dni);

}

#endif /* HABITACION_H_ */
