#include"student.h"
char *myitoa(int n){
	char ch,*p=NULL;
	int j=0,i=0;
	while(n){
		p=realloc(p,i+1);
		p[i++]=n%10 +'0';
		n=n/10;
	}
	p=realloc(p,i+1);
	p[i]='\0';
	i--;
	while(j<i){
		ch=p[j];
		p[j]=p[i];
		p[i]=ch;
		i--;
		j++;       
	}

	return p;

}
