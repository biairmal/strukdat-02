/*
Nama		 : Bandana Irmal Abdillah
NPM			 : 140810180025
Kelas		 : A
Tanggal 	 : 5 Maret 2019
*/

#include <iostream>
using namespace std;

typedef int arr[100];
void moveZeroToEnd (arr a, int n){
	
}

void input (arr a, int& n){
	cout << "Masukkan panjang data : "; cin >> n;
	cout << "Masukkan data cth [1 2 3 4 5] : ";
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
}
void output (arr a, int n){
	
	cout << "Hasil : "; moveZeroToEnd(a, n);
}

main(){
	int n;
	arr a;
	input(a, n);
	output(a, n);
}


