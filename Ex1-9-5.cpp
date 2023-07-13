#include <stdio.h>
int main(){
  int x = 24;
  printf("%d\n", x > 34 && x < 45);
  printf("%d\n", x > 13 || x < 22);
  printf("%d", !(x > 23 && x < 12));
  return 0;
}
