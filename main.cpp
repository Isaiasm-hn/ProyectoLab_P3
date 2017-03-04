#include "Consola.h"
#include "Microsoft.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	Consola* c=new Consola("prueba","p2",1254.2);
	cout<<c->getEstado();
	Microsoft* m=new Microsoft("Xbox","prueba","p2",1254.2);
	cout<<endl<<m->getModelo();
	delete c;
	delete m;
	return 0;
}