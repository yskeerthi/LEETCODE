class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        binary_length = len(bin(num)) - 2  
        mask = (1 << binary_length) - 1
        return num ^ mask

        