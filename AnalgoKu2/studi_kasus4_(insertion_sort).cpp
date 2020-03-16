/*
Nama	: Alvin
NPM		: 140810180013
Kelas	: A
Program	: Insertion Sort
*/

#include<iostream>
using namespace std;

main(){
	int x[5]={1,7,11,31,2};
	int n = sizeof(x)/sizeof(x[0]);
	
	//deklarasi
	int i , j, insert;
	
	//Algoritma
	for(i=1; i<n; i++){
		insert= x[i];
		j = i - 1;
		
		while(j >= 0 && x[j] > insert){
			x[j+1] = x[j];
			j = j - 1; 
		}
		x[j+1] = insert;
	}
	for(j = 0; j < n ; j++ ){
			cout<<x[j]<<",";
	}

	
}

