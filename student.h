#ifndef STUDENT_H
#define STUDENT_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
#include<ctype.h>
//int unique_id[26];

typedef struct db
{
	char name[25];
	char id[15];
	struct DOB
	{
	  unsigned int date:5;
	  unsigned int month:4;
	  unsigned int year;	
	}dob;

	union{
		unsigned int matrix;
		unsigned int inter;
		unsigned int gradution;
	
	}marks;
	char email_id[30];

	unsigned  long long contect_no;    
        struct db *next;

}DB_NODE;

char *getstring(void);
char *myitoa(int);
DB_NODE *add_record(DB_NODE *,int *);
DB_NODE *sync_record(int *);
DB_NODE *delete_record(DB_NODE *);
DB_NODE *reverse_record(DB_NODE *);
char unique_record(DB_NODE *,char);
void display_record(DB_NODE *);
void save_record(DB_NODE *);
void find_record(DB_NODE *);
void edit_record(DB_NODE *,int *);
void sort_record(DB_NODE *);
void reverse_print(DB_NODE *);
 
#endif
