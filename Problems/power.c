#include<stdio.h>
#include"math.h"

int main()
{
    int n1,n2,i=1;
    long int pw=1,pw1;

    printf("Enter the number: ");
    scanf("%d%d",&n1,&n2);
    pw1=pow(n1,n2);

    while(i<=n2)
    {
        pw*=n1;
        i++;
    }
    printf("%d^%d is %ld\n",n1,n2,pw);
    printf("%ld\n",pw1);
    return 0;

}
