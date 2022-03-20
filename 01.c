#include<stdio.h>
#include<math.h>

int main()
{
    float x, y;
    int z;
    
    scanf("%f %f %d", &x, &y,&z);
    printf("%f\n", trunc( x * y * pow(10, z) ) / pow(10.0, z) );
    printf("Ha Ha");
    return 0;
}
