#include <stdio.h>

int main() {
    // 1. 定义两个整数变量 a 和 b，并给它们赋值
    int a = 2026;
    int b = 100;
    
    // 2. 定义一个新变量 sum，用来存计算结果
    int sum = a + b;
    
    // 3. 把结果打印出来，注意这里的 %d 是个“占位符”
    printf("a 和 b 的和是：%d\n", sum);
    
    return 0;
}