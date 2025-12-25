#include <stdio.h>

int lengthOfLastWord(char* s) { 
    int *first_address = (int*)&(*s);
    printf("%p\n\n" , first_address);
    while(*s != '\0')
        s++;

    int legnth = 0;
    s--;
    if(*s == ' ')
        while(*s == ' ')
                s--;
    if(*s != ' ') 
        while(*s != ' ' )
        {
            // printf("%p\n" , first_address);
            if((int*)&(*s) == first_address)
                {
                    legnth++;
                    break;
                }
            legnth++;
            s--;
            
        }
    return legnth;
}


int main()
{
    char str[200] = "testtest";   
    printf("%d" , lengthOfLastWord(str)); 
}