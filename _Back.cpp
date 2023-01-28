#include <stdio.h>
#include "miku.h"
extern void _Back(pe* stu, int n) {
	printf("<<<Result<<<\n");
	for (int i = 0; i < n; i++) {
		printf("The top.%d studnet\n", i + 1);
		printf("Name:%s", stu[i].get_name());
		printf("Student ID:%s", stu[i].get_id());
		printf("Grade One:%d\n", stu[i].gradeFirst);
		printf("Grade Two:%d\n", stu[i].gradeSecond);
		printf("Grade All:%d\n", stu[i].gradeAll);
		printf("\n");
	}
	printf("\n");
}