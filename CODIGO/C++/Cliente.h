/**
 * @(#) Cliente.h
 */

#ifndef CLIENTE_H_H
#define CLIENTE_H_H

#include "Reservacion.h"
#include "TipoCliente.h"
class Cliente
{
	String apellidos;
	
	date fechaNacimiento;
	
	String nombres;
	
	Reservacion * reservaciones;
	
	String rup;
	
	TipoCliente * tipoCliente;
	
	
};

#endif
