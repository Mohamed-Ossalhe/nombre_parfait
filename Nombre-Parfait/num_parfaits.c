#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s=0;
    printf("Entre un Nombre: ");
    scanf("%d", &n);
    if(n == 0)
    {
        printf("Error");
        exit(0);
    }

    for (i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            s+=i;
        }

    }
    if (s==n)
    {
        printf("est un nombre parfait");
    } else
    {
        printf("pas un nombre parfais");
    }


    return 0;
}
