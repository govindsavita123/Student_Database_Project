
#include"student.h"

DB_NODE *add_record(DB_NODE *head,int *unique_id){
	unsigned int n;
	DB_NODE *newnode=calloc(1,sizeof(DB_NODE));

	if(newnode==NULL){
		puts("NEW ENTRY NOT CTREATED");
		return head;
	}

	__fpurge(stdout);
ip:	printf("Enter The Name- ");
	__fpurge(stdin);
	fgets(newnode->name,25,stdin);
	if(!isalpha(newnode->name[0])){
		puts("PLEASE ENTER THE FIRST CHAR IS AIPHABAT");
		goto ip;
	}

	if(newnode->name[strlen(newnode->name)-1]=='\n'){
		newnode->name[strlen(newnode->name)-1]='\0';
	}

	strcpy(newnode->id,"V24HE5");
	newnode->id[6]=(newnode->name[0] & ~(1<<5));

	int p1=++unique_id[(newnode->id)[6]-'A'];               
	strcat((newnode->id)+7,myitoa(p1));;

	__fpurge(stdin);
	puts(".....The DOB Detail.....");
ip1:	printf("Enter Date-> ");
	scanf("%u",&n);
	newnode->dob.date=n;

	if(n<1 ||n>31){
		puts("Incorrect Date (1-31)");
		goto ip1;	
	}

	__fpurge(stdin);
ip2:	printf("Enter Month-> ");
	scanf("%u",&n);
	newnode->dob.month=n;

	if(n<1 ||n>12){
		puts("Incorrect Month (1-12)");
		goto ip2;	
	}
	__fpurge(stdin);
ip3:	printf("Enter Year-> ");
	scanf("%u",&n);
	newnode->dob.year=n;

	if(n<1 ||n>2025){
		puts("Incorrect Year (1-31)");
		goto ip3;	
	}
	__fpurge(stdin);
	int q;
ip4:    puts("1.Inter 2.Diploma 3.Graduation");
	scanf("%d",&q);
	if(q==1){
		printf("Enter Inter Percentage-> ");
		scanf("%u",&n);
		newnode->marks.matrix=n;
	}
	else if(q==2){
		printf("Enter Diploma Percentage-> ");
		scanf("%u",&n);
		newnode->marks.matrix=n;
	}
	else if(q==3){
		printf("Enter Graduation Percentage-> ");
		scanf("%u",&n);
		newnode->marks.matrix=n;
	}
	else{
		puts("Please Enter Valid Choice");
		goto ip4; 
	}

	__fpurge(stdin);
	printf("Enter The Email Id-> ");
	fgets(newnode->email_id,30,stdin);

	if(newnode->email_id[strlen(newnode->email_id)-1]=='\n'){
		newnode->email_id[strlen(newnode->email_id)-1]='\0';
	}

	__fpurge(stdin);
	printf("Enter The Contect No- ");
	scanf("%llu",&newnode->contect_no); 

	if(head==NULL)
	{
		head=newnode;
	}       
	else
	{
		DB_NODE *temp=head;
		while(temp->next){
			temp=temp->next;
		}       
		temp->next=newnode;       
	}

	return head;
}
