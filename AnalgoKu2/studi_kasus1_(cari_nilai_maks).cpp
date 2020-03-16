/*
Nama	: Alvin
NPM		: 140810180013
Kelas	: A
Program	: Pencarian nilai maksimum
*/

#include<iostream>
using namespace std;

main(){
	int x[5]={21,22,99,24,25};
	int n= sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int maks = x[0];
	int i= 2;
	
	//algoritma
	while (i<= n){
		if(x[i] > maks){
			maks = x[i];
		}
		i=i+1;
	}
	
	cout<<"Nilai maks dari array adalah : "<<maks;
	
}
