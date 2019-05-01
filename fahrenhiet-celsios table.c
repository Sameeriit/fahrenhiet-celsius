#include<stdio.h>
/*i am going to print fahrenheit-celsios table*/
main()
{
float fahren,celsius;
int lower,upper,step;
printf("fahren\tcelsius\n");
lower=0;     /*lower limit*/
upper=300;   /*upper limit*/
step=20;     /*step size*/
fahren=lower;
while(fahren<=upper)
{
celsius=5.0/9.0*(fahren-32);
printf("%3.0f\t%6.1f\n ",fahren,celsius);
fahren=fahren+step;
}
}
