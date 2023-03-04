#include<stdio.h>
main(){
	
	FILE *fptr;
	char ch[100];
	int i;
	
	fptr=fopen("NewFile.txt","w");
	
	if(fptr == NULL){
		printf("Error!");
	}
	else{
		printf("Enter text :");
		gets(ch);
		
		for(i=0; i<strlen(ch); i++){
			
			fputc(ch[i],fptr);
		}
	
	fclose(fptr);
	return 0;
}
}
