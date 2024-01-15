#include <stdio.h>
int main() {
    int i;
    scanf("%d", &i);
    int num[i];
    for(int j = 0;j < i;j++) {
        scanf("%d", &num[j]);
    }
    int Max = num[0], Min = num[0];

    for(int j = 0;j < i;j++) {
        if(Max < num[j])
            Max = num[j];
        if(Min > num[j]) 
            Min = num[j];
    }
    printf("%d\n%d",Min,Max);

}