#include"stdio.h"
#include"math.h"

int main()
{
    int n, num,sum=0,mul=0,rem=0,i=1;


    while(i<=500)
    {   
        n=i;
        num=n;
        while (n > 0)
        {
            rem = n % 10;
            n = n / 10;
            mul = rem * rem * rem;
            sum+=mul;
            
        }
        if (sum == num)
            printf("%d is armstrong number\n", num);
            
        sum = 0;// here it is making sum zero after every new n
        i++;
    }
    
        return 0;
}