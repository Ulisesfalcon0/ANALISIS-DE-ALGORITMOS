#include <stdio.h>

int invertir (int n){
	int r, m = 0;
	//int nn [] = {1,2,3,4,5,6,7,8,9};
	while (n>0){
		r = n%10;
		m = m*10+r;
		n = n/10;
	}
	return m;
}
	
	int main() {
		int horas= 0, minutos=0, contador=0, i, iteraciones=0;
		
		while(horas <24){
			for (i = 0;i<59;i++){
				contador = contador +1;
				minutos = contador;
				if (horas == invertir(minutos) && minutos>9|| invertir(horas) == minutos && horas>9){
					printf("\n %.2i : %.2i", horas, minutos);
					iteraciones++;
				}
			}
			if (minutos == 59){
				contador = 0;
				minutos = 0;
				horas = horas+1;
			}
			//printf("\n%i : %i",horas, minutos);
		}
		printf("\n Los palíndromos que tienen son : %i", iteraciones);
	}
