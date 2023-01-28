#ifndef _MIKU_H_
#define _MIKU_H_

#include <stdio.h>
#include <string.h>

typedef class Person {
private:
	char name[32];
	char id[32];
public:
	int gradeFirst;
	int gradeSecond;
	int gradeAll;
	void set_name(char a[]) {
		strcpy(name, a);
	}
	auto get_name() {
		return name;
	}
	void set_id(char a[]) {
		strcpy(id, a);
	}
	auto get_id() {
		return id;
	}
	void get_all() {
		gradeAll = gradeFirst + gradeSecond;
	}
}pe;
#endif // !_MIKU_H_
#pragma once