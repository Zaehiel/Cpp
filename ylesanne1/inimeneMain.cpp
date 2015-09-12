#include "inimene.h"

int main(void){
	Inimene kalle(39910278814);
	Inimene malle(49602180019);
	Inimene juku(39506095912);
	Inimene kati(49107207816);
	Inimene inimesed[4] = {kalle, malle, juku, kati};
	Inimene *pointer = inimesed; //viida kasutamine I guess?
	/* vanim mees ja naine*/
	int indeks = 0;
	int indeks2 = 0;
	int aasta = 2015; //praegune aasta
	int synnia = 0; //target inimene synni aasta
	int cache = 0; //vahepealne kontroll synniaastale
	int vanim = 0; //target inimene vanim
	int noorim = 0;
	for(int n = 0; n < 4; n++){
		if(n==0){
			if(inimesed[n].sajand() == 3 || inimesed[n].sajand() == 4){
				synnia = 1900 + inimesed[n].synniAasta();
			} else if(inimesed[n].sajand() == 5 || inimesed[n].sajand() == 6){
				synnia = 2000 + inimesed[n].synniAasta();
			}
			vanim = aasta - synnia;
			indeks = n;
			noorim = aasta - synnia;
			indeks2 = n;
		} else {
			if(inimesed[n].sajand() == 3 || inimesed[n].sajand() == 4){
				cache = 1900 + inimesed[n].synniAasta();
			} else if(inimesed[n].sajand() == 5 || inimesed[n].sajand() == 6){
				cache = 2000 + inimesed[n].synniAasta();
			}
			cache = aasta - cache;
			if(vanim < cache){
				vanim = cache;
				indeks = n;
			} else if (noorim > cache) {
				noorim = cache;
				indeks2 = n;
			}
			
		}
	}
	cout << "vanim: " << vanim << " kood: " << inimesed[indeks].isikuKood() << " noorim: " << noorim << " kood: " << inimesed[indeks2].isikuKood() << endl;
	int mehed = 0;
	int naised = 0;
	for(int b=0; b < 4; b++){
		if(pointer[b].sajand() == 3 || pointer[b].sajand() == 5){
			mehed++;
		} else if(pointer[b].sajand() == 4 || pointer[b].sajand() == 6){
			naised++;
		}
	}
	cout << "mehi: " << mehed << ", naisi:" << naised << endl; 
}


/* current output:
Isikukood määrati :39910278814
Isikukood määrati :49602180019
Isikukood määrati :39506095912
Isikukood määrati :49107207816
vanim: 24 kood: 49107207816 noorim: 16 kood: 39910278814
mehi: 2, naisi:2
*/