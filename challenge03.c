#include <stdio.h>

void maximum(int n1,int n2){
    int max=n1;
    if(n1<n2){
        max=n2;
    }
    printf("le maximum est : %d \n",max);
}
int main() {
maximum(6,36);
    return 0;
}
