class Solution(object):
    def reverseWords(self, s):
        l=[x for x in s.split()]
        return (' ').join(l[::-1])