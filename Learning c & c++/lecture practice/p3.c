#include <stdio.h>
int main(){
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = i; j < 5; j++)
        {
            printf("%d %d\n", i, j);
        }
        printf("%d %d\n", i, j);

        
    }
    printf("%d %d\n", i, j);
    return 0;
    
}
