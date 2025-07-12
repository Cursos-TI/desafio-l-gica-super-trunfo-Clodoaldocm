#include <stdio.h>

int main()
{
        char estado1, estado2;
	char codigo1[10], codigo2[10];
	char nomeCidade1[50], nomeCidade2[50];
	unsigned int nPopulacao1, nPopulacao2;
	float area1, area2;
	float pib1, pib2;
	int pTuristico1, pTuristico2;
	float densidPop1, densidPop2, pibPcapta1, pibPcapta2;
	double superPoder1, superPoder2;
	int comp, escolha;
//========= CARTA 1 ===========================	
	printf("DIGITAR DADOS DA CARTA 1:\n");
	printf("Letra do Estado: ");
	scanf("%c",&estado1);
	
	printf("Codigo da carta (letra do estado mais um número): ");
	scanf("%s",codigo1);
	
	printf("Nome da Cidade: ");
	scanf("%s",nomeCidade1);
	
	printf("População da Cidade: ");
	scanf("%d",&nPopulacao1);
	
	printf("Área (km^2): ");
	scanf("%f",&area1);
	
	printf("PIB (em Bilhoes de R$:");
	scanf("%f",&pib1);
	
	printf("Número de pontos turisticos: ");
	scanf("%d",&pTuristico1);
	
	densidPop1 = nPopulacao1/area1;
	pibPcapta1 = pib1/nPopulacao1*1000000000.0;
	superPoder1 = (double) nPopulacao1 + (double) area1 + (double) pib1 + (double) pTuristico1 + (double) pibPcapta1 + ( 1 / (double)densidPop1);

//======== CARTA 2 ============================	

	printf("\nDIGITAR DADOS DA CARTA 2:\n");
	printf("Letra do Estado: ");
	scanf("%c",&estado2);
	scanf("%c",&estado2); //se não colocar duas o programa pula para p próximo direto (????)

	printf("Codigo da carta (letra do estado mais um número): ");
	scanf("%s",codigo2);
	
	printf("Nome da Cidade: ");
	scanf("%s",nomeCidade2);
	
	printf("População da Cidade: ");
	scanf("%d",&nPopulacao2);
	
	printf("Área (km^2): ");
	scanf("%f",&area2);
	
	printf("PIB (em Bilhoes de R$:");
	scanf("%f",&pib2);
	
	printf("Número de pontos turisticos: ");
	scanf("%d",&pTuristico2);

	densidPop2 = nPopulacao2/area2;
	pibPcapta2 = pib2/nPopulacao2*1000000000.0;
	superPoder2 = (double) nPopulacao2 + (double) area2 + (double) pib2 + (double) pTuristico2 + (double) pibPcapta2 + ( 1 / (double)densidPop2);


//======= PRINT DADOS DA CARTA 1 ================
	printf("\nCarta 1:\n");
	printf("- Letra do Estado: %c\n",estado1);
	printf("- Código da Carta: %s\n",codigo1);
	printf("- Nome da Cidade: %s\n", nomeCidade1);
	printf("- População: %d\n",nPopulacao1);
	printf("- Área da Cidade: %.2f km^2\n",area1);
	printf("- PIB: %.2f bilhoes de reais\n",pib1);
	printf("- Pontos turisticos: %d\n", pTuristico1);
	printf("- Densidade Populacional: %.2f hab/km^2\n", densidPop1);
	printf("- PIB per Capita: %.2f reais\n", pibPcapta1);
	printf("- Super Poder: %0.15f\n",superPoder1);

//======= PRINT DADOS DA CARTA 2 ================
	printf("\nCarta 2:\n");
	printf("- Letra do Estado: %c\n",estado2);
	printf("- Código da Carta: %s\n",codigo2);
	printf("- Nome da Cidade: %s\n", nomeCidade2);
	printf("- População: %d\n",nPopulacao2);
	printf("- Área da Cidade: %.2f km^2\n",area2);
	printf("- PIB: %.2f bilhoes de reais\n",pib2);
	printf("- Pontos turisticos: %d\n", pTuristico2);
	printf("- Densidade Populacional: %.2f hab/km^2\n", densidPop2);
	printf("- PIB per Capita: %.2f de reais\n", pibPcapta2);
	printf("- Super Poder: %.15f\n", superPoder2);

//======= COMPARAÇÃO ============================
	printf("\nComparação de Cartas:\n");
	//escolha da comparação 1-Populção, 2-Area, 3-PIB, 4-Densidade, 5-PIB per Capita
	escolha = 4;
//printf("Escolha: %d\n",escolha);	
	if(escolha == 1) {
		//printf("TESTE\n");
		printf("Carta 1 - %s: %d\n", nomeCidade1, nPopulacao1);
		printf("Carta 2 - %s: %d\n", nomeCidade2, nPopulacao2);
		comp = nPopulacao2 > nPopulacao1;
		printf("Resultado: Carta %d venceu!\n",comp+1);
	}
	if(escolha == 2){
		printf("Carta 1 - %s: %f\n", nomeCidade1, area1);
		printf("Carta 2 - %s: %f\n", nomeCidade2, area2);
		comp = area2 > area1;
		printf("Resultado: Carta %d venceu!\n", comp+1);
	}
	if(escolha == 3){
		printf("Carta 1 - %s: %f\n", nomeCidade1, pib1);
		printf("Carta 2 - %s: %f\n", nomeCidade2, pib2);
		comp = pib2 > pib1;
		printf("Resultado: Carta %d venceu!\n", comp+1);
	}
	if(escolha == 4){
		printf("Carta 1 - %s: %f\n", nomeCidade1, densidPop1);
		printf("Carta 2 - %s: %f\n", nomeCidade2, densidPop2);
		comp = densidPop1 > densidPop2;
		printf("Resultado: Carta %d venceu!\n", comp+1);
	}

	if(escolha == 5){
		printf("Carta 1 - %s: %f\n", nomeCidade1, pibPcapta1);
		printf("Carta 2 - %s: %f\n", nomeCidade2, pibPcapta2);
		comp = pibPcapta2 > pibPcapta2;
		printf("Resultado: Carta %d venceu!\n", comp+1);
	}
	
	/*comp = superPoder2 > superPoder1;
	printf("Super Poder: Carta %d venceu!\n", comp+1);
	*/	
		
	return 0;
}
