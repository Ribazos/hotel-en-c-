/*
 * Esporadico.cpp
 *
 *  Created on: 15 ene. 2021
 *      Author: Alberto
 */

#include "Esporadico.h"

Esporadico::Esporadico():Cliente(){
	descuento = 0;
}
Esporadico::Esporadico(string nom, string midni,int desc):Cliente(nom,midni){
	descuento = desc;
}

