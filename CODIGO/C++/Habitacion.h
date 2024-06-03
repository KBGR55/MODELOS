/**
 * @(#) Habitacion.h
 */

#ifndef HABITACION_H_H
#define HABITACION_H_H

#include "Imagen.h"
#include "TipoHabitacion.h"
#include "Reservacion.h"
class Habitacion
{
	String estado;
	
	Imagen * imagenes;
	
	int numero;
	
	double precio;
	
	Reservacion * reservacion;
	
	TipoHabitacion * tipo;
	
	
};

#endif
