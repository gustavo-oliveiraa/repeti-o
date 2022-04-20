#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	float nota[10], maior, menor;
	int i=0, tam=0;
	char sair = 'n';
	//char continuar = 's'
	
	do{		
		printf("Digite a nota %d:", i+1);
		scanf("%f", &nota[i]);
		i++;
			
		printf("Deseja continuar (s/n):");
		scanf("%c", &sair);
		
	}while(i < 10 || sair != 's');
	//}while(i < 10 && continuar == 's');


	printf("-----------------\n");

	tam = i;

	for(i=0; i<tam; i++){
//printf("Nota %d: %.1f", i+1, notas[i]);
	
	if(i==0){
		menor=nota[i];
		maior=nota[i];
	}else{
		if(nota[i] < menor){
		menor=nota[i];
	}
	if(nota[i] > maior){
		menor=nota[i];
	}
}
}
printf("-------------------\n");
printf("A menor nota informada foi: %1.f\n", menor);
printf("A maior nota informada foi: %1.f\n", maior);


return 0;
}



	/*if(maior < nota[i]){
			maior = nota[i];
		}	
		
		else if(menor > nota[i]){
			menor = nota[i];
		}
		
	printf("A menor nota e %f.\n", menor);
	printf("A maior nota e %f.\n", maior);
	*/

