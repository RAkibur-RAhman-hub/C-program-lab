#include<stdio.h>
#include<math.h>
int main () {
    double a,b,c, x1,x2, d ,real,img;
    printf("Enter a, b, c : ");
    scanf("%lf %lf %lf",&a,&b,&c);
   // printf("\n%d",b);
    d = (b*b)-4*a*c;

    //x1 = sqrt(d);
    //printf("%d",x1);

    if(d>0) {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("root1 = %lf\n",x1);
        printf("root2 = %lf",x2);
    } else if (d==0)
    {
        x1=x2= (-b)/2*a;
        printf("root1=root2= %lf",x1);
    } else if(d<0) {
        real = -b/(2*a);
        img = sqrt(-d)/(2*a);
        printf("root1 = %0.2lf + %0.2lf i\n",real,img);
        printf("root2 = %0.2lf - %0.2lf i\n",real,img);
    }

    return 0;
}