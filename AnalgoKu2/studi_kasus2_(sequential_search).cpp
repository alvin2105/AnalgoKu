/*
Nama	: Alvin
NPM		: 140810180013
Kelas	: A
Prigram	: Sequential Search
*/

#include<iostream>
using namespace std;

main(){
	int x[5] = {1,2,99,10,1};//daftar list yang ada
	int y = 99;//yang dicari
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklrasi
	int i = 1;
	int idx;//output
	bool found = false;
	
	//algoritma
	while(i<=n && !found){
		if(x[i] == y){
			found = true;
		}else
		i = i+1;
	}
	if(found == true){
		idx = i;
	}else
	idx = 0;//tidak ditemukan
	cout<<"Hasil cari index elemen : "<<idx;
}
