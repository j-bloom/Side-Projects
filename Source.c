#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "math.h"

int menu(void);


int main() {
	float math = 0;
	int option = 0, m = 0;
	char name[31], fileText[1001];

	FILE *fp = NULL;
	//Prompt user for name
	printf("Hello what is your name?\n");
	scanf("%30[^\n]%*c", &name);
	
	//Greet user and offer options
	printf("\nHello %s, what would you like to do today?\n", name);

	do {
		m = menu();
		switch (m) {
		case 1:
			mathMenu();
			break;
		case 2:
			textMenu();
			break;
		default:
			break;
		} 
	} while (m != 0);

	
	/*//Get users option
	if (m == 0) {
		printf("Good-bye!\n");
		return 0;
	}
	*/
	//Call Math finction
	if (m == 1) {
			do {
				printf("\nPress 0 to go to the main menu\n"
					   "Press 1 to do some addition\n"
					   "Press 2 to do some subtraction\n"
					   "Press 3 to do some multiplication\n"
				   	   "Press 4 to do some division\n\n");
				scanf("%d", &option);
			
					switch (option) {
					case 1:
						math = add();
						break;
					case 2:
						math = sub();
						break;
					case 3:
						math = multiply();
						break;
					case 4:
						math = divide();
						break;
					default:
						printf("Please enter a valid number between 0 and 4\n");
						break;
					}
			} while (option != 0);	

		return;
	}
/*
	//Call Text finction
	if (m == 2) {
		while (1) {
			do {
				printf("\nPress 0 to return to the main menu\n"
					"Press 1 to write a new file\n"
					"Press 2 to add to the end of the file\n"
					"Press 3 to read the written file\n\n");
				scanf("%d", &option);

				if (option > 3 || option < 0) {
					printf("\nPlease enter an option between 0 and 3\n");
				}

					switch (option) {
					case 0:
						menu();
						break;
					//write to a file			
					case 1:
					fp = fopen("test.txt", "w");
				
					printf("Let's type to the file now!");
					while ((*fileText = getchar()) != '\n') {
						//scanf("%1000[^\n]%*c", &fileText);
						fputchar(fp, "%s", fileText);
						
						fclose(fp);
					}
						break;
					//append to a file
					case 2:
						break;
					//read from a file
					case 3:
						break;
				}
			} while (option > 3 || option < 0);
		}
		return;
	}*/
	return 0;

}
int menu(void) {
	int option = 0;
	do {
		printf("\nPlease select one of the following options:\n"
			   "0. To Exit The Program\n"
			   "1. Do Some Math\n"
		   	   "2. Do Some Text Editing\n\n");
		scanf("%d", &option);
		if (option < 0 || option > 2) {
			printf("\nPlease enter an option between 0 and 2\n");
		}
	} while (option < 0 || option > 2);
	return option;
}


