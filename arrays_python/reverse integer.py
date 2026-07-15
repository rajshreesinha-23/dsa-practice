class Solution:
    def reverse(self, x):
        sign = -1 if x < 0 else 1
        x = abs(x)

        rev = 0
        INT_MAX = 2**31 - 1

        while x:
            digit = x % 10
            x //= 10

            # 🔥 precise overflow check
            if rev > INT_MAX // 10 or (rev == INT_MAX // 10 and digit > 7):
                return 0

            rev = rev * 10 + digit

        return sign * rev
