#include<stdio.h>
#include<stdlib.h>
int day_diff(int ys,int ms,int ds,int ye,int me,int de){
  int d=0;
  for(int i=ys;i<ye;i++){
    if(i%400==0||(i%4==0 &&i%100!=0)){
      d=d+1;
    }
  }
  int A[12]={0,31,59,90,120,151,181,212,243,273,304,334};
  int B[12]={0,31,60,91,121,152,182,213,244,274,305,335};
  int d1,d2;
  if(ys%400==0||(ys%4==0 &&ys%100!=0)){
    d1=B[ms-1]+ds;
  }
  else{
    d1=A[ms-1]+ds;
  }
  if(ye%400==0||(ye%4==0 &&ye%100!=0)){
    d2=B[me-1]+de;
  }
  else{
    d2=A[me-1]+de;
  }
  return (ye-ys)*365+(d2-d1)+d;
}  
  
        



int main()
{ 
  int ys, ms, ds, ye, me, de;
  printf("Date Format: YYYY/MM/DD\n");
  printf("Start Date:");
  scanf(" %d/%d/%d",&ys,&ms,&ds);
  if(ys<0||ms<0||ms>12||ds<0){
    printf("error for ys<0||ms<0||ms>12||ds<0\n");
    return 0;
  }
  if((ms==1||ms==3||ms==5||ms==7||ms==8||ms==10||ms==12) && ds>31){
    printf("error for ds>31\n");
    return 0;
  }
  if((ms==4||ms==6||ms==9||ms==11) && ds>30){
    printf("error for ds>30\n");
    return 0;
  }
  if(ms==2){
    if(ys%400==0||(ys%4==0 &&ys%100!=0)){   
      if(ds>29){
        printf("error for ds>29\n");
        return 0; 
      }
    }
    else{
      if(ds>28){
        printf("error for ds>28\n");
        return 0;
      }
    }
  }

  printf("End Date:");
  scanf(" %d/%d/%d",&ye,&me,&de);
  if(ye<0||me<0||me>12||de<0){
    printf("error for ye<0||me<0||me>12||de<0\n");
          return 0;
  }
  if((me==1||me==3||me==5||me==7||me==8||me==10||me==12) && de>31){
   printf("error de>31\n");
   return 0;
  }
  if((me==4||me==6||me==9||me==11) && de>30){
    printf("error for de>30\n");
    return 0;
  }
  if(me==2){
    if((ye%400==0 && de>29)||(ye%4==0 && ye%100!=0 && de>29)){   
        printf("error for de>29\n");
        return 0;   
    }
    else{
      if(de>28){
        printf("error de>28\n");
        return 0;
      }
    }
  }

  int ans=day_diff(ys,ms,ds,ye,me,de);
  if (ans<0){
    printf("error for order");
    return 0;
  }
  printf("Duration : %d Day(s)\n",day_diff(ys,ms,ds,ye,me,de));
  return 0;
} 




