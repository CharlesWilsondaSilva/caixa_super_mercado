#include<stdio.h>
main(){
	int op,n_produtos,quant;
	float preco,preco_total,total,pago;
	 op = 1 ;
	 n_produtos = 0 ;
	 total = 0 ;
	 while(op != 0 ){
	 	printf("Entre com o preco do produto:  \n");
	 	      scanf("%f",&preco);
	 	printf("Entre com a quantidade de produtos:   \n");
	 	      scanf("%d",&quant);
	 	           n_produtos = n_produtos + quant  ;
	 	preco_total = preco * quant ; 
	 	total = total + preco_total ;
		
	 printf("Deseja continuar : 1 = Sim, 0 = Nao \n");
	       scanf("%d",&op); 
	 }
	 printf("Total :   %.2f \n", total);
	       printf("\n");
	 printf("Numero de produtos :   %d\n",n_produtos);
	       printf("\n");
	 printf("Digite o valor pago pelo cliente:  \n");
	       scanf("%f",&pago);
	       printf("\n");
	 printf("O troco a ser devolvido e':    %.2f\n",pago = pago - total);
	       
}
