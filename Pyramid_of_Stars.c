#include <stdio.h>

int main ()
{
    int n; 
    int linhas; 
    int colunas;

    printf("Quantas linhas queres na piramide?\n");
    scanf("%d", &n);

    for(linhas = 1; linhas <= n; linhas++)
    {
        for(colunas = 1; colunas <= 2 * n - 1; colunas++)
        {
            if(colunas >= n - (linhas - 1) && colunas <= n + (linhas - 1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//https://www.youtube.com/watch?v=KdM6OrvcjPI&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=48