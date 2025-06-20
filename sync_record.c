#include"student.h"

DB_NODE *sync_record(int *unique_id){

	DB_NODE var,*temp,*newnode=NULL,*head=NULL;

	int size=sizeof(DB_NODE)-sizeof(DB_NODE *);

	FILE *file=fopen("student_data.txt","r");

	if(file==NULL){
		puts("file not found");
		return head;
	}	

	while((fread(&var,size,1,file))>0){
		newnode=calloc(1,sizeof(DB_NODE));

		if(newnode==NULL){
			puts("RECORD NOT CREATED");
			return head;
		}

		strcpy(newnode->id,var.id);
	         if(unique_id[var.id[6]-65]<atoi(var.id+7)){
		    unique_id[var.id[6]-65]=atoi(var.id+7);
		 }
		strcpy(newnode->name,var.name);
		newnode->dob.date=var.dob.date;
		newnode->dob.month=var.dob.month;
		newnode->dob.year=var.dob.year;
	
		newnode->marks.matrix=var.marks.matrix;
		strcpy(newnode->email_id,var.email_id);
		newnode->contect_no=var.contect_no;

		if(head==NULL){
			head=newnode;
		}
		else{
			temp=head;
			while(temp->next){
				temp=temp->next;
			}
			temp->next=newnode;  
		}		
		newnode=NULL;

	}
	fclose(file); 
	return head;

}
