#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Somador infinito at� que voc� digite o n�mero 22 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i=1;
	float num, total;
	
	while(i!=0){
		printf("Digite %d numero: ", i++);
		scanf("%f", &num);
		if(num==22){
			i=0;
		}
		
		total=total+num;
	}
	printf("O valor total digitado � %.2f", total);
	return 0;
}
