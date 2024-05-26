#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* str1;
    char* str2;
    int i, cnt1, cnt2;
    str1 = (char*)malloc(20 * sizeof(char));
    str2 = (char*)malloc(20 * sizeof(char));
    printf("Enter the first word: \n");
    fgets(str1, 20, stdin); 
    printf("Enter the second word: \n");
    fgets(str2, 20, stdin); 

    cnt1 = strlen(str1);
    cnt2 = strlen(str2);

    if(cnt1 == cnt2){
        i = 0;
        while(str1[i] == str2[i] && str1[i] != '\0'){ 
            i++;
        }
        if(str1[i] == '\0'){
            printf("The words are same. \n");
        }
        else{
            printf("The words are not the same. \n");
            printf("Their length is equal. \n");
        }
    }
    else{
        printf("The words are different. \n");
        if(cnt1 > cnt2)
            printf("The string1 is longer and str1 is:%s ", str1);
        else
            printf("The string2 is longer and str2 is:%s ", str2);
    }

    free(str1); 
    free(str2);
    return 0;
}

