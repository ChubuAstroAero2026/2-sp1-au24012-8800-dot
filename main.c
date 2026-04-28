#include <stdio.h>

int main()
{
  double a;
  int b;
  scanf("%fl",&a);
  scanf("%d",&b);
  printf("%.*f",b,a);
  return 0;
}
