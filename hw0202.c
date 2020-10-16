#include<stdio.h>
float main()
{
  float x1,x2,x3,x4,y1,y2,y3,y4;
  char aaaa;
  
  printf("Please enter the first line:");
  scanf("(%f,%f),(%f,%f)",&x1,&y1,&x2,&y2);
  scanf("%c",&aaaa);
  if(x1==x2 && y1==y2){
    printf("The line does not exist\n");
    return 0;
  }
  printf("Please enter the second line:");
  scanf("(%f,%f),(%f,%f)",&x3,&y3,&x4,&y4);
  if(x3==x4 && y3==y4){
    printf("The line does not exist\n");
    return 0;
  }
  float L1[4]={x1,y1,x2,y2};
  float L2[4]={x3,y3,x4,y4};
  /*line1((y2-y1)/(x2-x1))*(x-x1)+y1==y*/;
  /*line2((y4-y3)/(x4-x3))*(x-x3)+y3==y*/;
  float m1=(L1[3]-L1[1])/(L1[2]-L1[0]);
  float m2=(L2[3]-L2[1])/(L2[2]-L2[0]);
  float x,y;
  if(m1!=m2){
    x=(-m1*L1[0]+m2*L2[0]+L1[1]-L2[1])/-(m1-m2);
    y=m1*x-m1*L1[0]+L1[1];
  }
  else {
    printf("The intersection does not exist");
    return 0;
  }
  if((L1[0]<=x<=L1[2]||L1[2]<=x<=L1[0]) &&
     (L2[0]<=x<=L2[2]||L2[2]<=x<=L2[0]) &&
     (L1[1]<=y<=L1[3]||L1[3]<=y<=L1[1]) &&
     (L2[1]<=y<=L2[3]||L2[3]<=y<=L2[1]) ){
    printf("(%g,%g)\n",x,y);
  }
  else {
    printf("The intersection does not exist");
    return 0;
  }
  return 0;
} 



  

