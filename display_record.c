#include"student.h"
void display_record(DB_NODE *head){

	if(head==NULL){
		puts("RECORD IS EMPTY");
		return;
	}
	puts("\n............ STUDENT DETAILS ...........\n");
	while(head){  
                fflush(stdout);
		printf("\nStudent ID-> %s\n",head->id);   
                fflush(stdout);
		printf("Name-> %s\n",head->name);   
                fflush(stdout);
		printf("DOB-> %u/%u/%u\n",head->dob.date,head->dob.month,head->dob.year);
                fflush(stdout);
		printf("Percentage-> %d%c\n",head->marks.matrix,'%');
                fflush(stdout);
		printf("Email Id-> %s\n",head->email_id);
                fflush(stdout);
		printf("Contect No-> %llu\n\n",head->contect_no); 
                fflush(stdout);

		head=head->next;
	}  
	puts("\n.....................................\n");

}
