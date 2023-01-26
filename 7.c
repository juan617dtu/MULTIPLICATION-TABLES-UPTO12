#include <stdio.h>
#include <stdlib.h>

int main() {

	char num[100];
	int var_num, flag, i = 0, j;

	printf("*********************************");
	printf("      MULTIPLICATION TABLES      ");
	printf("*********************************");
	printf("\n\n___________________________________________________________________________________________________\n\n");
	
	do {
		printf("\n\nENTER A NUMBER FROM 1 TO 12 (0 TO EXIT): ");
		fgets(num, 100, stdin);
		var_num = atoi(num);
		if (var_num < 0 || var_num > 12) {
			flag = 3;
		}
		else {
			break;
		}
	} while (flag == 3);
	
	if (var_num == 0) {
		printf("\n\nGOODBYE! :)\n\n");
		exit(0);
	}
	
	printf("\n\n");
	printf(" ---------------\n");
	while(i != var_num) {
		j = i * var_num;
		printf("| %-2d X %-2d = %-3d |\n", i, var_num, j);
		i++;
	}
	j = i * var_num;
	printf("| %-2d X %-2d = %-3d |\n", i, var_num, j);
	printf(" ---------------\n");

	/* Demonstrate with numbers. 
	printf("<%d> is not justified.\n", x);
	printf("<%5d> is right-justified.\n", x);
	printf("<%-5d> The minus sign makes it left-justified.\n", x);
	Demonstrate with strings. 
	printf("'%s' is not justified.\n", y);
	printf("'%10s' is right-justified.\n", y);
	printf("'%-10s' is left-justified using a minus sign.\n", y);*/

	return 0;
}
