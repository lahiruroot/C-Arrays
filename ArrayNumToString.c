#include <stdio.h>
#include <string.h>

int main()
{
    int num[] = {11,12,13,14,15,16,17,18,19,20};
    int numLen = sizeof(num) / sizeof(num[0]);
    int len = numLen*2;
    char snum[len];
    char fullstr[len];
    int count = 0;

    //to convert array to string
    for(int i=0; i<numLen; i++)
    {
        itoa(num[i], snum[i], 10);
    }

    memcpy(fullstr, snum, len);

    for (int j = 0; j < len; j++)
    {
        if(fullstr[j]=='2')
        {
            count++;
        }
    }
    
    printf("%d",count);
    return 0;
}