#include<stdio.h>
#include<conio.h>

int main()
{
 float i,j;
 float num;
 int k;
 j=0.0001;
 clrscr();

 printf("ENTER ANY NUMBER : ");
 scanf("%f",&num);

 for(i=0;i<num;i=i+j)
 {
  if((i*i)>num)
  {
   i=i-j;
   break;
  }
 }
 printf("%.2f",i);
 if(i*i==num)
 printf("perfect square");
 else
 printf("not perfect square");
 getch();
 return 1;
}
