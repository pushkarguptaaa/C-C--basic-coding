#include<stdio.h>
void pattern(int n)
{
   int i,j;
  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
     if(i==1||i==n||j==1||j==n)
       printf("1");
      else
        printf(" ");
    }
    printf("\n");
  }
}
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
}
