#include<stdio.h>
int main()
{
  char aaaa;
  int salary;
  printf("Gross salary:");
  scanf("%d",&salary);
  if(salary<0)
  {
    printf("error for salary\n");
    return 0;
  }
  scanf("%c",&aaaa);
  
  int marry;
  printf("Married(0/1):");
  scanf("%d",&marry);
  if(marry!=0||marry!=1) 
  {
    printf("error for married\n");
    return 0;
  }
  scanf("%c",&aaaa);
  
 

  int member;
  printf("How many people are there in your family:");
  scanf("%d",&member);
  if(member<0) 
  {
    printf("error for member\n");
    return 0;
  }
  scanf("%c",&aaaa);
 

  int income;
  printf("How many people in your family have income:");
  scanf("%d",&income);
  if(income<0||income>member) 
  {
    printf("error for earners\n");
    return 0;
  }
  scanf("%c",&aaaa);

  int SI;
  printf("Secial Deduction for Savings and Investment:");
  scanf("%d",&SI);
  if(SI<0||SI>1) 
  {
    printf("error for Savings and Investment\n");
    return 0;
  }
  scanf("%c",&aaaa);

  int T;
  printf("Secial Deduction for Tuition:");
  scanf("%d",&T);
  if(T<0||T>member) 
  {
    printf("error for Tuition\n");
    return 0;
  }
  scanf("%c",&aaaa);

  int children;
  printf("How many preschool children:");
  scanf("%d",&children);
  if(children<0||children>member) 
  {
    printf("error for preschool children\n");
    return 0;
  }
  scanf("%c",&aaaa);


  int disable;
  printf("How many disable people:");
  
  scanf("%d",& disable);
  if(disable<0||disable>member) 
  {
    printf("error for disable people\n");
    return 0;
  }
  scanf("%c",&aaaa);

  float x=salary-(marry+1)*120000-member*88000-income*200000-SI*270000
        -T*250000-children*120000-disable*200000;
  if (0<=x && x<=540000){
  printf("Total tax: %0.0f\n",x*0.05);
  }
  if (540001<=x && x<=1210000){
  printf("Total tax: %0.0f\n",x*0.12-37800);
  }
  if (1210001<=x && x<=2420000){
  printf("Total tax: %0.0f\n",x*0.2-134600);
  }
  if (2420001<=x && x<=4530000){
  printf("Total tax: %0.0f\n",x*0.3-376600);
  }
  if (5430001<=x){
  printf("Total tax: %0.0f\n",x*0.4-82900);
  }
}
