class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        if dividend == INT_MIN and divisor == -1:
            return INT_MAX
        negative = (dividend < 0) ^ (divisor < 0)
        dvd = abs(dividend)
        dvs = abs(divisor)

        ans = 0
        for i in range(31, -1, -1):
            if (dvd >> i) >= dvs:
                ans += (1 << i)
                dvd -= (dvs << i)
        if negative:
            ans = -ans

        return ans
