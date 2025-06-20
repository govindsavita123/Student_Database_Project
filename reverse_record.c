#include"student.h"
DB_NODE *reverse_record(DB_NODE *head){
	DB_NODE *cur_ptr=NULL,*next_ptr=NULL,*pre_ptr=NULL;
	
	if((head)&&(head->next))
	{
		cur_ptr=head;
		//puts(cur_ptr->name);
		while(cur_ptr){
			next_ptr=cur_ptr->next;
			cur_ptr->next=pre_ptr;
			pre_ptr=cur_ptr;
			cur_ptr=next_ptr;	
		}
		head=pre_ptr;
	}
	return head;



}
