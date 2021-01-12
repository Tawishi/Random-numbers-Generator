#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    // Use current time as seed for random generator
    int n, m;
    
    printf("How many random numbers?  ");
    scanf("%d",&n);
    
    printf("What should be the range(10,100,1000,....) ?");
    scanf("%d",&m);
    
    srand(time(0));
 
    for(int i = 0; i<n; i++)
        printf(" %d ", rand()%m);
 
    return 0;
}