/*
Author		 : Bandana Irmal Abdillah
NPM			 : 140810180025
Deskrispi	 : Latihan ke tiga tentang uang
Tahun	 	 : 2019
*/

#include <iostream>
using namespace std;

struct pegawai{
	char nip[5];
	char nama[20];
	int gol;
};

typedef pegawai pgw[100]; //pgw tuh pegawai

void inputPegawai(int& n, pgw& pgw){ //fungsi ini ya buat input
	cout << "Jumlah Pegawai : "; cin >> n;
	
	cout << endl;
	
	for (int i=0; i<n; i++){
		cout << "NIP		: "; cin >>pgw[i].nip;
		cout << "Nama		: "; cin >>pgw[i].nama;
		cout << "Golongan	: "; cin >>pgw[i].gol;
		cout << endl;
	}
}

void sorting(pgw& pgw, int& n){
	int posisi;
	for (int i=0; i<n-1; i++){
		posisi=i;
		for (int j=i+1; j<n; j++){
			if (pgw[posisi].nip>pgw[j].nip){
				posisi=j;
			}
		}
		swap (pgw[i],pgw[posisi]);
	}
}

void cariGaji(int& n, pgw& pgw, int& i){
	int gaji;
	if (pgw[i].gol==1){
		gaji = 2000000;
	}
	else if(pgw[i].gol==2){
		gaji = 3000000;
	}
	else if(pgw[i].gol==3){
		gaji = 5000000;
	}
	else if(pgw[i].gol==4){
		gaji = 8000000;
	}		
	cout << gaji;
}

void cetakDaftar(int& n, pgw& pgw, int& i){
	
	sorting(pgw, n); //sebelum dicetak sorting dulu
	
	cout << "----------------------------------------------------------------------------" << endl;
	cout << "NO\t\tNIP\t\tNAMA\t\tGOLONGAN\t\tGAJI"<< endl;
	cout << "----------------------------------------------------------------------------" << endl;
	for (int i=0; i<n; i++){
		cout << i+1 << "\t\t" << pgw[i].nip << "\t\t" << pgw[i].nama << "\t\t" << pgw[i].gol <<"\t\t\t"; cariGaji(n,pgw,i);
		cout << endl;
	}
}
/*
void ratagajih(int& n, pgw& pgw){
	int ratagaji=0;
	for (int i=0; i<n; i++){
		ratagaji+=pgw[i].
	}
}
*/

main(){
	pgw pegawai;
	int n,i;
	inputPegawai(n, pegawai);
	cetakDaftar(n,pegawai,i);
}

