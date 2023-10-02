#include <stdio.h>
//importing math library for power function
#include <math.h>
void main()
{
    int n = 1010;
    int result = 0;
    int i = 0;
    while (n>0)
    {
        int last = n %10;
        result += last * (pow(2,i));
        n = n/10;
        i++;
    }
    printf("%d ",result);
          
}
