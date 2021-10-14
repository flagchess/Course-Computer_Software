#include <stdio.h>
int a1=4;
int checknumber(int a,int n);


int main()
{
    int a=0;
    a=checknumber(4,5);
    printf("a=%d",a);
    return 0;
}

int checknumber(int a,int n)
{
    if(a % 4 == 0)
        return checknumber(5*a/4+1,n-1);
    else
    {
        if(n == 0)
        return a;
        else
        {
            a1+=4;
            return checknumber(a1,5);
        }
    }
}
