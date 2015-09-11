#include "inimene.h"

int main(void){
	Inimene kalle(39912122715);
	Inimene malle(49602122715);
	Inimene juku(39506122715);
	Inimene kati(49107122715);
	Inimene inimesed[4]={kalle, malle, juku, kati};
	for(int i(0); i < 4; i++){
      cout << inimesed[i].synniAasta() << endl;
	}
}