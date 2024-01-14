#include <stdio.h>

int main() {
    int a,b,c,d = 0;
    scanf("%d %d %d",&a,&b,&c);
    d = a + b + c;
    //printf("%d",d);
    if (d > 49){
        if (d < 55)
            printf("D");
        else if (d < 60)
            printf("D+");
        else if (d < 65)
            printf("C");
        else if (d < 70)
            printf("C+");    
        else if (d < 75)
            printf("B");
        else if (d < 80)
            printf("B+");
        else 
            printf("A");
    }
    else 
        printf("F");
}