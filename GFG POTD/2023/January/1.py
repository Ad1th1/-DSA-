# https://practice.geeksforgeeks.org/problems/count-even-length1907/1

import math
mod = 10**9 + 7;
class Solution:

	def compute_value(self, n):
		# Code here
		a = math.factorial(2*n)
		b = math.factorial(n)
		return (a//(b**2))%mod
