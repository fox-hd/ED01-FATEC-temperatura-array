#include <stdio.h>
#include <stdlib.h>

int main()
{

    float temp [10][3];
	int temp_max = 0, temp_min = 1, media = 2;
	int count, option, variacao_a, variacao_b = 0;
	
	
	for (count = 0; count <10; count++){
		printf("Digite a temperatura maxima do %i dia:\n", count+1);
		scanf("%f", &temp[count][temp_max]);
		printf("Digite a temperatura minima do %i dia:\n", count+1);
		scanf("%f", &temp[count][temp_min]);
		temp[count][media]= (temp[count][temp_max] + temp[count][temp_min])/2;
		variacao_a = temp[count][temp_max] - temp[count][temp_min];
		if(variacao_a > variacao_b){
			variacao_b = variacao_a;
			}
		}
	do{
		printf("Escolha uma opcao:\n1. Temperatura minima de todos os dias\n2. Temperatura maxima de todos os dias\n3. Media das temperaturas dos dias\n4. Maior variacao de Temperatura\n5. Sair do programa\n");
		scanf("%i", &option);
		switch (option){
			case 1:
				for (count = 0; count <10; count++){
				printf("Temperatura minima do %i dia eh %.2f\n", count, temp[count][temp_min]);
				}
				break;
			case 2:
				for (count = 0; count <10; count++){
				printf("Temperatura maxima do %i dia eh %.2f\n", count, temp[count][temp_max]);
				}
				break;
			case 3:
				for (count = 0; count <10; count++){
				printf("Temperatura media do %i dia eh %.2f\n", count, temp[count][media]);
				}
				break;
			case 4:
				printf("A maior variacao foi de %i\n", variacao_b);
				break;	
			case 5:
				printf("Fim do progama");
				break;
			default:
			printf("Opcao invalida");
		}
	}
	while (option!=5);
    return 0;
}

