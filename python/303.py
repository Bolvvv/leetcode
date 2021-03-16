class NumArray(object):

    array = []

    prefix_result = []

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.array = nums
        #计算前缀
        temp_sum = 0
        for i in self.array:
            temp_sum += i
            self.prefix_result.append(temp_sum)



    def sumRange(self, i, j):
        """
        :type i: int
        :type j: int
        :rtype: int
        """
        if i == 0:
            return self.prefix_result[j]
        else:
            return  self.prefix_result[j] - self.prefix_result[i-1]

obj = NumArray([-1])
param_1 = obj.sumRange(0,0)
print(param_1)
param_2 = obj.sumRange(0,0)
print(param_2)

# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)