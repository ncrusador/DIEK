#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	short option;
	
	printf("--------------------\n ERGASIA ERGASTHRIO \n--------------------\n");
	
	do {
		printf("\n*********************************\n");
		printf("** (0) Exit                    **\n** (1) Askisi 1                **\n** (2) Askisi 2                **\n** (3) Askisi 3                **\n");
		printf("** (4) Askisi 4                **\n*********************************\n");
		printf("Choose: ");
		scanf ("%hd", &option);
		switch(option) {
			case 1: { // AKSKHSH 1
				
				int x, y, sum, i;
				
				printf("\n ~ASKISI 1~\n");
				printf("\nGive 2 integers\n-> ");
				scanf("%d %d", &x, &y); // x = start, y = end
				
				if(x>y) { // an ta akra dwthikan antestramena, swap
					i = x;
					x = y;
					y = i;
				}
				if(y-x==1) { // an plithos = 0, dld an ta anoixta akra apexoun kata 1
					printf("No numbers added\nSum (%d,%d): -\n\n", x, y);
					break;
				}
				
				sum = 0;
				for(i=x+1; i<y; i++) {
					sum += i;
				}
				
				printf("Added %d numbers.\nSum [%d,%d]: %d\n\n", y-x-1, x+1, y-1, sum); //plithos = (y-1) - (x+1) + 1 = y-1-x-1+1 = y-x-1
				system("pause");
				break;
			}
			case 2: { // AKSKHSH 2
				
				short foithtes, i, plithos;
				float grade, min, max, sum;
				
				printf("\n ~ASKISI 2~\n");
				printf("\nGive students' amount (1-30)\n");
				do {
					printf("-> ");
					scanf("%hd", &foithtes);
				} while((foithtes<1)||(foithtes>30)); // mathites apo 1-30 gia apofugh lathwn h megalwn arithmwn
				
				printf("Give student's grade [0-10]:\n");
				sum = 0;
				plithos = 1; // plithos foithtwn pou exoun max vathmo
				for(i=1; i <= foithtes; i++) {
					do {
						printf("(%hd/%hd)-> ", i, foithtes);
						scanf("%f", &grade);
					} while((grade<0)||(grade>10));
					
					sum += grade;
					
					if(i==1) { // arxikopoihsh metavlhtwn sthn 1h epanalhpsh
						max = min = grade;
					}
					else {
						if(grade==max) { // plithos autwn poy exoyn max vathmo
							plithos++;
						}
						else if(grade>max) { // euresh kainouriou max, arxikopoihsh plithous pali
							max = grade;
							plithos = 1;
						}
						if(grade<min) {
							min = grade;
						}
					}
				}
				
				printf("\nMin: %.2f\n", min);
				printf("Max: %.2f (x%hd)\n", max, plithos);
				printf("Average: %.2f\n\n", sum/foithtes);
				system("pause");
				break;
			}
			case 3: { // AKSKHSH 3
				
				short i, j, count, prnt;
				
				printf("\n ~ASKISI 3~\n");
				printf("\n Choose print format:\n1. One by one\n2. Fit to screen\n");
				scanf("%hd",&prnt);
				
				if(prnt==1) { // one by one
					for(i=1; i<=10; i++) {
						printf("\n    <%hd>\n",i);
						for(j=1; j<=10; j++) {
							printf(" %2hd*%2hd=%3hd\n", i, j, i*j);
						}
					}
				}
				else { // fit to screen
					
					printf("\n# # # # # # # # # #  PINAKAS PROPAIDEIAS  # # # # # # # # # #\n");
					printf("#    <1>         <2>         <3>         <4>         <5>    #\n");
					count = 0;
					for(i=1; i<=10; i++) {
						for(j=1; j<=5; j++) {
							if(count==5) { // telos grammhs
								printf(" #\n");
								count = 0;
							}
							else if((count>0)&&(count<5)) { // endianmeses theseis
								printf(" |");
							}
							if(!count) { // kainouria grammh
								printf("#");
							}
							printf(" %2hd*%2hd=%3hd", i, j, i*j);
							count++;
						}
					}
					printf(" #\n#                                                           #\n");
					printf("#    <6>         <7>         <8>         <9>         <10>   #\n");
					count = 0;
					for(i=1; i<=10; i++) {
						for(j=6; j<=10; j++) {
							if(count==5) {
								printf(" #\n");
								count = 0;
							}
							else if((count>0)&&(count<5)) {
								printf(" |");
							}
							if(!count) {
								printf("#");
							}
							printf(" %2hd*%2hd=%3hd", i, j, i*j);
							count++;
						}
					}
					printf(" #\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #\n\n");
				}
				printf("\n");
				system("pause");
				break;
			}
			case 4: { // AKSKHSH 4
				
				short i, summetrikos, size;
				
				printf("\n ~ASKISI 4~\n");
				printf("\nGive array's size\n");
				do {
					printf("-> ");
					scanf("%hd", &size);
				} while(size<1); // megethos pinaka
				
				int A[size], sum;
				
				sum = 0;
				printf("\nGive %hd integers:\n", size);
				for(i=0; i<size; i++) {
					printf("(%hd/%hd): ", i+1, size);
					scanf("%d", &A[i]);
					sum += A[i];
				}
				
				summetrikos = 0;
				for(i=0; i<size/2; i++) {
					if(A[i]==A[size-1-i]) { // elegxos se zeugaria, ara size/2 sugkriseis
						summetrikos++;
					}
				}
				if(summetrikos==size/2) { // akomh ki an size=perittos pali h akeraia timh einai swsth. To mesaio stoixeio enos pinaka perittwn-thesewn einai summetriko me ton eauto tou opote de to prosmetrw
					printf("\n\nArray is symnmetric!");
				}
				else {
					printf("\n\nArray is NOT symnmetric.");
				}
				printf("\n\nSum = %d\nAvg = %.2f", sum, (sum+0.0)/size);
				
				printf("\n\n");
				system("pause");
				break;
			}
		}
	} while(option);
	
	printf("\n\n- Sarikas Nikolaos, TEP A1, 6914\n         Kalh Xronia!!\n\n");
	system("pause");
	return 0;
}