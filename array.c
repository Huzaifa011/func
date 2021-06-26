#include<stdio.h>
#include<conio.h>
int sum(int a,int b,int c,int d,int e)

{  
  int s;
  s=(a+b+c+d+e);
 
    return s;
}



int main()
{  int a,b,c,d,e,s;
   printf("enter the no.=");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  
    sum(a,b,c,d,e);
    printf("sum of these no.s are",s);
    return 0;
}