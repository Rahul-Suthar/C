#include<stdio.h>
#include<conio.h>
#include<math.h>


float Equationsolve(int c, int d, int e, int f, int g, int h)
{
    float A,B;

    A = (d*h - g*e) / (d*f - g*c);
    B = (c*h - f*e) / (c*g - f*d);   

    printf("A is = %f\nB is = %f",A,B);

    return 0;
}


int main()
{
    int a,b,w,x,y,v;

    printf("Enter value of constant a , b and w : ");
    scanf("%d%d%d",&a,&b,&w);

    printf("Equation first is %dA + %dB = %d\n",a,b,w);

    printf("Enter value of constant x , y and v  : ");
    scanf("%d%d%d",&x,&y,&v);

    printf("Equation second is %dA + %dB = %d\n",x,y,v);

    Equationsolve(a,b,w,x,y,v);

    return 0;

}