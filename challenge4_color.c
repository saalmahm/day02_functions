#include <stdio.h>

void minimum(int n1,int n2){
    int min=n1;
    if(n1>n2){
        min=n2;
    }
    printf(" \033[32m le minimum est : %d \n",min);
    printf("\033[0m");
    printf("hhhh");
}
int main() {
minimum(600,356);

    return 0;
}
