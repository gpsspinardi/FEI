#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <iostream>
 using namespace std;
 
 int ehprimo(int numero) {
 
	 if (numero == 1){
 		return 1;
	 }
  int limite = (int)sqrt(numero);
	for (int i = 2; limite ; i++) {
		if (numero % i == 0)
			return 0;
	}
	return 1;
	

}
 
int main() {
	while (1){
	
	float m,c;
	int x, n;
		int z = 1;
	clock_t tempo_inicial, tempo_final;
 cout<<"Entre numero a ser analisado: ";
 cin>>n;
 while (z<=30){
	tempo_inicial = clock();
	printf("%d\n", ehprimo(n));
		tempo_final = clock();
		float r = (double)(tempo_final - tempo_inicial)/ (CLOCKS_PER_SEC/1000);
		
	printf("Valor %d: %lf\n", z, r);
	c = c+r;
 z++;
 
}
m=c/30;
printf("Media: %lf\n", m);
}
return 0;
}
