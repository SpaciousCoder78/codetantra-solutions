

#include <stdio.h>
void main(){
  float p,t,r;
  printf("Enter principal, rate and time: "); 
  scanf("%f %f %f",&p,&t,&r);
  float si = (p*t*r)/100;
  printf("Simple Interest = %f\n",si);
}
