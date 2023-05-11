#include<stdio.h>
// #define PI 3.14159265
int main()
{
    int radius=5;
    const double PI=3.14159265;
    double circumference = 2 * radius * PI;
    printf("radius:%d, circmfference:%1f\n",radius,circumference);
    return 0;
}