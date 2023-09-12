
#include <stdio.h>

int main() {

int codigo, quantidade;
  float pedido;
  printf("Faça o seu pedido\n");
  printf("100 Cachorro quente R$ 10,10\n");
  printf("101 Bauru simples R$ 8,30\n");
  printf("102 Bauru c/ovo R$ 8,50\n");
  printf("103 Hamburger R$ 12,50\n");
  printf("104 cheeseburger R$ 13,50\n");
  scanf("%f", &pedido);
printf("Digite a quantidade:\n");
  scanf("%d", &quantidade);

  
  switch(codigo){
    case 100:
      pedido = quantidade * 10.10;
    printf("O valor total é: %.2f", pedido);
    break;
    case 101: 
    pedido = quantidade * 8.30;
    printf("O valor do pedido é: %.2f", pedido);
    break;
    case 102:
    pedido = quantidade * 8.50;
    printf("O valor do pedido é: %.2f", pedido);
    break;
    case 103:
    pedido = quantidade * 12.50;
    printf("O valor do pedido é: %.2f", pedido );
    break;
    case 104:
    pedido = quantidade * 13.50;
    printf("O valor do pedido é: %,2f", pedido);
    break;
    default:
    printf("Nenhum dos codigos são correspondentes");
  }
  
}
