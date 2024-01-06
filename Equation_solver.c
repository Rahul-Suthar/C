// With the help of this code we can find the solution of linear equation having two variable ..(also two equations )


/*Here in this code we are taking two equation as 1) aA + bB = w  and 2) xA + yB = v
 
  by this  two equation we are going to find the values of two variable  A & B 
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>

// This is function to find the values of variable and print them using main function ..

float Equationsolve(int c, int d, int e, int f, int g, int h)
{
    float A,B;

    
    if (d*f == g*c) {
        if ((d*h == g*e) || (c*h == f*e)) {
            printf("The system of linear equations have many solutions.\n");
        }
        else {
            printf("The system of linear equation have no solutions.\n");
        }
    }
    else{
        if (d*f != g*c) {
            printf("The system of linear equation have Unique solutions.\n");
            
            A = ((d*h - g*e))*1.0 / ((d*f - g*c))*1.0 ;
            B = ((c*h - f*e))*1.0 / ((c*g - f*d))*1.0 ;
            
            printf("A is = %f\nB is = %f",A,B);
        }
        else{
            printf("Error\n");
        }

    }
    return 0;
}


int main()
{

// taking six constants as there are two equations we need three-three constants per equation ..


    int a,b,w,x,y,v;

// Taking input for the constant of first equation named a ,b and w


    printf("Enter value of constant a , b and w : ");
    scanf("%d%d%d",&a,&b,&w);


// It will print the first equation ..


    printf("Equation first is %dA + %dB = %d\n",a,b,w);


// Taking input for the constant of second equation named x, y and v


    printf("Enter value of constant x , y and v  : ");
    scanf("%d%d%d",&x,&y,&v);


// It will print the second equation ..


    printf("Equation second is %dA + %dB = %d\n",x,y,v);


// Here we are recalling the above function we made to print the values of variable using main function ....


    Equationsolve(a,b,w,x,y,v);

    return 0;

}
