#include<stdio.h>
#include<rupesh.h>

void tofh(int ndisk, char source, char temp, char dest) ;
int main()
{
    char source = 'A', temp = 'B', dest = 'C';
    int ndisk;

    printf("Enter disk: ");
    ndisk = inputInt();

    printf("Sequence is\n");
    tofh(ndisk, source, temp , dest);

    return 0;
}

void tofh(int ndisk, char source, char temp, char dest)
{
    if(ndisk == 1)
    {
        printf("Move %d disk from %c->%c\n", ndisk, source, dest);
        return;
    }
        
    
    tofh(ndisk-1, source, dest ,temp);
    printf("Move %d disk from %c->%c\n", ndisk, source, dest);
    tofh(ndisk-1, temp, source, dest);
}