#include<stdio.h>
    void main ()
    {
        int b[10][10];
        int i, j, m, n, a = 0, sum = 0;
        printf("Enetr the order of the matix :");
        scanf("%d %d", &m, &n);
        printf("%d\t%d",m,n);
        if (m == n ) 
        {
            printf("\nEnter the co-efficients of the matrix\n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d", &b[i][j]);
                    printf("%d\t",b[i][j]);
                }
                printf("\n");
            }
            printf("The given matrix is \n");
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j)
                {
                    printf(" %d\t", b[i][j]);
                }
                printf("\n");
            }
            for (i = 0; i < m; ++i) 
            {
                sum = sum + b[i][i];
                a = a + b[i][m - i - 1];
            }
            printf("\nThe sum of the PRINCIPAL diagonal elements is = %d\n", sum);
            printf("The sum of the off secondary diagonal elements is   = %d\n", a);
        }
        else
            printf("The given order is not square matrix\n");
    }