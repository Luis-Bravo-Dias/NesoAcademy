#include <stdio.h>

int main()
{
    int n;
    int result;
    int q;
    int rem;

    printf("Insira um número: ");
    scanf("%d", &n);

    result = 0;
    q = n;

    while(q != 0)//reversa o numero
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }

    if(result == n)
        printf("Palindromo");
    else
        printf("Não é palindromo");
    return 0;
}

//https://www.youtube.com/watch?v=LJ0m-8zGRB4&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=49