/*
assignments:cmnd line args
i/p-wwwbbcde
o/p-w3b3cde
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char*transform_string(const char*input_string){
char*output_string=(char*)malloc(strlen(input_string)*sizeof(char)); 
char first_char=input_string[0];
int count=0;
const char*ptr = input_string;
while(*ptr !='\0'){
    if(*ptr == first_char){
        count++;
    }
    ptr++;
 }
 sprintf(output_string,"%d%c%s",count,first_char,input_string+1);
 return output_string;

 
}
int main(int argc,char*argv[0]){
    if(argc!=2){
        printf("Usage: %s<input_string>\n",argv[0]);
        return 1;
    }
    const char*input_string=argv[1];
    char*output_string=transform_string(input_string);
    printf("%s\n",output_string);
    free(output_string);
    return 0;
}   
 