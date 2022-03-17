// com-sci 6252410025
#include"stdio.h"
#define l printf("---------------------------------\n");

char *book[] = {"Russian Language","Thai Language","English Language","Japanese Language","Chinese Language"};
		
char *stat[] = {"On the shelf","On the shelf","On the shelf","On the shelf","On the shelf"};
		


header(){
	l
	printf(" Program Borrow and Return Books\n");
	l
	
}

menu(){
	char option;
	printf("\t\tMenu\n");
	printf("\t1.Borrow the book\n");
	printf("\t2.Return the book\n");
	printf("\t3.Exit\n");
	l
	printf("Select number : ");
	scanf("%s",&option);
	
	switch (option){
		case '1' :borrow();
				 break;
		case '2' : re();
				 break;
		case '3' : quit();
				 break;
		default: system("cls");
				 header();
				 printf("Unknow command.\n");
				 printf("Press any key to try again.\n");
				 l
				 getch();
				 system("cls");
				 header();
				 menu();		 		 		 	 
	}
}

borrow(){
	int i;
	char number;
	system("cls");
	header();
	printf("\tBorrow the book\n");
	l
	printf("\tBook List\n");
	for(i=0;i<5;i++){
		printf("%d. %s \t: %s\n",i+1,book[i],stat[i]);
	}
	printf("6. Return to menu\n");
	l
	printf("Select number : ");
	scanf("%s",&number);
	l
	switch(number){
		case '1' : if(stat[0] != "On the shelf"){
					printf("Book is not on the shelf!!\n");
					l
					getch();
					borrow();
				}
				 stat[0] = "Not on the shelf";
				 borrow();
				 break;
		case '2' : if(stat[1] != "On the shelf"){
					printf("Book is not on the shelf!!\n");
					l
					getch();
					borrow();
				}
				 stat[1] = "Not on the shelf";
				 borrow();
				 break;
		case '3' : if(stat[2] != "On the shelf"){
					printf("Book is not on the shelf!!\n");
					l
					getch();
					borrow();
				}
				 stat[2] = "Not on the shelf";
				 borrow();
				 break;
		case '4' : if(stat[3] != "On the shelf"){
					printf("Book is not on the shelf!!\n");
					l
					getch();
					borrow();
				}
				 stat[3] = "Not on the shelf";
				 borrow();
				 break;
		case '5' : if(stat[4] != "On the shelf"){
					printf("Book is not on the shelf!!\n");
					l
					getch();
					borrow();
				}
				 stat[4] = "Not on the shelf";
				 borrow();
				 break;
		case '6' : system("cls");
				 header();
				 menu();
				 break;		 	
		default: system("cls");
				 header();
				 printf("Unknow command.\n");
				 printf("Press any key to try again.\n");
				 l
				 getch();
				 system("cls");
				 header();
				 borrow();			 	 		 		 
	}
}

re(){
	int i;
	char number;
	system("cls");
	header();
	printf("\tReturn the book\n");
	l
	printf("\tBook List\n");
	for(i=0;i<5;i++){
		printf("%d. %s \t: %s\n",i+1,book[i],stat[i]);
	}
	printf("6. Return to menu\n");
	l
	printf("Select number : ");
	scanf("%s",&number);
	l
	switch(number){
		case '1' : if(stat[0] == "On the shelf"){
					printf("Already have a book!!\n");
					l
					getch();
					re();
				}
				 stat[0] = "On the shelf";
				 re();
				 break;
		case '2' : if(stat[1] == "On the shelf"){
					printf("Already have a book!!\n");
					l
					getch();
					re();
				}
				 stat[1] = "On the shelf";
				 re();
				 break;
		case '3' : if(stat[2] == "On the shelf"){
					printf("Already have a book!!\n");
					l
					getch();
					re();
				}
				 stat[2] = "On the shelf";
				 re();
				 break;
		case '4' : if(stat[3] == "On the shelf"){
					printf("Already have a book!!\n");
					l
					getch();
					re();
				}
				 stat[3] = "On the shelf";
				 re();
				 break;
		case '5' : if(stat[4] == "On the shelf"){
					printf("Already have a book!!\n");
					l
					getch();
					re();
				}
				 stat[4] = "On the shelf";
				 re();
				 break;
		case '6' : system("cls");
				 header();
				 menu();
				 break;		 	
		default: system("cls");
				 header();
				 printf("Unknow command.\n");
				 printf("Press any key to try again.\n");
				 l
				 getch();
				 system("cls");
				 header();
				 re();			 	 		 		 
	}
}

quit(){
	system("cls");
	l
	printf("\t  Thank you!!!\n");
	l
}

main(){
	header();
	menu();
	
	getch();
}
