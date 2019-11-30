#include<iostream>
using namespace std;
int main(){
	
	int nilai [6]={8, 5, 2, 4, 5, 7};
	int jumlah = 0;
	int dikali =1;
	
	for(int i=0; i<6; i++){
		
		jumlah=jumlah+nilai[1];
		dikali=dikali*nilai[i];
	}
	cout<<"hasil penjumlahannya = "<<jumlah;
	cout<<"hasil perkalian = " <<dikali;
	
	return 0;
}
