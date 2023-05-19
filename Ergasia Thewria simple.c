#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int option;
	
	printf("Epilekse askisi:\n");
	do { // vgaze to menu se kathe epanalipsh
		printf("\n1 Ypologismos Emvadoy\n2 Metatroph Thermokrasias\n3 Arithmomhxanh\n4 Ypologismos Thermokrasias\n5 Eksodos\n"); // menu
		printf("Choose: ");
		scanf ("%d", &option); // epithumia xrhsth
		switch(option) {
			case 1: { // YPOLOGISMOS EMVADOY
				float x, y;
				
				printf("\nDwse vash & upsos trigwnou:\n");
				do {
					scanf("%f %f", &x, &y);
				} while((x<=0)||(y<=0)); // an einai oi pleyres arnhtikes H 0, tote try again mexri na dwseis swsto input
				
				printf("\nTo Emvado einai %f\n\n", x*y/2);
				system("pause");
				break;
			}
			case 2: { // METATROPH THERMOKRASIAS
				float temp;
				
				printf("\nDwse thermokrasia: ");
				scanf("%f", &temp);
				
				if(temp<-273.15)
					printf("\nAdunath thermokrasia Celsius.\n\n"); // error
				else
					printf("\n> (%.2f)Celsius = (%.2f)Fahrenheit.\n\n", temp, (1.8*temp) + 32);
				system("pause");
				break;
			}
			case 3: { // CALCULATOR
				char telestis;
				float x, y;
				
				printf("\n\nEpilekse praksi: + - * /\n-> ");
				scanf(" %c", &telestis);
				switch(telestis) {
					case '+': { // prosthesh
						printf(" ~Prosthesh~\nDwse 2 arithmous:\n->");
						scanf("%f %f", &x, &y);
						printf("\n %.2f + %.2f = %.2f", x, y, x+y);
						break;
					}
					case '-': { // afairesh
						printf(" ~Afairesh~\nDwse 2 arithmous:\n->");
						scanf("%f %f", &x, &y);
						printf("\n %.2f - %.2f = %.2f", x, y, x-y);
						break;
					}
					case '*': { // ginomeno
						printf(" ~Ginomeno~\nDwse 2 arithmous:\n->");
						scanf("%f %f", &x, &y);
						printf("\n %.2f * %.2f = %.2f", x, y, x*y);
						break;
					}
					case '/': { // diairesh
						printf(" ~Diairesh~\nDwse 2 arithmous:\n->");
						scanf("%f %f", &x, &y);
						
						if(y==0) // an o diaireths einai 0 tote error
							printf("\nAdunath Diairesh!");
						else
							printf("\n %.2f / %.2f = %.4f", x, y, x/y);
						break;
					}
					default: {
						printf("\nDen vrethike tetoios telestis\n");
						break;
					}
				}
				printf("\n");
				system("pause");
				break;
			}
			case 4: { // YPOLOGISMOS THERMOKRASIAS
				int i;
				float max, min, sum=0, A[7];
				
				printf("\nDwse 7 thermokrasies se Celsius:\n");
				for(i=0; i<7; i++) {
					do {
						scanf("%f", &A[i]);
					} while(A[i]<-273.15); // elegxos katwtaths dunaths thermokrasias se Celsius
					
					if(i==0) max = min = A[0]; // arxikopoihsh max & min sthn 1h epanalhpsh
					if(max<A[i]) max=A[i]; // elegxos max
					if(min>A[i]) min=A[i]; // elegxos min
					sum += A[i];
				}
				printf("\n");
				for(i=0; i<7; i++) { // ektupwsh pinaka
					printf(" %f\n",A[i]);
				}
				printf("\n\nMin is %f\nMax is %f\nAvg is %f\n\n", min, max, sum/7);
				system("pause");
				break;
			}
		}
	} while(option!=5); // opoy 5 einai Eksodos sto menu
	
	printf("\nB y e !\n");
	system("pause\n");
	return 0;
}
// to menu me anoigmenh thn 2h askish