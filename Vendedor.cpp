#include "Vendedor.h"

Vendedor::Vendedor(string pNombre):Usuario(pNombre){

}
string Vendedor::getTime(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	
	vector<string> dia;
	dia.push_back("Domingo");
	dia.push_back("Lunes");
	dia.push_back("Martes");
	dia.push_back("Miercoles");
	dia.push_back("Jueves");
	dia.push_back("Viernes");
	dia.push_back("Sabado");

	vector<string> mes;
	mes.push_back("Enero");
	mes.push_back("Febrero");
	mes.push_back("Marzo");
	mes.push_back("Abril");
	mes.push_back("Mayo");
	mes.push_back("Junio");
	mes.push_back("Julio");
	mes.push_back("Agosto");
	mes.push_back("Septiembre");
	mes.push_back("Octubre");
	mes.push_back("Noviembre");
	mes.push_back("Diciembre");
	int year = 1900 + time->tm_year;
	stringstream hour;
	hour<<time->tm_hour<< ":" << time->tm_min << ":" << time->tm_sec+" - "<<dia[time->tm_wday]<<" / "<< mes[time->tm_mon]<<" / "<<year;
	string hora=hour.str();
	return hora;

}
void Vendedor::setEntrada(){
	this->hora_entrada=getTime();
}
string Vendedor::getEntrada(){
	return hora_entrada;
}
void Vendedor::setSalida(){
	this->hora_salida=getTime();
}
string Vendedor::getSalida(){
	return hora_salida;
}