class Solution:
    def isValidSudoku(self, board):
        rows = [[0]*9 for _ in range(9)]
        cols = [[0]*9 for _ in range(9)]
        boxes = [[0]*9 for _ in range(9)]

        for i in range(9):
            for j in range(9):
                if board[i][j] == '.':
                    continue
                num = ord(board[i][j]) - ord('1')
                box = (i // 3) * 3 + (j // 3)
                if rows[i][num] or cols[j][num] or boxes[box][num]:
                    return False
                rows[i][num] = 1
                cols[j][num] = 1
                boxes[box][num] = 1
        return True
