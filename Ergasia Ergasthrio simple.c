#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int option;
	
	do {
		printf("\n1. Askisi 1\n2. Askisi 2\n3. Askisi 3\n");
		printf("4. Askisi 4\n5. Eksodos\n");
		printf("Choose: ");
		scanf ("%d", &option);
		switch(option) {
			case 1: { // AKSKHSH 1
				
				int x, y, sum, i, plithos;
				
				printf("\nGive 2 integers\n-> ");
				scanf("%d %d", &x, &y); // x = start, y = end
				
				if(x>y) { // an ta akra pou edwse o xrhsths einai anapoda, den peirazei antestrapse ta k sunexise th douleia soy
					i = x;
					x = y;
					y = i;
				}
				// arxh: x+1 , telos: y-1 (giati theloume tous endiamesous arithmous na prosthesoume)
				
				plithos = y-x-1; // plithos  =  telos - arxh + 1   =   (y-1) - (x+1) + 1   =   y-1-x-1+1   =   y-x-1
				if(plithos==0) { // an plithos = 0, dld an ta anoixta akra apexoun kata 1, p.x. (4,5), tote den perikluoyn kapoion arithmo
					printf("No numbers added\n");
					break;
				}
				
				sum = 0;
				for(i=(x+1); i<=(y-1); i++) { // ksekina apo thn arxh, mexri na ftaseis sto telos, prosthete tous arithmous. For (i = arxh; i<= telos; i=i+1)
					sum = sum + i;
				}
				
				printf("Added %d numbers.\nSum [%d,%d]: %d\n\n", plithos, x+1, y-1, sum);
				system("pause"); // entolh sth C pou kanei pause otan ftasei to programma sto shmeio p vrisketai, gia na dei o xrhsths ta apotelesmata. (apaitei #include <stdlib.h>)
				break;
			}
			case 2: { // AKSKHSH 2
				
				int foithtes, i, plithos;
				float grade, min, max, sum;
				
				printf("\nGive amount of students (1-30): \n");
				do {
					scanf("%d", &foithtes);
				} while( (foithtes<1) || (foithtes>30) ); // mathites apo 1-30 gia apofugh lathwn h megalwn arithmwn (de to leei h askhsh, diko mou orio)
				
				printf("Give student's grade [0-10]:\n");
				sum = 0;
				plithos = 1; // plithos foithtwn pou exoun max vathmo
				for(i=1; i <= foithtes; i++) { // gia kathe ena apo tous foithtes tha kanoume tous parakatw upologismous:
					do {
						printf("(%d/%d)-> ", i, foithtes);
						scanf("%f", &grade);
					} while( (grade<0) || (grade>10) ); // do-while: Kane scanf oso sou dinei lathos dedomena (vathmos katw apo 0 h panw apo 10), mexri na sou dwsei to swsto gia na proxwrhseis parakatw
					
					sum = sum + grade;
					
					if(i==1) { // an eisai sthn 1h epanalhpsh, arxikopoihse ta min kai max na einai isa me to 1on vathmo. Gia kathe allh epanalhpsh auto tha agnoithei
						max = min = grade;
					}
					else { // gia kathe allh epanalhpsh plhn tou i==1
						if(grade==max) { // an vreis vathmo poy einai isos me ton MEXRI TWRA max tote anevase to plithos kata 1
							plithos++;
						}
						else if(grade>max) { // an vreis kainourio max, tote antikatesthse ton palio max me to kainourio vathmo
							max = grade;
							plithos = 1; // afou vrhkame neo max, tote to plithos poy mexri prin edeixne posoi eixan ton PALIO max, mas einai axrhsto. Ara to mhdenizoume (dld 1 afou metrame ton trexonta) k pake apo thn arxh
						}
						if(grade<min) {
							min = grade; // an vreis kainourio min, tote antikatesthse to palio
						}
					}
				}
				
				printf("\nMin: %.2f\n", min);
				printf("Max: %.2f (x%d)\n", max, plithos);
				printf("Average: %.2f\n\n", sum/foithtes);
				system("pause"); // entolh sth C pou kanei pause otan ftasei to programma sto shmeio p vrisketai, gia na dei o xrhsths ta apotelesmata. (apaitei #include <stdlib.h>)
				break;
			}
			case 3: { // AKSKHSH 3
				
				int i, j;
				
				for(i=1; i<=10; i++) {
					printf("\n%d\n", i); // deixnei gia poion arithmo kanoume thn propaideia kathe fora
					for(j=1; j<=10; j++) {
						printf(" %2d*%2d=%3d\n", i, j, i*j); // %2d = tha ektypwseis ton akeraio poy sou dinw me AT LEAST 2 theseis. Gia na fainetai se stoixisi. Omoiws %3d = 3 theseis at least
					}
				}
				
				printf("\n");
				system("pause"); // entolh sth C pou kanei pause otan ftasei to programma sto shmeio p vrisketai, gia na dei o xrhsths ta apotelesmata. (apaitei #include <stdlib.h>)
				break;
			}
			case 4: { // AKSKHSH 4
				
				int i, summetrikos, A[10];
				
				printf("\nGive 10 integers:\n");
				for(i=0; i<10; i++) {
					printf("(%d/10): ", i+1); // ektupwse se pion arithmo eimaste gia na kserei o xrhsths kathe fora poy toy zhtame vathmo
					scanf("%d", &A[i]); // diavase to input tou xrhsth k valto ston pinaka A[] alla sthn trexousa thesh 'i' h opoia auksanetai me thn epanalhpsh
				}
				
				summetrikos = 0; // h metavlhth poy tha mas deixnei an einai sumemtrikos. Sthn arxh de kseroume tipota, ara ksekiname thn endeiksh sto 0
				for(i=0; i<5; i++) { // elegxos se zeugaria, 1os me teleutaio, 2os me proteleutaio, 3os me paraproteleutaio klp. Afou elegxoume zeugaria tote oi mises sugkriseis tha ginoun, dld 5
					if(A[i]==A[9-i]) { // i:0 A[0]==A[9] , i:1 A[1]==A[8] , i:2 A[2]==A[7] ... Sthn C h oi theseis pinaka metrane apo to 0 ara ola einai pisw kata 1. To 1o stoixeio einai to A[0] k to teleutaio einai A[megethos-1]=A[9]
						summetrikos++; // kathe fora poy se mia ek twn 5 sugkrisewn vriskeis oti einai idia, anevase th metavlhth-endeiksh kata 1.
					}
				}
				if(summetrikos==5) { // an exei thn timh 5, shmainei oti anevhke 5 fores, dld ekane thn sugkrish k vrhke 5 zeugaria idia, poy shmainei oti o pinakas einai summetrikos
					printf("\n\nArray is symnmetric!\n\n");
				}
				else { // an exei thn timh apo 0 - 4 tote eite de vrhke kanena idio h vrhke merika, pantws oxi ola. Ara den einai summetrikos
					printf("\n\nArray is NOT symnmetric.\n\n");
				}
				
				system("pause");
				break;
			}
		}
	} while(option!=5);
	
	printf("\n\n");
	system("pause");
	return 0;
}