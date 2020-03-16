/*
Nama	: Alvin
NPM		: 140810180013
Kelas	: A
Program	: Binary Search
*/

#include<iostream>
using namespace std;

main(){
	int x[5]={1,3,7,9,11};//input
	int idx; //output
	int y = 7;//angka yang dicari
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int i, j, mid;
	bool found;
	
	//algoritma
	i = 1;
	j = n;
	found = false;
	while(!found && i<= j){
		mid = (i + j)/2;
		if (x[mid] == y){
			found = true;
		}
		else if(x[mid] < y){//menacri bagian kanan
			i = mid+1;
		}
		else{
			j = mid - 1; //mencari bagian kiri
		}
		
		
	}
	if(found == true){
		idx=mid;
	}else
	idx= 0;
	
	cout<<"Hasil cari indeks elemen : "<<idx;

}
