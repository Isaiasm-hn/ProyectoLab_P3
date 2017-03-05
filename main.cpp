#include "Includes.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	Modelos mdl;
	Metodos mt;
	vector<Consola*> cnsl;
	Nintendo* nin=new Nintendo(mdl.getNintendo(1),"Bueno","Excelente",2333,2016);
	Microsoft* min=new Microsoft(mdl.getMicrosoft(2),"Bueno","Excelente",2323,2016);
	Sony* son=new Sony(mdl.getSony(1),"Bueno","Excelente",2323,2911);
	cnsl.push_back(nin);
	cnsl.push_back(min);
	cnsl.push_back(son);
	for (int i = 0; i < cnsl.size(); ++i){
		cout<<cnsl.at(i)->getEstado()<<endl;
	}
	Vendedor* user=new Vendedor("Juan Perez");
	user->setEntrada();
	cout<<"Fecha:   "<<mt.getFecha()<<endl;
	cout<<"Hora:   "<<mt.getTime()<<endl;
	return 0;
}