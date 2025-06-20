#include"student.h"
void sort_record(DB_NODE *head){

	DB_NODE *temp1=NULL,*temp2=NULL,var1,var2;

	if(head==NULL){
		puts("RECORD IS EMPTY");
		return;
	}

	temp1=head;
	while(temp1){ 

		temp2=temp1->next;
		while(temp2){

			if((temp1->id)[6]>(temp2->id)[6]){
				var1=*temp1;
				var2=*temp2;
				*temp1=var2;
				temp1->next=var1.next;
				*temp2=var1;
				temp2->next=var2.next;

			}	       
	else if(((temp1->id)[6]==(temp2->id)[6])&&(atoi(temp1->id+7)>atoi(temp2->id+7)))
	{
				var1=*temp1;
				var2=*temp2;
				*temp1=var2;
				temp1->next=var1.next;
				*temp2=var1;
				temp2->next=var2.next;

			}	       


			temp2=temp2->next;
		}
		temp1=temp1->next;
	}  
        puts("DATA SORTED SUCCESSFULLY....");	

}
