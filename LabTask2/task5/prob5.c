#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    if(x>y)  printf("x is greater than y: %d\n",x);
    else  printf("y is greater than x: %d\n",y);

    return 0;
}
