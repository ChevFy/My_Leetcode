#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) 
{
    if(strsSize <= 0 )
        return NULL;
    if(strsSize == 1)
        return strs[0];
    char *prefix = (char*)malloc(1);
    if(!prefix)
        return NULL;
    int i = 0;
    while( strs[0][i] != '\0' && strs[1][i] != '\0' && strs[0][i] == strs[1][i])
    {
        prefix[i] = strs[0][i];
        prefix = realloc(prefix , i+2);
        if(!prefix)
        {
            free(prefix);
            return NULL;
        }
        i++;
    }
    prefix[i] = '\0';
    if(strsSize == 2)
        return prefix;
    
    int j = 2;
    while (j < strsSize)
    {
        int k = 0;
        while (prefix[k] && strs[j][k] && prefix[k] == strs[j][k])
            k++;

        char *tmp = realloc(prefix, k + 1);
        if (!tmp)
        {
            free(prefix);
            return NULL;
        }
        prefix = tmp;
        prefix[k] = '\0';

        j++;
    }
    return prefix;

    
}

int main(void)
{
    char *strs[] = { "test1", "test2" ,"t3"};

    char *res = longestCommonPrefix(strs, 3);
    if (res)
    {
        printf("%s\n", res);
        free(res);
    }
    return 0;
}
