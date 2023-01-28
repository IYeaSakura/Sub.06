#include <stdio.h>
#include <stdlib.h>
#include "miku.h"
#include "_Enter.cpp"
#include "_Sort.cpp"
#include "_Back.cpp"
#include "_Search.cpp"
extern void _Enter(pe* stu, int n);	
extern void _Sort(pe stu[], int l, int r);
extern void _Back(pe* stu, int n);
extern void _Search(pe* stu, int n);
int main() {
	int n, m, x = 0;
	printf("Enter the number of students:");
	scanf("%d", &n);
	printf("\n");
	pe* stu = (pe*)malloc(sizeof(pe) * n);
	_Enter(stu, n);
	do{
		printf(">>>Menu>>>\n");
		printf("1:Sorting\n");
		printf("2:Finding\n");
		printf("Others:Exiting\n");
		printf("Please choose:");
		scanf("%d", &m);
		printf("\n");
		_Sort(stu, 0, n - 1);
		if (m == 1)
			_Back(stu, n);
		else if (m == 2)
			_Search(stu, n);
		else
			x = 1;
	} while (x == 0);
	system("pause");
	return 0;
}