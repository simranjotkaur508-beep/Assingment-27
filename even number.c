#include <stdio.h>
void oddnumber(int n)
{
    if(n>=20)
    return ;
  printf("%d",n);
  oddnumber(n*2);
}

int main()
{
    oddnumber(1);
    return 0;
}