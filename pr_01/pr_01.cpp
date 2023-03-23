#include <math.h>
#include <stdio.h>
/*v = 1 + sin^2(x+y)/x- 2y/|1+x^2*y^2|* x^ |y| + cos^2(arctg1/z)
При x=3.74*10^-2 , y=-0.825, z=0.16*10^2, v=1.0553. */

int main()
{
    double x;
    double y;
    printf("Input x, y > ");
    scanf_s("%lf%lf", &x, &y);
    double z = 0.16 * pow(10, 2);
    double t1 = 1 + pow(sin(x + y), 2);
    double t2 = 2 * y / 1 + pow(x, 2) * pow(y, 2);
    double t3 = fabs(x - t2);
    double t4 = t1 / t3;
    double t5 = t4 * pow(x, fabs(y));
    double t6 = pow(cos(atan(1 / z)), 2);
    double t7 = t5 + t6;
    printf("%f", t7);
}