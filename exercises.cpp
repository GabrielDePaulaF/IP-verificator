#include<stdio.h>
#include<string.h>
#include<locale.h>
int ip[50];
int c,i;
main(){
	
	setlocale(LC_ALL,"portuguese");
	
		printf("Digite o número de ip:\n");
		scanf("%d", &ip[i]);
		
		for(c=0;c<=2;c++){
			if ((ip[c]>=1) && (ip[c]<=126)){
			printf("O endereço de IP é d classe A \n");
			printf("Numeros de endereço por rede é: 16,777,214(224-2)");
		 	}	
		 
		}
		
		for(c=0;c<=2;c++){
			
		 	if ((ip[c]>=128) && (ip[c]<=191)){
			 printf("O endereço de IP é d classe B \n");
			 printf("Numeros de endereço por rede é: 65,534(226-2)");
		 	}	
		}
		
		for(c=0;c<=2;c++){
			if ((ip[c]>=192) && (ip[c]<=223)){
			printf("O endereço de IP é d classe C \n");
			printf("Numeros de endereço por rede é: 254(28-2)");
		 	}	
		}
		for(c=0;c<=2;c++){
			if ((ip[c]>=224) && (ip[c]<=239)){
			printf("O endereço de IP é d classe D \n");
			printf("Numeros de endereço por rede é: NA");
		 	}	
		}
		for(c=0;c<=2;c++){
			if ((ip[c]>=240) && (ip[c]<=255)){
			printf("O endereço de IP é d classe E \n");
			printf("Numeros de endereço por rede é: NA");
		 	}	
		}
}