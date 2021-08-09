#include<stdio.h>


int main()
{
    int b_s, G_s,n;
    printf("Take a input\n");
    scanf("%d",&n);
    b_s=n;
    G_s=b_s+((b_s*0.4)+(b_s*0.2));
    printf("Ramesh's gross salary: %d\n",G_s);
    return 0;
}