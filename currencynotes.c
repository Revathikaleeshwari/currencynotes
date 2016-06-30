#include<stdio.h>
int main()
{
int rs,a,b,c,d,e;
clrscr();
printf("Enter the amount in rs:");
scanf("%d",&rs);
while(rs>=500)
{
a=rs/500;
rs=rs%500;
printf("\n The number of 500 are:%d",a);break;
}
while(rs>=100)
{
b=rs/100;
rs=rs%100;
printf("\n The number of 100 :%d",b);break;
}
while(rs>=50)
{
c=rs/50;
rs=rs%50;
printf("\n The number of 50 :%d",c);break;
}
while(rs>=10)
{
d=rs/(3*10);
rs=rs%(3*10);
printf("\n The number of 10 :%d",d);break;
}
while(rs>=1)
{
e=rs/(9*1);
rs=rs%(9*1);
printf("\n The number of 1 :%d",e);break;
}
return 0;
}
