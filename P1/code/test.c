// SysY 示例程序：数组平方和判断 
// 涵盖：变量/常量、数组、函数、条件分支、循环、算术运算、注释

const int N = 5;
const int THRESHOLD = 30;

// 计算数组的平方和
int square_sum(int arr[]) {
    int s = 0;
    int i = 0;
    while (i < N) {
        s = s + arr[i] * arr[i];  // 数值运算 + 赋值
        i = i + 1;
    }
    return s;
}

// 主函数
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int total;

    total = square_sum(a);

    if (total > THRESHOLD) {
        return 1;   // 条件分支：大于阈值
    } else {
        return 0;   // 条件分支：不大于阈值
    }
}


