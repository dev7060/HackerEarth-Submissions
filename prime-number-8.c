#include <stdio.h>
int main(){
    int n, i, j, temp;
    scanf("%d", &n);
    if(n>3)
        printf("%d %d ", 2, 3);
    for(i=5; i<=n; i+=2){
        temp=i/2;
        for(j=2; j<=temp; j++)
            if(i%j==0)
                break;
        if(j>temp)
            printf("%d ", i);
    }
}
