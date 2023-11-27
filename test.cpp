#include <stdio.h>

int main() {
    int n = 100; // 序列的项数
    double sum = 0.0; // 用于存储序列的和
    int sign = 1; // 符号，每一项的符号交替为正负

    for (int i = 1; i <= n; i++) {
        double term = (double)i / (i + 1); // 每一项的值
        sum += sign * term; // 将每一项累加到总和中
        sign = -sign; // 符号交替变换
    }

    printf("前%d项的和：%f\n", n, sum);

    return 0;
}