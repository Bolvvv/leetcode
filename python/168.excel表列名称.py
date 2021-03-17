#
# @lc app=leetcode.cn id=168 lang=python3
#
# [168] Excel表列名称
#

# @lc code=start
class Solution:
    def num_to_string(self, num: int) -> str:
        numbers = {
            1 : "A",
            2 : "B",
            3 : "C",
            4 : "D",
            5 : "E",
            6 : "F",
            7 : "G",
            8 : "H",
            9 : "I",
            10 : "J",
            11 : "K",
            12 : "L",
            13 : "M",
            14 : "N",
            15 : "O",
            16 : "P",
            17 : "Q",
            18 : "R",
            19 : "S",
            20 : "T",
            21 : "U",
            22 : "V",
            23 : "W",
            24 : "X",
            25 : "Y",
            26 : "Z"
        }
        return numbers.get(num, None)
    def convertToTitle(self, columnNumber: int) -> str:
        array = []
        tmp_src = columnNumber
        i_num = 0
        r_num = 0
        result = ""
        while 1:
            if tmp_src <= 26:
                array.append(tmp_src)
                break

            i_num = tmp_src//26
            r_num = tmp_src%26

            if i_num != 0 and r_num == 0:
                array.append(26)
                if i_num <= 27:
                    array.append(i_num-1)
                    break
            elif i_num !=0 and r_num != 0:
                array.append(r_num)
                if i_num <= 26:
                    array.append(i_num)
                    break
            tmp_src = i_num
        for i in reversed(array):
            result+=self.num_to_string(i)
        return result
        
# @lc code=end