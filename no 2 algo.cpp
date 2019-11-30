#include <iostream>
using namespace std;
int main(){
	int nilai []={8, 5, 2, 4, 5, 7};
	int i;
	int jumlah = sizeof (nilai)/sizeof (int);
	
	for (i=0; i<=jumlah; i++)
	cout<<nilai[i]<<endl;
	
	return 0;
}
