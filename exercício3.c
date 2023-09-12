#include <stdio.h>

int main() {
  int prato, sobremesa, bebida, caloria;

  printf("escolha o codigo para o prato:");
  printf("\n1- Vegetariano "); 
  printf("\n2- Peixe");
  printf("\n3- Frango");
  printf("\n4- Carne\n\n");
  scanf("%d", &prato);

  printf("\nescolha o codigo para a sobremesa:");
  printf("\n1- Abacaxi "); 
  printf("\n2- Sorvete diet");
  printf("\n3- Mousse diet");
  printf("\n4- Mousse chocolate\n\n");
  scanf("%d", &sobremesa);

  printf("\nescolha o codigo para a bebida:");
  printf("\n1- Chá"); 
  printf("\n2- Suco de laranja");
  printf("\n3- Suco de melão");
  printf("\n4- Refrigerante diet\n\n");
  scanf("%d", &bebida);

  switch(prato){
    case 1 :
     if( sobremesa == 1 && bebida == 1 ){
       caloria = 180 + 75 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 2){
       caloria = 180 + 75 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 3){
       caloria = 180 + 75 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 4){
       caloria = 180 + 75 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if( sobremesa == 2 && bebida == 1 ){
       caloria = 180 + 110 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 2){
       caloria = 180 + 110 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 3){
       caloria = 180 + 110 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 4){
       caloria = 180 + 110 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if( sobremesa == 3 && bebida == 1 ){
       caloria = 180 + 170 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 2){
       caloria = 180 + 170 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 3){
       caloria = 180 + 170 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 4){
       caloria = 180 + 170 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if( sobremesa == 4 && bebida == 1 ){
       caloria = 180 + 200 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 2){
       caloria = 180 + 200 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 3){
       caloria = 180 + 200 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 4){
       caloria = 180 + 200 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }
    break;
    case 2:
      if( sobremesa == 1 && bebida == 1 ){
       caloria = 230 + 75 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 2){
       caloria = 230 + 75 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 3){
       caloria = 230 + 75 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 4){
       caloria = 230 + 75 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if( sobremesa == 2 && bebida == 1 ){
       caloria = 230 + 110 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 2){
       caloria = 230 + 110 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 3){
       caloria = 230 + 110 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 4){
       caloria = 230 + 110 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if(sobremesa == 3 && bebida == 1 ){
       caloria = 230 + 170 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 2){
       caloria = 230 + 170 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 3){
       caloria = 230 + 170 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 4){
       caloria = 230 + 170 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 1 ){
       caloria = 230 + 200 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 2){
       caloria = 230 + 200 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 3){
       caloria = 230 + 200 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 4){
       caloria = 230 + 200 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }
    break;
    case 3:
      if(sobremesa == 1 && bebida == 1 ){
       caloria = 250 + 75 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 2){
       caloria = 250 + 75 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 3){
       caloria = 250 + 75 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 4){
       caloria = 250 + 75 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 1 ){
       caloria = 250 + 110 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 2){
       caloria = 250 + 110 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 3){
       caloria = 250 + 110 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 4){
       caloria = 250 + 110 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 1 ){
       caloria = 250 + 170 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 2){
       caloria = 250 + 170 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 3){
       caloria = 250 + 170 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 4){
       caloria = 250 + 170 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 1 ){
       caloria = 250 + 200 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 2){
       caloria = 250 + 200 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 3){
       caloria = 250 + 200 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 4){
       caloria = 250 + 200 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }
    break;
    case 4:
      if (sobremesa == 1 && bebida == 1 ){
       caloria = 350 + 75 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 2){
       caloria = 350 + 75 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 3){
       caloria = 350 + 75 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 1 && bebida == 4){
       caloria = 350 + 75 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 1 ){
       caloria = 350 + 110 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 2){
       caloria = 350 + 110 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 3){
       caloria = 350 + 110 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 2 && bebida == 4){
       caloria = 350 + 110 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 1 ){
       caloria = 350 + 170 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 2){
       caloria = 350 + 170 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 3){
       caloria = 350 + 170 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 3 && bebida == 4){
       caloria = 350 + 170 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 1 ){
       caloria = 350 + 200 + 20;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 2){
       caloria = 350 + 200 + 70;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 3){
       caloria = 350 + 200 + 100;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }else if (sobremesa == 4 && bebida == 4){
       caloria = 350 + 200 + 65;
         printf("o total de calorias dessa refeição é: %d", caloria);
     }
    break;
  }

  
}
