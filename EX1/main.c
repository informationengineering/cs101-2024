/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void print_sp(int i, int n){
    for(int sp = 0; sp < n-i; sp++){
        printf(" ");
    }
}

void print_num(int n){
    for(int i = 0; i < n; i++){
        printf("%d ", n);
    }
    printf("\n");
}

int main()
{
    int rows = 6;
    for(int i = 0; i <= rows; i++){
        print_sp(i,rows);
        print_num(i);
    }
    return 0;
}
