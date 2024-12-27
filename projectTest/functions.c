#include <stdio.h>
#include "functions.h" //nguyen mau ham
//logic ham
void printMenu(){
	printf("\tMENU\n");
	printf("1. nhap\n");
	printf("2. in\n");
	printf("3. them\n");
	printf("4. xoa\n");
	printf("5. sua\n");
	printf("6. sap xep\n");
	printf("7. tim\n");
	printf("8. thoat\n");
}
void inputBooks(int *length, struct Book books[]){
	printf("nhap so luong sach: ");
	scanf("%d", length); //tham so la dia chi nen ko can &
	int i; 
	for(i=0; i<*length; i++){
		printf("id: ");
		scanf("%d", &books[i].id);
		printf("title: ");
		fgets(books[i].title, sizeof(books[i].title), stdin);
		printf("author name: ");
		fgets(books[i].author, sizeof(books[i].author), stdin);
		(*length)++;
	}
}
