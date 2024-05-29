# week15-3.py
# LeetCode 1208. Get Equal Substrings Within Budget
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        # ���� Python ��r�ꪺ�j��g�X��
        N = len(s)  # �����D�r�ꪺ����
        ans = 0
        j = 0 #����Ϊ�����j
        for i in range(N):  # �r�ꪺ�j�� ����Ϊ��Yi
            maxCost -= abs(ord(s[i]) - ord(t[i]))  # �ΤF�h�֯�q, �~��Y��i��
            while maxCost < 0:  # ��q����, ���ڭn�Y
                maxCost += abs(ord(s[j]) - ord(t[j]))
                j += 1
            ans = max(ans, i-j+1)
        return ans
