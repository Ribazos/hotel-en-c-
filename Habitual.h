/*
 * Habitual.h
 *
 *  Created on: 15 ene. 2021
 *      Author: Alberto
 */

#ifndef HABITUAL_H_
#define HABITUAL_H_

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Cliente.h"
using namespace std;
class Habitual: public Cliente {
	public:
		Habitual();
		Habitual(string, string);
};

#endif /* HABITUAL_H_ */
