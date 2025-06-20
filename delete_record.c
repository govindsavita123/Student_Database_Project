#include "student.h"

DB_NODE *delete_record(DB_NODE *head){
	DB_NODE *temp=NULL,*temp2=NULL,*temp3=NULL;

	if(head==NULL){
		puts("DATA BASE ALREADY EMPTY..");
		return head;
	}

	puts("Enter the Student ID-");
	char *stu_id=getstring();

	temp=head;  
	if(!strcmp(temp->id,stu_id)){
		temp2=temp;
		head=head->next;
		free(temp2);
		puts("STUDENT RECORD DELETE SUCESSFULLY..");

	}
	else{
		temp3=temp;
		temp=temp->next;
		while(temp){
			if(!strcmp(temp->id,stu_id)){
				temp2=temp;
				temp3->next=temp->next;
				free(temp2);
				puts("STUDENT RECORD DELETE SUCESSFULLY..");
				return head;

			}
			temp3=temp;
			temp=temp->next;

		}
		puts("STUDENT RECORD NOT FOUND");
	}

	return head;
}
