#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int campo[n];
	
	for(int i = 0; i < n; i++){
		cin >> campo[i];
	}
	
	for(int i = 0; i < n; i++){
			int cont = 0;
			cont = cont + campo[i];
			
			if( i > 0){
				
				cont = cont + campo[i-1];
			}
			
			if(i < n-1){
				cont = cont + campo[i+1];
			}
			cout << cont << endl;
		}		
}