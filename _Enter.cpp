#include <stdio.h>
#include "miku.h"
extern void _Enter(pe* stu,int n) {
	printf(">>>Inserting>>>\n");
	for (int i = 0; i < n; i++) {
		while (getchar() != '\n');
		char x[32], y[32];
		printf("Entering the No.%d student:\n", i + 1);
		printf("Name:");
		fgets(x, 32, stdin);
		printf("Student ID:");
		fgets(y, 32, stdin);
		printf("Grade One:");
		scanf("%d", &stu[i].gradeFirst);
		printf("Grade Two:");
		scanf("%d", &stu[i].gradeSecond);
		stu[i].set_name(x);
		stu[i].set_id(y);
		stu[i].get_all();
		printf("\n");
	}
	printf("\n");
}