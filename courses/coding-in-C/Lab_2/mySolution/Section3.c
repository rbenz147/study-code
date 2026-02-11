#include <stdio.h>
#include <stdlib.h>

char array[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};  

int main(void)
{
    for (int i = 8; i >= 0; i--)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%c%d ", array[j], i);
        }
        printf("\n");
        
    }
    
    
}