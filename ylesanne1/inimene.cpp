#include "inimene.h"

Inimene::Inimene(){
	kood=-1;
}

Inimene::Inimene(long long isikukood){
	kood = isikukood;
	cout << "Isikukood määrati :" << kood << endl;
}

Inimene::Inimene(const Inimene& a1){
	cout << "kopeeritakse :" << kood << " ;" << endl;
	kood = a1.kood;
}

Inimene::~Inimene(){
	cout << "Destruktor: ";
	kirjuta();
}

void Inimene::kirjuta(void){
	cout << "(" << kood << ")" << endl;
}

int Inimene::synniAasta(){
	string isikukood = to_string(kood);
	string aasta = isikukood.substr(1,2);
	int vaartus = stoi(aasta);
	return vaartus;
}

int Inimene::synniKuu(){
	string isikukood = to_string(kood);
	string kuu = isikukood.substr(3,2);
	int vaartus = stoi(kuu);
	return vaartus;
}

int Inimene::synniPaev(){
	string isikukood = to_string(kood);
	string paev = isikukood.substr(5,2);
	int vaartus = stoi(paev);
	return vaartus;
}