#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vector{
  double x;
  double y;
  double z;
}
typedef struct vector Vector

short rand3D(3Dpoint* x);
short print3D(3Dpoint* x);

int main(){
  Vector 3dp[50];

  rand3D(3dp);
  print3D(3dp);
  
  return 0;
}





