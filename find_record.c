#include"student.h"
void find_record(DB_NODE *head){

	if(head==NULL){
		puts("RECORD IS EMPTY");
		return;
	}

	puts("Enter The Student ID - ");
	char *name=getstring();
          puts("\n............STUDENT DETAILS.............\n"); 
	while(head){ 
	        fflush(stdout);	
		if(!strcmp(head->id,name)){
			printf("Name- %s\n",head->name);   
			printf("ID- %s\n",head->id);   
			printf("Date- %d-%d-%d\n",head->dob.date,head->dob.month,head->dob.year);
			printf("Marks- %d\n",head->marks.matrix);
			printf("Email Id- %s\n",head->email_id);
			printf("Contect No- %llu\n\n",head->contect_no); 
			return;
		}
		head=head->next;
	}  
	puts("RECORD NOT FOUND");

}
