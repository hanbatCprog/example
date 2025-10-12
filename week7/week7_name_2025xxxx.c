#include <stdio.h>

int main(void) {
int sum = 0; // 합을 저장할 변수

for (int i = 1; i <= 30; i++) {
    sum += (i * i + 1); // i^2 + 1을 누적
}

printf("Sum = %d\n", sum);
return 0;
}
