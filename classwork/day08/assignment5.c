/*
Q4.C program to remove all characters in second string which are present in first string.
i/p
Bhima shankar is a C programmer
o/p
Bhima snkr is a C programme
*/
#include <stdio.h>
#include <string.h>
void removeChars(char first[],char second[]){
    int len1=strlen(first);
    int len2=strlen(second);
    int freq[256]={0};
    for(int i=0;i<len1;i++){
        freq[first[i]]=1;
    }
    int index=0;
    for(int i=0;i<len2;i++){
        if(freq[second[i]]==0){
            second[index++]=second[i];
        }
    }
    second[index]='\0';
}
int main(){
    char first[100],second[100];
    printf("Enter the first string:");
    scanf("%s",&first);
    printf("Enter the second string:");
    scanf("%s",&second);
    removeChars(first,second);
    printf("Modified second string:%s\n",second);
    return 0;
}