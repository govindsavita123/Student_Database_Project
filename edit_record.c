#include"student.h"

void edit_record(DB_NODE *newnode,int *unique_id){

	if(newnode==NULL){
		puts("RECORD IS EMPTY");
		return;
	}

	puts("Enter The Student ID - ");
	char *name=getstring();
	unsigned int n,choice;

	while(newnode){  
		if(!strcmp(newnode->id,name)){
			puts("1.Name 2.DOB 3.Marks 4.Email_Id 5.Contect_No 6.Quit");
			scanf("%d",&choice);
			if(choice==1){
				char ch=newnode->id[6];
				__fpurge(stdin);
				printf("Enter The Name- ");
				fgets(newnode->name,25,stdin);


				if(newnode->name[strlen(newnode->name)-1]=='\n'){
					newnode->name[strlen(newnode->name)-1]='\0';
				}

				newnode->id[6]=(newnode->name[0] & ~(1<<5));
				if(ch!=newnode->id[6]){
					int p1=++unique_id[(newnode->id)[6]-'A']; 
					strcpy((newnode->id)+7,myitoa(p1));
				}
			}
			else if(choice==2){
				__fpurge(stdin);
ip1: 				printf("Enter The Date- ");
				scanf("%u",&n);
				newnode->dob.date=n;
				if(n<1 ||n>31){
					puts("Incorrect Date (1-31)");
					goto ip1;	
				}

ip2:
				__fpurge(stdin);
				printf("Enter The Month- ");
				scanf("%u",&n);
				newnode->dob.month=n;
				if(n<1 ||n>12){
					puts("Incorrect Month (1-12)");
					goto ip2;	
				}

ip3:				__fpurge(stdin);
				printf("Enter The Year- ");
				scanf("%u",&n);
				newnode->dob.year=n;
				if(n<1 ||n>2025){
					puts("Incorrect Year (1-31)");
					goto ip3;	
				}


			}
			else if(choice==3){
				__fpurge(stdin);
				printf("Enter The Marks- ");
				scanf("%u",&n);
				newnode->marks.matrix=n;

			}
			else if(choice==4){
				__fpurge(stdin);
				printf("Enter The Email Id- ");
				fgets(newnode->email_id,30,stdin);

				if(newnode->email_id[strlen(newnode->email_id)-1]=='\n'){
					newnode->email_id[strlen(newnode->email_id)-1]='\0';
				}
			}
			else if(choice==5){
				__fpurge(stdin);
				printf("Enter The Contect No- ");
				scanf("%llu",&newnode->contect_no); 

			}
			return;
		}
		newnode=newnode->next;
	}  
	puts("RECORD NOT FOUND");

}
