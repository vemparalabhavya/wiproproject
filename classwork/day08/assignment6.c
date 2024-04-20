/*
Q5.Alternatively merge two strings
i/p
Bhima
ABCDEOLM
o/p
BAhBiCmDaOLM
*/
void strMerge(const char *s1,const char *s2,char *output,unsigned int ccDest)
{
    
    printf("string1 is %s\n",s1);
    printf("string2 is %s\n",s2);
    while(*s1 !='\0' && *s2 !='\0')
    {
        *output++=*s1++;
        *output++=*s2++;
    }
    while(*s1!='\0')
    *output++=*s1++;
    while(*s2!='\0')
    *output++=*s2++;
    *output='\0';
    printf("merged string is %s\n",*output);
    
}


