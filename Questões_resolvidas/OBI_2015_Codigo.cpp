 #include <iostream>
 #include <cmath>
 
 using namespace std;
 
 int main(){
 	
 	int n, contador = 0;
   cin >> n;
  
  int seq[n]; // garanto que minha sequência terá a quantidade exata de leituras
  for(int i = 0; i < n; i++){
    cin >> seq[i];
  }
  //A primeira condição garante que não vou acessar uma posiçao indevida no meu vetor.
  for(int i = 0; i < n; i++){
    if(i < n-2){
        if(seq[i] == 1 && seq[i+1] == 0 && seq[i+2] == 0){
          contador++;
        }
    }
  }
      cout << contador << endl;
 }