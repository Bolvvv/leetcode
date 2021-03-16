class NumMatrix(object):

    matrix = []
    def __init__(self, matrix):
        """
        :type matrix: List[List[int]]
        """
        self.matrix = matrix


    def sumRegion(self, row1, col1, row2, col2):
        """
        :type row1: int
        :type col1: int
        :type row2: int
        :type col2: int
        :rtype: int
        """
        sum_res = 0
        for i in range(row2-row1+1):
            for j in range(col2-col1+1):
                print(self.matrix[row1+i][col1+j])
                sum_res += self.matrix[row1+i][col1+j]
        return sum_res
matrix = [
  [3, 0, 1, 4, 2],
  [5, 6, 3, 2, 1],
  [1, 2, 0, 1, 5],
  [4, 1, 0, 1, 7],
  [1, 0, 3, 0, 5]
]
obj = NumMatrix(matrix)
obj.sumRegion(1,2,3,4)
