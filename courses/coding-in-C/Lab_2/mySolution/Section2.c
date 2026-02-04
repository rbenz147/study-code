#include <stdio.h>
#include <stdlib.h>
char array[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};  

int main(void)
{
    for (int i = 8; i >= 0; i--)
    {
        printf("   ");

        for (int k = 0; k < 8; k++)
        {
            printf("+---");
        }
        printf("\n");

        printf("%-3d", i);

        for (int j = 0; j < 8; j++)
        {
            if (j < 7)
            {
                if((i+j) % 2 == 0){
                printf("|###");
                }
                else{
                    printf("|   ");
                }
            }
            else
            {
                if((i+j) % 2 == 0){
                printf("|###|");
                }
                else{
                    printf("|   |");
                }
            }
            
            
            
        }
        printf("\n");   
        
    }
    
    
}