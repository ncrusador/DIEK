#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	short option;
	
	printf("------------------\n ERGASIA THEWRIA \n------------------\n");
	printf("Epilekse askisi:\n");
	do {
		printf("\n***************************************\n");
		printf("** (0) Exit                          **\n** (1) Ypologismos Emvadoy           **\n** (2) Metatroph Thermokrasias       **\n** (3) Calculator                    **\n");
		printf("** (4) Ypologismos Thermokrasias     **\n***************************************\n");
		printf("Choose: ");
		scanf ("%hd", &option);
		switch(option) {
			case 1: { // YPOLOGISMOS EMVADOY
				
				float x, y;
				
				printf("\n ~Ypologismos Emvadou~\n");
				printf("\nDwse vash & upsos trigwnou:\n");
				do {
					printf("-> ");
					scanf("%f %f", &x, &y);
				} while((x<=0)||(y<=0));
				
				printf("\nTo Emvado trigwnou me vash %.2f kai upsos %.2f einai %.3f\n\n", x, y, (x*y)/2);
				system("pause\n");
				break;
			}
			case 2: { // METATROPH THERMOKRASIAS
				
				short format;
				float temp;
				
				printf("\n ~Metatroph Thermokrasias~\n");
				printf("\nDwse thermokrasia: ");
				scanf("%f", &temp);
				printf("Epilekse format:\n 1. Celsius\n 2. Fahrenheit\n 3. Kelvin\n");
				do {
					printf("-> ");
					scanf("%hd", &format);
				} while((format>3)||(format<1));
				
				printf("\n");
				if(format==1) { // Celsius
					if(temp<-273.15) {
						printf("Adunath thermokrasia Celsius.");
					}
					else {
						printf("> (%.2f)Celsius = (%.2f)Fahrenheit = (%.2f)Kelvin", temp, (1.8*temp) + 32, temp+273.15);
					}
				}
				else if(format==2) { // Fahrenheit
					if(temp<-459.67) {
						printf("Adunath thermokrasia Fahrenheit.");
					}
					else {
						printf("> (%.2f)Fahrenheit = (%.2f)Kelvin = (%.2f)Celsius", temp, (temp-32)*(5.0/9) + 273.15, (temp-32)*(5.0/9));
					}
				}
				else { // Kelvin
					if(temp<0) {
						printf("Adunath thermokrasia Kelvin.");
					}
					else {
						printf("> (%.2f)Kelvin = (%.2f)Celsius = (%.2f)Fahrenheit", temp, temp-273.15, (temp-273.15)*1.8 + 32);
					}
				}
				
				printf("\n\n");
				system("pause\n");
				break;
			}
			case 3: { // CALCULATOR
				
				short i;
				int m, n;
				long long a;
				double x, y;
				char telestis;
				
				printf("\n ~Calculator~\n");
				do {
					printf("\n\nEpilekse praksi: + - * / %% ^ !   (0 to exit):\n-> ");
					scanf(" %c", &telestis);
					switch(telestis) {
						case '+': { // prosthesh
							printf(" ~Prosthesh~\nDwse 2 arithmous:\n->");
							scanf("%lf %lf", &x, &y);
							printf("\n (%.2lf) + (%.2lf) = (%.2lf)", x, y, x+y);
							break;
						}
						case '-': { // afairesh
							printf(" ~Afairesh~\nDwse 2 arithmous:\n->");
							scanf("%lf %lf", &x, &y);
							printf("\n (%.2lf) - (%.2lf) = (%.2lf)", x, y, x-y);
							break;
						}
						case '*': { // ginomeno
							printf(" ~Ginomeno~\nDwse 2 arithmous:\n->");
							scanf("%lf %lf", &x, &y);
							printf("\n (%.2lf) * (%.2lf) = (%.2lf)", x, y, x*y);
							break;
						}
						case '/': { // diairesh
							printf(" ~Diairesh~\nDwse 2 arithmous:\n->");
							scanf("%lf %lf", &x, &y);
							if(y==0) {
								printf("\nAdunath Diairesh!");
							}
							else {
								printf("\n (%.2lf) / (%.2lf) = (%.4lf)", x, y, x/y);
							}
							break;
						}
						case '%': { // ypoloipo diaireshs
							printf(" ~Ypoloipo diaireshs~\nDwse 2 akeraious:\n->");
							scanf("%d %d", &m, &n);
							printf("\n (%d) %% (%d) = (%d)", m, n, m%n);
							break;
						}
						case '^': { // upswsh se dunamh
							printf(" ~Ypswsh se dunamh~\nDwse 2 akeraious gia vash & ektheth:\n->");
							scanf("%d %d", &m, &n);
							if(n<0) { // arnhtikos ekthetis <0
								x = 1;
								for(i=-1; i>=n; i--) {
									x /= m;
								}
								printf("\n (%d) ^ (%d) = (%.11lf)", m, n, x);
							}
							else if(n==0) { // ekthetis == 0
								printf("\n (%d) ^ (%d) = 1", m, n);
							}
							else { // thetikos ekthetis >0
								a = m;
								for(i=2; i<=n; i++) {
									a *= m;
								}
								printf("\n (%d) ^ (%d) = (%lld)", m, n, a);
							}
							break;
						}
						case '!': { // paragontiko
							printf(" ~Paragontiko~\nDwse thetiko akeraio:\n->");
							scanf("%d", &m);
							if(m<0) printf("\nAdunato Paragontiko!");
							else if(m==0) printf("\n (!0) = 1");
							else if(m>20) printf("\nYperxeilish!");
							else {
								a=1;
								for(n=1; n<=m; a *= n++);
								printf("\n (!%d) = (%lld)", m, a);
							}
							break;
						}
					}
				} while(telestis!='0');
				printf("\n\n");
				system("pause\n");
				break;
			}
			case 4: { // YPOLOGISMOS THERMOKRASIAS
				
				short size, i;
				float max, min, sum;
				
				printf("\n ~Ypologismos Thermokrasias~\n");
				printf("\nDwse posothta hmerwn (1-31):\n");
				do {
					printf("->");
					scanf("%hd", &size);
				} while((size<1)||(size>31));
				float A[size];
				
				printf("\nDwse %hd thermokrasies se Celsius:\n", size);
				sum = 0;
				for(i=0; i<size; i++) {
					
					do {
						printf("(%hd/%hd): ", i+1, size);
						scanf("%f", &A[i]);
					} while(A[i]<-273.15); // elegxos katwtaths dunaths thermokrasias se Celsius
					if(i==0) { // arxikopoihsh max & min sthn 1h epanalhpsh
						max = min = A[0];
					}
					if(max<A[i]) {
						max=A[i];
					}
					if(min>A[i]) {
						min=A[i];
					}
					sum += A[i];
				}
				printf("\n");
				for(i=0; i<size; i++) {
					if(i%3==0) printf("\n"); // allagh grammhs ana 3 thermokrasies
					printf(" %7.2f",A[i]);
				}
				printf("\n\nMin is (%.2f)C\nMax is (%.2f)C\nAvg is (%.4f)C\n", min, max, sum/size);
				
				printf("\n");
				system("pause\n");
				break;
			}
		}
	} while(option);
	
	printf("\n\n- Sarikas Nikolaos, TEP A1, 6914\n         Kalh Xronia!!\n\n");
	system("pause\n");
	return 0;
} 