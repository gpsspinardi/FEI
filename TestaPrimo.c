//
// TestaPrimo.c
// TestaPrimo
//
//  Created by Ricardo de Carvalho Destro on 12/08/20.
//  Copyright © 2020 Ricardo de Carvalho Destro. All rights reserved.
//

#include "TestaPrimo.h"

/* Convencao: EhPrimo = 1 se o numero dado 'e primo */
/*  EhPrimo = 0 se o numero dado nao 'e primo       */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>




int TestaPrimo(int n) {
	
    int EhPrimo = 1,
        d=2;
    if (n <= 1)
    
    EhPrimo = 0;

    while (EhPrimo == 1 && d <= n /2) {
    		
    if (n % d  == 0)
        EhPrimo = 0;
    d = d + 1;
    
    }
  
    return EhPrimo;
}

   
int main(){
	  while (1){
	  
	float r[30];
	float m,c,dp1,dp2, dp3, t;
	int x, n;
		int z = 1;
	clock_t tempo_inicial, tempo_final;
 printf("Entre numero a ser analisado: ");
 scanf("%d", &n);
 for (z=1; z<=30;z++){
	tempo_inicial = clock();
	printf("%d\n", TestaPrimo(n));
		tempo_final = clock();
		 r[z] = (double)(tempo_final - tempo_inicial)/(CLOCKS_PER_SEC/1000);
		
	printf("Valor %d: %lf\n", z, r[z]);
	c = c+r[z];
	
}

m=c/30;
 for (z=1; z<=30;z++){
dp1 = dp1+(m-r[z])*(m-r[z]);
}
dp2 = dp1/30;
printf("Media: %lf\n", m);
dp3 = sqrt(dp2);
printf("Desvio Padrao: %lf\n\n", dp3);}
return 0;
}
