#include<stdio.h>
int main()
{
    int row, col, R, C, val;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(row=0; row<R; row++)
    {
        for(col=0; col<C; col++)
        {
            scanf("%d", &val);
            if(col <= row)
            {
                printf("%d ", val);
            }
        }
        printf("\n");
    }
    return 0;
}