/*	Nama	: Alvin
	NPM		: 140810180013
	Kelas	: A
	Program	: Representasi Graph dengan Matrix
*/
#include<iostream>
using namespace std;

int main(){
	int m[8][8] = {
	{0,1,1,0,0,0,0,0},
	{1,0,1,1,1,0,0,0},
	{1,1,0,0,1,0,1,1},
	{0,1,0,1,1,0,0,0},
	{0,1,1,1,0,1,0,0},
	{0,0,0,0,1,0,0,0},
	{0,0,1,0,0,0,0,1},
	{0,0,1,0,0,0,1,0}
	};
	cout<<"MATRIX-ADJACENCY\n"<<endl;
	for(int i=0;i<8;i++){
		for(int j=0; j<8;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
