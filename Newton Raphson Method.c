#include<stdio.h>
#include<math.h>

double nrm (double);

int main()
{
    double a[100],b[100],c=100.0;
    int i=1,j=0;
    //b[0]=(240*pow(-0.5,4)+18*pow(-0.5,3)+9*pow(-0.5,2)-221*-0.5-9);
    printf("Enter initial guess:");
    scanf("%lf",&a[0]);
    printf("\n\n The values of iterations are:\n\n ");
    while(c>0.000000000001)
    {
        a[j+1]=nrm(a[j]);
        c=a[j+1]-a[j];
        c=fabs(c);
        printf("%d\t%.11f\n",j,a[j+1]);
        j++;

    }
    printf("\nThe root of the function is: %.11f",a[j]);
}

double nrm(double x)
{
    double y;
    y=x-((240*pow(x,4)+18*pow(x,3)+9*pow(x,2)-221*x-9)/(960*pow(x,3)+54*pow(x,2)+18*x-221));
    return y;
}

