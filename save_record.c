#include"student.h"

void save_record(DB_NODE *head){

	int size=sizeof(DB_NODE)-sizeof(DB_NODE *);
       
	FILE *file=fopen("student_data.txt","w");
        
	if(file==NULL){
	  puts("not found");
	  return;
	}
	
	DB_NODE *temp=head;

	if(temp==NULL)
	{
	  fclose(file);	
	  return;
	} 

	while(temp){
		fwrite(temp,size,1,file);
		temp=temp->next;

	}	
	fclose(file);	
        puts("DATA SAVE IN FILE SUCCESSFULLY....");	
	return;

}
