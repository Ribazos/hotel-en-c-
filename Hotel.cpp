/*
 * Hotel.cpp
 *
 *  Created on: 14 ene. 2021
 *      Author: Alberto
 */

#include "Hotel.h"


Hotel::Hotel() {

}
Cliente *Hotel::buscarCliente(string dni){
	for (Cliente *cliente: clientes){
		if(cliente->getDni().compare(dni) == 0){
			return cliente;
		}
	}
	return NULL;
}
vector<Cliente *> Hotel::getCliente() {
    return clientes;
}

bool Hotel::addCliente(string dni, string nom, string midni) {
    if( !buscarCliente( dni ) ){
        clientes.push_back( new Cliente(dni, nom, midni ) );
        return true;
    }
    return false;
}

Cliente *Hotel::buscarHabitacion(int numHab){
	for (Habitacion *habitacion: habitaciones){
		if(habitacion->getHabitacion().compare(numHab) == 0){
			return habitacion;
		}
	}
	return NULL;
}
vector<Habitacion *> Hotel::getHabitacion() {
    return habitaciones;
}

/*bool Hotel::hacerReserva(string dni, string nom, string midni) {
	for (Habitacion *habitacion: habitaciones){
		if( habitacion->getHabitacionLibre() == 1 ){ //Comparar si es 1 es que hay libre.
			clientes.push_back( new Reserva(dni, nom, midni ) );
			return true;
		}
	}
    return false;
}*/






//Precio total para un cliente dado, especificando su número de DNI, tipo de habitación y número de noches.
void consultarPrecioTotal(){
	int tipoHab = "";
	cout << "Introduce el tipo de habitacion:" << endl;
	cin >>tipoHab;
	if(tipoHab == 0){
		cout <<"El precio total de la habitacion " + tipoHab + "es de: " +   << endl;
	}else if(tipoHab == 1) {
		cout <<"El precio total de la habitacion " + tipoHab + "es de: " + elprecio << endl;
	}else if(tipoHab == 2) {
		cout <<"El precio total de la habitacion " + tipoHab + "es de: " + elprecio << endl;
	}


}
void consultarDescuentos();
void modificarDescuentos();
void calcularGanancias();
