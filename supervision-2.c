#include<stdio.h>
main(){
	
	FILE *fptr;
	char ch;
	int i;
	
	fptr=fopen("ReadFile.txt","r");
	
	if(fptr == NULL){
		printf("Error!");
	}
	else{
		while(ch != EOF){
			
			ch = fgetc(fptr);
			printf("%c",ch);
			
		}
	fclose(fptr);
	return 0;
}
}

