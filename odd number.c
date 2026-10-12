#include <stdio.h>
void oddnumber(int n)
{
    if(n>=10)
    return ;
  printf("%d",n-1);
  oddnumber(n*2);
}

int main()
{
    oddnumber(1);
    return 0;
}