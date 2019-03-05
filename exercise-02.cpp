/*
Author		 : Bandana Irmal Abdillah
NPM			 : 140810180025
Deskrispi	 : Latihan ke dua ceitanya tentang teater
Tahun	 	 : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{		//ya ini structnya doang
	int room;
	char seat[3];
	char movieTitle[30];
};

main(){
	Theater T1;
	T1.room = 7;
	strcpy(T1.seat,"J9");
	strcpy(T1.movieTitle,"Adit & Jarwo");
	
	cout << "Room	: " << T1.room << endl; //munculin di layar
	cout << "Seat	: " << T1.seat << endl;
	cout << "Movie	: " << T1.movieTitle << endl;
}

