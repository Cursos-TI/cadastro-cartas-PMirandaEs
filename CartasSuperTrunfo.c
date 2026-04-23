#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   //inicialização das váriaveis 

   char Sigla_Estado1, Sigla_Estado2, Codigo_Carta1[5],
   Codigo_Carta2[5], Nome_Cidade1[40],Nome_Cidade2[40], buffer[50];

   int Populacao1, Populacao2, numero_pontos_turisticos1, numero_pontos_turisticos2;
   float Area1, pib1, Area2, pib2;

   printf("Criação da primeira carta do Super Trunfo!!!\n\n"); 

   //Utilizando o getchar para ler um único caractere
   printf("Informe a sigla do estado: \n");
   Sigla_Estado1 = getchar(); //ARMAZENAMENTO DO CARACTER
   
   getchar(); //limpar buffer

   //coleta dos dados e tratamento dos dados com a função fgets, juntamente com a remoção do espaço para nomes compostos.
   //para números foi utilizado a váriavel buffer para armazenar o dado informado e então converter para o valor desejado.
   // foi utilizado dessa maneira para evitar a utilização composta da função scanf e fgets para eliminar o armazenamento de buffer
   //que acontece durante o armazenamento e conversão de dados nas váriaveis pelo scanf. 
   

   //o sizeof foi utilizado para que o fgets não ultrapasse o tamanho do array, assim gerando bugs.
   printf("informe o nome da cidade: \n");
   fgets(Nome_Cidade1, sizeof(Nome_Cidade1), stdin);
   Nome_Cidade1[strcspn(Nome_Cidade1, "\n")] = 0;

   printf("Informe o código da carta: \n");
   fgets(Codigo_Carta1, sizeof(Codigo_Carta1), stdin);
   Codigo_Carta1[strcspn(Codigo_Carta1, "\n")] = 0;

   printf("Informe o PIB da cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%f", &pib1);
   
   printf("Informe a população da cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%i", &Populacao1);
   
   printf("Informe a área da cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%f", &Area1);
   
   printf("Informe a quantidade de pontos turisticos na cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%i", &numero_pontos_turisticos1);

   system("clear"); //limpar a tela do terminal com a biblioteca stdlib.h

   printf("Criação da segunda carta do Super Trunfo!!!\n\n"); 
    
   //coleta de informações da segunda carta do super trunfo

   printf("Informe a sigla do estado: \n");
   Sigla_Estado2 = getchar(); //ARMAZENAMENTO DO CARACTER
   
   getchar(); //limpar buffer

   printf("informe o nome da cidade: \n");
   fgets(Nome_Cidade2, sizeof(Nome_Cidade2), stdin);
   Nome_Cidade2[strcspn(Nome_Cidade2, "\n")] = 0;

   printf("Informe o código da carta: \n");
   fgets(Codigo_Carta2, sizeof(Codigo_Carta2), stdin);
   Codigo_Carta2[strcspn(Codigo_Carta2, "\n")] = 0;

   printf("Informe o PIB da cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%f", &pib2);
   
   printf("Informe a população da cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%i", &Populacao2);
   
   printf("Informe a área da cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%f", &Area2);
   
   printf("Informe a quantidade de pontos turisticos na cidade: \n");
   fgets(buffer, sizeof(buffer), stdin);
   sscanf(buffer,"%i", &numero_pontos_turisticos2);
   
   system("clear"); //limpar a tela do terminal com a biblioteca stdlib.h


   //Criação da primeira carta do super trunfo
   //Print das informações colhidas
   printf("Carta 1\n");
   printf("Estado: %c\n", Sigla_Estado1);
   printf("Código: %s\n", Codigo_Carta1);
   printf("Nome da Cidade: %s\n", Nome_Cidade1);
   printf("População: %i\n", Populacao1);
   printf("Área: %.2f km² \n", Area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %i\n", numero_pontos_turisticos1);


   printf("\n");
   //Criação da segunda carta do super trunfo
   //Print das informações colhidas
   
   printf("Carta 2\n");
   printf("Estado: %c\n", Sigla_Estado2);
   printf("Código: %s\n", Codigo_Carta2);
   printf("Nome da Cidade: %s\n", Nome_Cidade2);
   printf("População: %i\n", Populacao2);
   printf("Área: %.2f km² \n", Area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %i\n", numero_pontos_turisticos2);
   
   return 0;
}
