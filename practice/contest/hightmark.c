#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int highestMark = ar[0];
    for (int i = 0; i < n; i++)
    {
        if(ar[i] >highestMark)
        {
            highestMark = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",highestMark- ar[i]);
    }
    
    return 0;
}