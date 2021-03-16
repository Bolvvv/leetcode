class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        result = []
        matrix_size = len(matrix)*len(matrix[0])
        tem_len = matrix_size
        top_left = [0,0]
        bottom_right = [len(matrix)-1, len(matrix[0])-1]
        while tem_len > 0 :
            #从左到右
            for i in range(bottom_right[1]-top_left[1]):
                result.append(matrix[top_left[0]][i+top_left[1]])
            #从上到下
            for j in range(bottom_right[0]-top_left[0]-1):
                result.append(matrix[top_left[0]+j+1][bottom_right[1]])
            #从右到左
            for m in range(bottom_right[1]-top_left[1]-1):
                result.append(matrix[bottom_right[0]][bottom_right[1]-m+1])
            #从下到上
            for n in range(bottom_right[0]-top_left[0]-2):
                result.append(matrix[bottom_right[0]+1+n][top_left[1]])
            top_left = [top_left[0]+1, top_left[1]+1]
            bottom_right = [bottom_right[0]-1, bottom_right[0]-1]