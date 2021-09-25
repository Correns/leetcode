//给定两个单词 word1 和 word2，找到使得 word1 和 word2 相同所需的最小步数，每步可以删除任意一个字符串中的一个字符。 
//
// 
//
// 示例： 
//
// 输入: "sea", "eat"
//输出: 2
//解释: 第一步将"sea"变为"ea"，第二步将"eat"变为"ea"
// 
//
// 
//
// 提示： 
//
// 
// 给定单词的长度不超过500。 
// 给定单词中的字符只含有小写字母。 
// 
// Related Topics 字符串 动态规划 👍 282 👎 0


// leetcode submit region begin(Prohibit modification and deletion)
#include "leetcode.h"

int minDistance(char * word1, char * word2){
    printf("%s", word1);
    printf("%s", word2);
    char * str = malloc(sizeof(char) * 16);
    int len = sizeof(char) * 16;
    errno_t rc = memset_s(str, len, 0, len);
    assert(rc == 0);
    rc = memcpy(str, "hello", strlen("hello"));
    assert(rc == 0);
    printf("str:%s\n", str);
    free(str);
    return 0;
}
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    printf("delete-operation-for-two-strings");
    printf("%d", minDistance("eat","sea"));
}