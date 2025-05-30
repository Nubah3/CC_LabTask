#include<stdio.h>
int main(){
    char c;
    int num;
    scanf("%c",&c);
    if(c=='+'){
        scanf("%d",&num);
        int add = num+2;
        printf("%d",add);
    }
}