/*
Author		 : Bandana Irmal Abdillah
NPM			 : 140810180025
Desjruosu	 : 
Tahun	 	 : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk[2];
	char goldar[2];
};

int main(){
	Orang orang;
	orang.umur = 10;
	strcpy(orang.nama,"fahmi");
	strcpy(orang.jk,"L");
	strcpy(orang.goldar,"O");
	
	cout << orang.nama << endl;
	cout << orang.umur << endl;
	cout << orang.jk << endl;
	cout << orang.goldar <<endl;
}
