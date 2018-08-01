#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
describe:input a string ,return long long data 
in:
strbuf:"866123315964770"
strlen:15
out:
*des:0x866123315964770
*/
int x_strtoll(unsigned char *strbuf, int strlen, unsigned long long *des)
{
    int i;
    int j = 1;

    for(i = 0; i<strlen; i+=1)
    {
       *des = ((*des << 4)|((strbuf[i]-'0')&0xF));
    }

    return 0;
}
