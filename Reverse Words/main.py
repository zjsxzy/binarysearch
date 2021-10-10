# -*- coding: utf-8 -*-

class Solution:
    def solve(self, sentence):
        l = sentence.split(' ')
        return ' '.join(l[::-1])
