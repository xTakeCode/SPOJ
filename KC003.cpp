#include <stdio.h>
int main()
{

    float a, b, c;

    while (scanf("%f %f %f",&a,&b,&c) != EOF) // EOF end of file char
    {
        if ((a < (b + c)) && (b < (c + a)) && (c < (a + b)))
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}

