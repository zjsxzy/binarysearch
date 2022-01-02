# -*- coding: utf-8 -*-

class Solution:
    def solve(self, s):
        l = s.split('<-')
        res = ""
        for x in l:
            res = res[:-1]
            res += x
        return res

