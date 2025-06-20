#include"student.h"

int unique_id[26];

void menu(){
	puts("\n------ STUDENT DATABASE --------\n");
	puts("a/A : ADD STUDENT RECORD");
	puts("p/P : PRINT STUDENT RECORD");
	puts("s/S : SAVE STUDENT RECORD");
	puts("d/D : DELETE STUDENT RECORD");
	puts("e/E : EDIT STUDENT RECORD");
	puts("f/F : FIND STUDENT RECORD");
	puts("r/R : REVERSE PRINT STUDENT RECORD");
	puts("v/V : REVERSE STUDENT RECORD");
	puts("o/O : SORT STUDENT RECORD");
	puts("q/Q : QUIT ");
	puts("\n--------------------------------\n");

}

int main(){
	DB_NODE *head=sync_record(unique_id);

	char choice;

	while(1){
		system("clear");
		menu();
		__fpurge(stdin);
		printf("Enter The Choice-> ");
		choice='\0';
		scanf("%c",&choice);
		__fpurge(stdin);

		switch(choice){
			case 'A':
			case 'a':head=add_record(head,unique_id);
				 break;
			case 'P':
			case 'p':display_record(head);
				 break;			    
			case 'S':
			case 's':save_record(head);
				 break;			    
			case 'D':
			case 'd':head=delete_record(head);
				 break;			    
			case 'F':
			case 'f':find_record(head);
				 break;			    
			case 'E':
			case 'e':edit_record(head,unique_id);
				 break;			    
			case 'R':
			case 'r':reverse_print(head);
				 break;			    
			case 'V':
			case 'v':head=reverse_record(head);
				 break;			    
			case 'O':
			case 'o':sort_record(head);
				 break;			    
			default:
				 puts("..........THANK YOU...........");
				 exit(0);       
		}

		__fpurge(stdin);
		scanf("%c",&choice);

	}

	return 0;
}
