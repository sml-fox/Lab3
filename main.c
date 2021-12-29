#include <math.h>
#include <stdio.h>

#define A 6.435
#define B 1.87
#define x 1



main( )
{
    float c;
    double g = 4.751;
    if ((g < A) & (g > B))
    {
        c = pow(g, 1.4) + B * pow(sin(A / 2), 2); // pow - вводить число в ступінь
        printf("%f", c);
    }
    else
        if ( g < B)
        {
            c = x * pow(g, 1.4) +B;
            printf("%f", c);
        }
        
}


