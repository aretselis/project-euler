#include <stdio.h>

#define MAX_VALUE 1000

int main(){
    int summation=0;
    int counter;

    for(counter=0; counter<MAX_VALUE; counter++){
        if(counter % 3 == 0 || counter % 5 ==0){
            summation += counter;
        }
    }
    printf("The result is %d", summation);
    return 0;
}