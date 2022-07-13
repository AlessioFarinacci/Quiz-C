#include <stdio.h>


int main() {

int a;
int b;
int c;

int y = 0; 
int x;
char u[20];

printf("SCOPO DEL GIOCO: Lo scopo del gioco e' di rispondere correttamente alle domande che verranno poste.\nAd ogni risposta esatta verra' sommato un punto ed il punteggio massimo e' 3.");
printf("\n\nIniziare una nuova partita(1) o uscire dal gioco(2)? Scegliere una opzione tra 1 e 2: ");
scanf("%d", &x);

while(x == 1){
		
		printf("\nInserire il nome dell'utente: ");
		scanf("%s", &u);
		
			printf("\n\nQuanto fa 5*5?\n\n1) 15\n2) 25\n3) 32\n\nInserire numero risposta: ");
			scanf("%d", &a);
			
			if(a == 2){
				y++;
			}
			else{
			}
			
			printf("\nDi che colore era il cavallo bianco di Napoleone?\n\n1) bianco \n2) nero \n3) viola\n\nInserire numero risposta: ");
			scanf("%d", &b);
			
			if(b == 1){
				y++;
			}
			else{
			}
			
			printf("\nPesa di piu' un chilo di piume o un chilo di ferro?\n\n1) piume \n2) ferro \n3) uguali\n\nInserire numero risposta: ");
			scanf("%d", &c);
			
			if(c == 3){
				y++;
			}
			else{
			}
		
			switch(y){	
				case 0:	printf("\n\nIl tuo punteggio e' %d. Ritenta %s, puoi fare di meglio!", u, y);
						
						break;
						
				case 1:	printf("\n\nIl tuo punteggio e' %d. Ritenta %s, puoi fare di meglio!", u, y);
						
						break;
							
				case 2:	printf("\n\nComplimenti %s, il tuo punteggio e' %d !!!", u, y);
						;
						break;
	
				case 3:	printf("\n\nComplimenti %s, il tuo punteggio e' %d !!!", u, y);
						
						break;
						
				default: printf("ERRORE NEL CALCOLO DEL PUNTEGGIO.");
			}
			printf("\n\n\nIniziare una nuova partita(1) o uscire dal gioco(2): ");
			scanf("%d", &x);
			printf("\n");
	}
	
	return 0;
	
}
