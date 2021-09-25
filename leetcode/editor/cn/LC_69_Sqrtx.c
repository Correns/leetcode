//给你一个非负整数 x ，计算并返回 x 的 平方根 。
//
// 由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
//
// 注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。
//
//
//
// 示例 1：
//
//
//输入：x = 4
//输出：2
//
//
// 示例 2：
//
//
//输入：x = 8
//输出：2
//解释：8 的平方根是 2.82842..., 由于返回类型是整数，小数部分将被舍去。
//
//
//
//
// 提示：
//
//
// 0 <= x <= 2³¹ - 1
//
// Related Topics 数学 二分查找 👍 775 👎 0

#include "leetcode.h"

// leetcode submit region begin(Prohibit modification and deletion)

#define MAX_SQRT (1024 * 64) // 2^16

int mySqrt(int x) {
    int low = 0, high = x, result = -1;
    while (1 <= high) {
        int mid = low + (high - 1) / 2;
        printf("\n[m:%d]",mid);
        if ((long long)mid * mid <= x) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        printf("[h:%d][l:%d]",high,low);
    }
    return result;
}
// leetcode submit region end(Prohibit modification and deletion)

int main() {
    printf("sqrtx 8:%d\n", mySqrt(8));
//    printf("sqrtx 8:%d\n", mySqrt(2147395599));
//    printf("sqrtx 8:%d\n", mySqrt(65));
}