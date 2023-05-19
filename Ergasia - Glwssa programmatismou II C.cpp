// SARIKAS NIKOLAOS - TEP B - 6914 - 25/4/2023
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#define SIZE 10

using namespace std;
void search(char [][SIZE], char), randomise(char [][SIZE]);

int main(void) {
	
	int i, j, menu;
	char A[SIZE][SIZE], letter;
	srand(time(0));
	
	cout<<"---------------------------------------\n";
	cout<<"|~~~~~~~~~~~~~~ ERGASIA ~~~~~~~~~~~~~~|\n";
	cout<<"---------------------------------------\n";
	for(i=0; i<SIZE; i++) for(j=0; j<SIZE; j++) A[i][j]='-';
	
	do {
		cout<<endl<<endl<<endl;
		for(i=0; i<SIZE; i++) {
			for(j=0; j<SIZE; j++) {
				if(i==j) printf(" (%c)", A[i][j]);
				else printf("%3c ", A[i][j]);
			}
			cout<<endl;
		}
		cout<<"\n0. Exit | 1. Randomise | 2. Search\n> ";
		cin>>menu;
		switch(menu) {
			case 0: break;
			case 1: {
				randomise(A);
				break;
			}
			case 2: {
				cout<<"letter: ";
				cin>>letter;
				search(A, letter);
				break;
			}
			default: break;
		}
	} while(menu);
	
	cout<<"\n\tBye !!\n";
	return 0;
}
//
void search(char A[][SIZE], char ch) {
	
	int i, j, above, below, diag;
	
	below = above = diag = 0;
	for(i=0; i<SIZE; i++) {
		for(j=0; j<SIZE; j++) {
			if(A[i][j]==ch) {
				if(i<j) above++;
				else if(i>j) below++;
				else diag++;
			}
		}
	}
	if(below||above||diag) printf("\n\tLetter '%c' found:\nBelow: (%d)| Above: (%d)| Diagonal: (%d)", ch, below, above, diag);
	else printf("\n\tLetter '%c' not found", ch);
	return;
}
//
void randomise(char A[][SIZE]) {
	
	int i, j;
	
	for(i=0; i<SIZE; i++) {
		for(j=0; j<SIZE; j++) {
			A[i][j]=rand()%26 + 'a';
		}
	}
	return;
}
//
/////////////////////////////