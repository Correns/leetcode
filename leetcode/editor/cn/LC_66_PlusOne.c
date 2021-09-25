//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。 
//
// 最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。 
//
// 你可以假设除了整数 0 之外，这个整数不会以零开头。 
//
// 
//
// 示例 1： 
//
// 
//输入：digits = [1,2,3]
//输出：[1,2,4]
//解释：输入数组表示数字 123。
// 
//
// 示例 2： 
//
// 
//输入：digits = [4,3,2,1]
//输出：[4,3,2,2]
//解释：输入数组表示数字 4321。
// 
//
// 示例 3： 
//
// 
//输入：digits = [0]
//输出：[1]
// 
//
// 
//
// 提示： 
//
// 
// 1 <= digits.length <= 100 
// 0 <= digits[i] <= 9 
// 
// Related Topics 数组 数学 👍 757 👎 0

#include "leetcode.h"
//leetcode submit region begin(Prohibit modification and deletion)

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int newDigitsSize = digitsSize + 1;
    int * newDigits = (int*)malloc(sizeof(int) * newDigitsSize);
    memset(newDigits, 0, sizeof(int) * newDigitsSize);
    *returnSize = digitsSize;
    bool isFlag = true;
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] == 9 && isFlag) {
            newDigits[i + 1] = 0;
            newDigits[i] = 1;
        } else {
            if (isFlag) {
                newDigits[i + 1] = digits[i] + 1;
                isFlag = false;
            } else {
                newDigits[i + 1] += digits[i];
            }
        }
    }
    if (newDigits[0] != 1) {
        for (int i = 0; i < digitsSize; ++i) {
            newDigits[i] = newDigits[i + 1];
        }
    } else {
        *returnSize = newDigitsSize;
    }
    return newDigits;
}
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    printf("plus-one\n");

    int resultSize1 = 0;
    int digits1[3] = {1,2,3};
    int digitsSize1 = 3;
    int *param1 = plusOne(digits1, digitsSize1, &resultSize1);
    printf("123:%d\t", resultSize1);
    for (int i = 0; i < resultSize1; ++i) {
        printf("[%d] ", param1[i]);
    }
    free(param1);
    param1 = NULL;
    printf("\n");
    int resultSize2 = 0;
    int digits2[3] = {9,9,9};
    int digitsSize2 = 3;
    int *param2 = plusOne(digits2, digitsSize2, &resultSize2);
    printf("999:%d\t", resultSize2);
    for (int i = 0; i < resultSize2; ++i) {
        printf("[%d] ", param2[i]);
    }
    free(param2);
    param2 = NULL;

    return 0;
}