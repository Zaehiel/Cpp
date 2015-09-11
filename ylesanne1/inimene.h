#include <iostream>
#include <string>
#include <array>
using namespace std;

class Inimene{
	long long kood;
	public:
		Inimene();
		Inimene(long long isikukood);
		Inimene(const Inimene& a1);
		~Inimene();
		void kirjuta();
		int synniAasta();
		int synniKuu();
		int synniPaev();
};

/*
self notes.-.-.-.-.-..-.-.-.-.--.-.-.
c++ peab jälgime täpselt mis short/int/long sa kasutad. ju vist optimaalseks mälu
kasutamiseks.
Muidu viskab > warning: overflow in implicit constant conversion
nt kasutades int on suurim number 16-bitine == 65 536,
isikukood vajab aga 64-bitist long long ._.

http://www.cplusplus.com/doc/tutorial/variables/


to_string töötab ainult c++11 puhul, kompileerida tuleb:
g++ -std=c++0x inimeneMain.cpp inimene.cpp



Q: 
string k = "hello";
cout << k[1] << endl;
annab: e

aga ei saa omistada?

string uus = k[1];
errori viskab::  invalid conversion from ‘char’ to ‘const char*’

substring aga jällegi saab omistada
string kuu = isikukood.substr(3,2);
*/