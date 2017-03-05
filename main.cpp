#include "Includes.h"

using namespace std;

string getHora();
string getFecha();
string getMicrosoft(int);
string getSony(int);
string getNintendo(int);

int main(){
	cout<<getHora()<<endl;
	cout<<getFecha()<<endl;
	return 0;
}

string getHora(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	stringstream hour;
	hour<<time->tm_hour<< ":" << time->tm_min << ":" << time->tm_sec;
	string hora=hour.str();
	return hora;
}
string getFecha(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	int year = 1900 + time->tm_year;
	stringstream fecha;
	fecha<<time->tm_mday<<"/"<<(time->tm_mon+1)<<"/"<<year;
	string date=fecha.str();
	return date;
}
string getMicrosoft(int n){
	switch (n){
		case 1: 
			return "xbox";
			break;
		case 2: 
			return "xbox 360";
			break;
		case 3: 
			return "xbox One";
			break;
  		default: 	
  			return NULL;
  			break;
	}		
}
string getSony(int n){
	switch (n){
		case 1: 
			return "Play Station 1";
			break;
		case 2: 
			return "Play Station 2";
			break;	
		case 3: 
			return "Play Station 3";
			break;
		case 4: 
			return "Play Station 4";
			break;
		case 5: 
			return "PSP";
			break;
		case 6: 
			return "PS Vita";
			break;
		default: 
			return NULL;
	}
}
string getNintendo(int n){
	switch (n){
		case 1:
			return "Nintendo Entertainment System";
			break;
		case 2:
			return "Super Nintendo Entertainment System";
			break;
		case 3:
			return "Nintendo 64";
			break;
		case 4:
			return "Nintendo GameCube";
			break;
		case 5:
			return "Nintendo Wii";
			break;
		case 6:
			return "Nintendo Wii U";
			break;
		case 7:
			return "Nitendo Switch";
			break;
		case 8:
			return "Gameboy";
			break;
		case 9:
			return "Gameboy Colors";
			break;
		case 10:
			return "Gameboy Advance";
			break;
		case 11:
			return "Nintendo DS";
			break;
		case 12:
			return "Nintendo DSi";
			break;
		case 13:
			return "Nintendo 3DS";
			break;	
		case 14:
			return "Nintendo New 3DS";
			break;
		default:
			return NULL;
			break;



	}
}