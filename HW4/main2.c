#include <stdio.h>

void multiplication(int i, int j){
    int count  = 0;
    if(j < 10){
        printf("%d*%d=%d ",i,j,i*j);
        return multiplication(i,j+1);
    }else if(i < 9){
        printf("\n");
        j = 1;
        return multiplication(i+1,j);
    }
}

int main(){
    multiplication(1,1);
    return 0;
}
