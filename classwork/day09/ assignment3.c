/*
3.Read the contents of the file in reverse order and print it on the another file
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINES 1000
#define MAX_LINE_LENGTH 100
int main(){
    FILE *inputFile = fopen("input.txt","r");
    if(inputFile == NULL){
        printf("Error opening input file!\n");
        return 1;
    }
    FILE *outputFile=fopen("output.txt","w");
    if(outputFile == NULL){
        printf("Error opening output file!\n");
        fclose(inputFile);
        return 1;

}
char lines[MAX_LINES][MAX_LINE_LENGTH];
int numLines =0;
while(fgets(lines[numLines],MAX_LINE_LENGTH,inputFile)!=NULL)
{
    numLines++;
}
for(int i=numLines-1;i>=0;i--){
    fputs(lines[i],outputFile);
}
fclose(inputFile);
fclose(outputFile);
printf("Contents of the file have been written to output.txt in reverse order.\n");
return 0;
}