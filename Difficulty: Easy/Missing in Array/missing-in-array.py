class Solution:
    def missingNum(self, arr):
        n = len(arr)
        total = (n + 1) * (n + 2) // 2  
        sum_of_arr = sum(arr)
        return total - sum_of_arr
