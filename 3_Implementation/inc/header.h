#include<stdio.h>
int seat=80;
struct book{
	char code[20];
	char name[20];
	char date[20];
	int cost;
}b;
void insert_details();
void view_All();
void find();
void book_ticket();
void old_records();
