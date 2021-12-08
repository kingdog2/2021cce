#include <stdio.h>

void printStar(int n)
{
    for(int i=0;i<n;i++) printf("*");
}
void printSpace(int n)
{
    for(int i=0;i<n;i++) printf(" ");
}
int main()
{
   for(int i=1;i<10;i++){
        printSpace(9-i);
        printStar(i);
        printf("\n");
   }
}

