#include <stdio.h>

int main ()
{
    int number;
    int count;
    int result;
    int multi;
    int cnt;
    int rem;
    int q;

    printf("Insira o número: ");
    scanf("%d", &number);

    count = 0;
    result = 0;
    multi = 1;
    q = number;
    while(q != 0)//contar os digitos
    {
        q = q / 10;
        count++;
    }
    cnt = count;
    q = number;

    while(q != 0)//processo de soma e multiplicação Armstrong
    {
        rem = q % 10;
        while(cnt != 0)
        {
            multi = multi * rem;
            cnt--;
        }
        result = result + multi;
        cnt = count;
        q = q / 10;
        multi = 1;
    }
    if(result == number)
        printf("%d é número Armstrong", number);
    else
        printf("%d não é número Armstrong", number);
    return 0;
}

//https://www.youtube.com/watch?v=2qcUcon5Ux0&list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM&index=50