#include <stdio.h>

int main(void)
{
  int x,num;
  printf("Enter number : ");
  scanf("%d",&num);

 if((num==1 || num%2==0 || num%3==0 || num%4==0 || num%5==0 || num%6==0 || num%7==0) && (num!=2 && num!=3 &&  num!=4 &&  num!=5  && num!=6 && num!=7))
 {
   printf("Not prime number ! ! !");
 }else if(num>0){
   for(x=1;x<12;x++)
   printf("%d*%d = %d\n",num,x,num*x);
 }
    return 0;
}
