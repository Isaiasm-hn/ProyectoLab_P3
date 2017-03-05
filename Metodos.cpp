#include "Metodos.h"

string Metodos::getTime(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	stringstream hour;
	hour<<time->tm_hour<< ":" << time->tm_min << ":" << time->tm_sec;
	string hora=hour.str();
	return hora;
}

string Metodos::getFecha(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	int year = 1900 + time->tm_year;
	stringstream fecha;
	fecha<<time->tm_mday<<"/"<<(time->tm_mon+1)<<"/"<<year;
	string date=fecha.str();
	return date;
}