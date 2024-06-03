/**
 * @(#) Reservacion.h
 */

#ifndef RESERVACION_H_H
#define RESERVACION_H_H

#include "Habitacion.h"
#include "Cliente.h"
class Reservacion
{
	Cliente * cliente;
	
	date fecha;
	
	date fechaInicio;
	
	Habitacion * habitaciones;
	
	int numeroDias;
	
	int numeroNoche;
	
	int porcentajeDescuento;
	
	double total;
	
	
};

#endif
