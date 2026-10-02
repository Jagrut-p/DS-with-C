/*Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
Example 1:
Input: s = "leetcode"
Output: 0
Explanation:
The character 'l' at index 0 is the first character that does not occur at any other index.
Example 2:
Input: s = "loveleetcode"
Output: 2
Example 3:
Input: s = "aabb"
Output: -1
Constraints:
1 <= s.length <= 105
s consists of only lowercase English letters.
*/
#include <stdio.h>
#include <conio.h>
int firstUniqChar(char *s)
{
    int x, i, j;
    int fla = 1;
    int flag = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (fla == 1)
        {
            for (j = (i + 1); s[j] != '\0'; j++)
            {
                if (s[i] == s[j])
                {
                    // printf("%d",i);
                    flag = 1;
                    fla = 0;
                    break;
                }
                else if (s[i] != s[j])
                {
                    flag = 0;
                    printf("%d", i);
                    x = i;
                }
            }
        }
        else
        {
            break;
        }
    }
    if (flag == 0)
    {
        // printf("%d", x);
    }
    else
    {
        printf("%d", -1);
    }
}
int main()
{
    firstUniqChar("leetcode");
}