#include <stdio.h>
#include <stdlib.h>

struct crono{
	int hora;
	int minuto;
	int segundo;
	int milesimo;
};

int main(){
	
	struct crono h(struct crono h);
	struct crono min(struct crono min);
	struct crono seg(struct crono seg);
	int op, x=0;

	struct crono momento;
	momento.hora=0;
	momento.minuto=0;
	momento.segundo=0;
	momento.milesimo=0;
	


	while(x==0){
	system("cls");
	
	printf("%d: %d: %d\n", momento.hora, momento.minuto, momento.segundo);
	printf("Oque deseja\n");
	printf("1-Cronometrar Hora\n");
	printf("2-Conometrar Minutos\n");
	printf("3-Conometrar Segudos\n");
	printf("Opcao: ");
	scanf("%d", &op);
	
	switch(op){
	
		case 1: 
				h(momento);
				break;
		case 2:
				min(momento);
				break;	
		case 3: 
				seg(momento);
				break;	
				
		default: printf("Opcao invalida\n");					
	}
	printf("0-Continuar\n1-Sair\n");
	scanf("%d", &x);
	}
	return 0;
}

struct crono h(struct crono h){
	
	int x;
	
	printf("Cronometro da hora\n");
	printf("Adcione a hora\n");
	scanf("%d", &x);
	
	printf("%d: %d: %d", h.hora, h.minuto, h.segundo);
	
		while(x!=h.hora){
		
		printf("%d: %d: %d\n", h.hora, h.minuto, h.segundo);
		++h.milesimo;
		if(h.milesimo==60){
			++h.segundo;
			h.milesimo=0;
		}
		if(h.segundo==60){
			++h.minuto;
			h.segundo=0;
		}
		
		if(h.minuto==60){
			++h.hora;
			h.minuto=0;
		}
		system("cls");
		
	}
	printf("%d: %d: %d\n", h.hora, h.minuto, h.segundo);	
	
	return h;
}

struct crono min(struct crono min){
	
	int x;
	
	printf("Insira o minuto\n");
	scanf("%d", &x);
	
	while(x!=min.minuto){
		
		printf("%d: %d\n", min.minuto, min.segundo);
		++min.milesimo;
		if(min.milesimo==60){
			++min.segundo;
			min.milesimo=0;
		}
		if(min.segundo==60){
			++min.minuto;
			min.segundo=0;
		}
		
		system("cls");
		
	}
	
		printf("%d: %d\n", min.minuto, min.segundo);
	return min;
}

struct crono seg(struct crono seg){
	
	int x;
	
	printf("Insira a quantidade de segundos\n");
	scanf("%d", &x);
	
	while(x!=seg.segundo){
		printf("%d: %d\n", seg.segundo, seg.milesimo);
		++seg.milesimo;
		if(seg.milesimo==60){
			++seg.segundo;
			seg.milesimo=0;
		}
		system("cls");
	}
		printf("%d: %d\n", seg.segundo, seg.milesimo);
	
	return seg;
	
}


