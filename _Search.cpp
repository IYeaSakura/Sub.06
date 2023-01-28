#include <stdio.h>
#include "miku.h"
extern void _Search(pe* stu, int n) {
	int i;
	printf("Enter the sort you want to find:");
	scanf("%d", &i);
	printf("<<<Result<<<\n");
	printf("Name:%s", stu[i - 1].get_name());
	printf("Studnet ID:%s", stu[i - 1].get_id());
	printf("Grade One:%d\n", stu[i - 1].gradeFirst);
	printf("Grade Two:%d\n", stu[i - 1].gradeSecond);
	printf("Grade All:%d\n", stu[i - 1].gradeAll);
	printf("\n");
}