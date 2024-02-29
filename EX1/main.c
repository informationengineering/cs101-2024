/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i = 1; i < 7; i++){
        for(int j = 0; j < 6-i; j++){
            printf(" ");
        }
        for(int k = 1; k < i; k++){
            printf("%d ",i);
        }
        printf("%d\n",i);
        
        
    }

    return 0;
}
