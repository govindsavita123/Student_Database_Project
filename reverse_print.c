#include"student.h"
void reverse_print(DB_NODE *head){

	if(head==NULL){
		return;
	}
	//puts(head->name);
        reverse_print(head->next);  
	fflush(stdout);

		printf("Name- %s\n",head->name);   
		printf("ID- %s\n",head->id);   
		printf("Date- %d-%d-%d\n",head->dob.date,head->dob.month,head->dob.year);
		printf("Marks- %d\n",head->marks.matrix);
		printf("Email Id- %s\n",head->email_id);
		printf("Contect No- %llu\n\n",head->contect_no); 


}
