#include <iostream>
using namespace std;

int main(){
	
 	 int dias, x = 1, acessos = 0, cont = 0;
	
	cin >> dias;
	
	while(x <= dias){
		cin >> acessos;
		cont+= acessos;
		if (cont >= 1000000){
		    break;
		}
		x++;
	}
	cout << x <<endl;
}