#include <stdio.h>

int main(){

    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int e;
    scanf("%d",&e);
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j] == e)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
    if(flag  ==1)
    {
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }
    return 0;
}
