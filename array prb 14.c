#include <stdio.h>

int main ()
{
    int n, m, i, j;

    scanf("%d", &n);

    int a[n], c[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    int b[m], d[m];

    for (j = 0; j < m; j++)
        scanf("%d", &b[j]);

    printf("Array A:");
    for (int k = 0; k < m; k++)
    {
       /* d[k] = b[j];
        b[j] = a[i];
        a[i] = d[k]; */

        printf("%d ", b[k]);
    }

    printf("\n");

    printf("Array B:");
    for (int l = 0; l < n; l++)
    {
      /*  c[l] = a[i];
        a[i] = b[j];
        b[j] = c[l];
        */

        printf("%d ", a[l]);
    }

    return 0;

}
