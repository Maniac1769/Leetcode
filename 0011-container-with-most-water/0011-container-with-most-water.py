class Solution:
    def maxArea(self, h: List[int]) -> int:
        global w, g; w, g = 0, h; exec('l, r, w = 0, len(g)-1, 0\nwhile l < r:\n\tw = max(w, min(g[l], g[r]) * (r-l))\n\tif g[l] >= g[r]: r -=1\n\telse: l +=1', globals()); return w