#include <stdio.h>
#include "miku.h"
const int N = 100010;
pe tmp[N];
extern void _Sort(pe stu[], int l, int r) {
	if (l == r) return;
	int mid = l + r >> 1;
	_Sort(stu, l, mid);
	_Sort(stu, mid + 1, r);
	int k = 0, i = l, j = mid + 1;
	while (i <= mid && j <= r) {
		if (stu[i].gradeAll >= stu[j].gradeAll) tmp[k++] = stu[i++];
		else tmp[k++] = stu[j++];
	}
	while (i <= mid) tmp[k++] = stu[i++];
	while (j <= r) tmp[k++] = stu[j++];
	for (i = l, j = 0; i <= r; i++, j++) stu[i] = tmp[j];
}