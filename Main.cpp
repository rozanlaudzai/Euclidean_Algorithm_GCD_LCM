#include <stdio.h>

int gcd(int a, int b) {
  if(b > 0)
    return gcd(b, a % b);
  return a;
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

int main() {

  int a, b;
  scanf("%d%d", &a, &b);

  printf("GCD = %d\n", gcd(a, b));
  printf("LCM = %d\n", lcm(a, b));

}