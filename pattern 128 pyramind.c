#include<stdio.h>

int main(){
  int n ;
  int i,j;

  printf("enter the number : ");  
  scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
      for(j=n;j>=1;j--){

        if(i>=j)
          printf("* ");
        else
          printf(" ");
      }
        printf("\n");
    }
  
 return 0;
} 
