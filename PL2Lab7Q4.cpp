#include<stdio.h>
#include<stdlib.h>

int main(){
	char* string;
	int cnt = 1,i=0;
	string =(char*)malloc(100*sizeof(char));
	printf("Pls don't put any space at the start if you put space at the start the code is not going to work. \n");
	printf("\n \n");
	printf("Enter the sentence: \n"); 
	fgets(string,100,stdin);
	
	while(string[i] != NULL){
		if(string[i] == ' ')
		cnt++;
		i++;
	}
	
	printf("Your sentence includes %d words. \n",cnt);
	
	free(string);
	
	return 0;
}
