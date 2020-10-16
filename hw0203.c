#include<stdio.h>
int main()
{
  char aaaa;
  int salary;
  printf("Gross salary:");
  scanf("%d",&salary);
  scanf("%c",&aaaa);
  
  int marry;
  printf("Married(0/1):");
  scanf("%d",&marry);
  scanf("%c",&aaaa);
 

  int member;
  printf("How many people are there in your family:");
  scanf("%d",&member);
  scanf("%c",&aaaa);
 

  int income;
  printf("How many people in your family have income:");
  scanf("%d",&income);
  scanf("%c",&aaaa);

  int SI;
  printf("Secial Deduction for Savings and Investment:");
  scanf("%d",&SI);
  scanf("%c",&aaaa);

  int T;
  printf("Secial Deduction for Tuition:");
  scanf("%d",&T);
  scanf("%c",&aaaa);

  int children;
  printf("How many preschool children:");
  scanf("%d",&children);
  scanf("%c",&aaaa);


  int disable;
  printf("How many disable people:");
  scanf("%d",& disable);
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
