#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int primary_sum = 0;
    int secondary_sum = 0;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if(i ==j)
        {
            primary_sum += a[i][j];
        }
       }
       
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if(i +j ==n-1)
        {
            secondary_sum += a[i][j];
        }
       }
       
    }
    
    printf("%d\n", abs(primary_sum - secondary_sum));
    // printf("%d\n",primary_sum);
    // printf("%d\n",secondary_sum);
    return 0;
}