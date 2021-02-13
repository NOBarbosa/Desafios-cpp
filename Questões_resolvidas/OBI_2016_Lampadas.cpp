#include <iostream>

using namespace std;

int main(){
	
	int click, interruptor, i1 = 0, i2 = 0, clicks;
	
	cin >> click;
    /* A lâmpada  A ficará acesa se a quantidade de clicks totais for impar, e apagada caso par. Já a lâmpada B é acesa caso a quantidade de '2' seja impar e apagará, do contrário.*/
	
	for( int i = 0; i < click; i++){
		
		cin >> interruptor;
		
		if(interruptor == 1){
			i1++;
		}
		if(interruptor == 2){
			i2++;
		}
	}
	clicks = i1+i2;
	if(clicks%2 == 0){
		
		cout << 0 << endl;
	}
	else{
		cout << 1 << endl;
	}
	
	if(i2%2 == 0){
		
		cout<< 0 << endl;
	}
	else{
		cout << 1 << endl;
	}
}