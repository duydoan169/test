#include <stdio.h>
#include <stdlib.h>
#include "functions.h" //nguyen mau ham
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	struct Book books[50];
	
	do{
		printMenu();
		printf("nhap lua chon cua ban: ");
		scanf("%d", &choice);
	}while(choice!=8);
	switch(choice){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
	return 0;
}
