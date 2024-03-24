#include<stdio.h>
int main(){
    printf("查看单数\n");
    printf("输入你想要查询的数字\n");
    int a=0;
    scanf("%d",&a);
    printf("单数如下\n");
    int b=0;
    for(int i=1;i<=a;i++){
        if((i%2)!=0){
            printf("%d  ",i);
            b++;
        }
        if(b%5==0){
            printf("\n");
        }
    }
    return 0;
}