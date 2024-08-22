class Solution:
    def bitwiseComplement(self, n: int) -> int:
        bits = list(bin(n))[2:]
        for i, value in enumerate(bits):
            bits[i] = "1" if value == "0" else "0"
        
        return int("".join(bits), 2)