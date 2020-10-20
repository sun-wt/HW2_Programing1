#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int main()
{
  int a,b,c,d,e;
  printf("Please enter 5 cards:");
  scanf(" %d %d %d %d %d",&a,&b,&c,&d,&e);
  if(a<1||a>52||b<1||b>52||c<1||c>52||d<1||d>52||e<1||e>52)
  {
    printf("wrong input\n");
    return 0; 
  }
  else if(a==b||a==c||a==d||a==e||b==c||b==d||b==e||c==d||c==e||d==e) 
  {
    printf("wrong input\n");
     return 0; 
  }
  char A[5]={};
  char B[5]={};
  char N[5]={a,b,c,d,e};
  char P[4]={'A','B','C','D'};
  int Pn[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  int p=0;
  for(int i=0;i<=4;i++)
  {
    p=0;
    while(N[i]>13)
    {
      N[i]=N[i]-13;
      p=p+1;
    }
    A[i]=P[p];
    B[i]=Pn[N[i]-1];
  }
 
  int Answer[5]={0,0,0,0,0};
  for(int j=0;j<13;j++)
  {
    for(int k=0;k<5;k++)
    {
      if(Pn[j]==B[k])
      {
        for(int l=0;l<5;l++)
        {
          if(Answer[l]==0){
            Answer[l]=Pn[j];
            break;
          }
        }
      }
    }
  }
  

  //condition1 <same kind>
  int c1=0;
  if((A[0]==P[0] && A[1]==P[0] && A[2]==P[0] && A[3]==P[0] && A[4]==P[0])||
     (A[0]==P[1] && A[1]==P[1] && A[2]==P[1] && A[3]==P[1] && A[4]==P[1])||
     (A[0]==P[2] && A[1]==P[2] && A[2]==P[2] && A[3]==P[2] && A[4]==P[2])||
     (A[0]==P[3] && A[1]==P[3] && A[2]==P[3] && A[3]==P[3] && A[4]==P[3]))
  {
    c1=1;
  }

  //condition2 <generalized stright>
  int c2=0;
  int in=Answer[0]; 
  if(Answer[1]==in+1 && Answer[2]==in+2 && Answer[3]==in+3 &&
     Answer[4]==in+4)
  {
    c2=1;
  }
  else if(Answer[0]==10 && Answer[1]==11 && 
          Answer[2]==12 && Answer[3]==13 && Answer[4]==1)
  {
    c2=1;
  }

  //condition3 <same number*4>
  int c3=0;
  if(Answer[0]==Answer[3]||Answer[1]==Answer[4])
  {
    c3=1;
  }

  //condition4 <full house>
  int c4=0;
  if(Answer[0]==Answer[2] && Answer[3]==Answer[4])
  {
    c4=1;
  }
  else if(Answer[2]==Answer[4] && Answer[0]==Answer[1])
  {
    c4=1;
  }
  
  //condition5 <three of a kind>
  int c5=0;
  if((Answer[1]==Answer[3])||
     (Answer[0]==Answer[2] && Answer[2]!=Answer[3] && Answer[3]!=Answer[4])||
     (Answer[2]==Answer[4] && Answer[1]!=Answer[2] && Answer[2]!=Answer[3]))
  {
    c5=1;
  }

  //condition6 <two pair>
  int c6=0;
  if(Answer[0]==Answer[1] && Answer[2]==Answer[3] 
     &&Answer[4]!=Answer[3])
  {
    c6=1;
  }
  else if(Answer[0]==Answer[1] && Answer[3]==Answer[4] &&
           Answer[2]!=Answer[3] && Answer[2]!=Answer[1])
  {
    c6=1;
  }
  else if(Answer[1]==Answer[2] && Answer[3]==Answer[4] &&
           Answer[0]!=Answer[1])
  {
    c6=1;
  }
 
  //condition7 <one pair>
  int c7=0;
  if(Answer[0]==Answer[1] && Answer[1]!=Answer[0] && 
      Answer[2]!=Answer[3] && Answer[3]!=Answer[4]){
    c7=1;
  }
  else if(Answer[2]==Answer[1] && Answer[3]!=Answer[4] &&
           Answer[2]!=Answer[3] && Answer[0]!=Answer[1]){
    c7=1;
  }
  else if(Answer[3]==Answer[2] && Answer[3]!=Answer[4] &&
           Answer[0]!=Answer[1] && Answer[2]!=Answer[1]){
    c7=1;
  }
  else if(Answer[3]==Answer[4] && Answer[3]!=Answer[2] &&
           Answer[0]!=Answer[1] && Answer[2]!=Answer[1]){
    c7=1;
  }
  
  //Straight flush 
  int c8=0;
  if(c1==1 && c2==1){
    printf("Straight flush\n");
    c8=1;
  return 0;
  }
  
  //Four of a kind
  if(c3==1){
  printf("Four of a kind\n");
  return 0;
  }

  //Full house
  if(c4==1){
  printf("Full house\n");
  return 0;
  }

  //Flash
  int c9=0;
  if(c1==1 && c2==0){
    printf("Flush\n");
  c9=1;
  return 0;
  }

  //Straight
  int c10=0; 
  if(c1==0 && c2==1){
    printf("Straight\n");
  c10=1;
  return 0;
  }
  
  //Three of a kind
  if(c5==1){
  printf("Three of a kind\n");
  }
  
  //Two pair
  if(c6==1){
  printf("Two pair\n");
  return 0;
  }
  
  //One pair
  if(c7==1){
  printf("One pair\n");
  return 0;
  }
  
  //High card
  if(c8!=1 && c9!=1&& c10!=1 && c3!=1 && c4!=1 && c5!=1 && c6!=1 &&c7!=1){
  printf("High card\n");
  }
  return 0;
}
