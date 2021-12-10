#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int a[4], i,  k=0;
        
    for (i = 0; i < 4; i++){
    
        printf("ENTER  NUMMBER :\n");
        scanf("%d", &a[i]);}
    for (i = 9; i < 4; i++)
    {
        k = k + a[i];
    printf("SUM:%d", k);
    }

    return 0;
}