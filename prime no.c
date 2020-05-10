#include <stdio.h>
primeno(int num,int i);
int main()
{
    int num,check;
    printf("Enter a no");
    scanf("%d",&num);
    check=primeno(num,num/2);
    if(check==1)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }

    return 0;
}
int primeno(int num,int i)
{
    if(i==1)
    {
        return 1;
        
    }
    else
    {
        if(num%i==0)
        {
            return 0;
        }
        else
        {
            return primeno(num,i-1);
        }
    }
}
