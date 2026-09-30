# [Longest Repeating Character Replacement](https://www.geeksforgeeks.org/problems/longest-repeating-character-replacement/1)
## Medium
Given a string s&nbsp;of length n&nbsp;consisting of uppercase English letters and an integer k, you are allowed to perform at most k operations.&nbsp; In each operation, you can change any character of the string to any other uppercase English letter.
 Determine the length of the longest substring that can be transformed into a string with all identical characters after performing at most k such operations.
Examples:
Input: s = "ABBA", k = 2 Output: 4 Explanation: The string "ABBA" can be fully converted into the same character using at most 2 changes. By replacing both 'A' with 'B', it becomes "BBBB". Hence, the maximum length is 4.
Input: s = "ADBD", k = 1
Output: 3
Explanation: In the string "ADBD", we can make at most 1 change. By changing 'B' to 'D', the string becomes "ADDD", which contains a substring "DDD" of length 3.
Constraints:1&nbsp;≤ n, k ≤ 105s consists of only uppercase English letters.