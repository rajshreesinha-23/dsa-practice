class Solution:
    def combinationSum(self, candidates, target):
        result = []
        
        def backtrack(start, remaining, path):
            # Base case: valid combination found
            if remaining == 0:
                result.append(path[:])
                return
            
            for i in range(start, len(candidates)):
                # Skip if number exceeds remaining target
                if candidates[i] > remaining:
                    continue
                
                # Choose the current number
                path.append(candidates[i])
                
                # Recurse (i, not i+1 → reuse allowed)
                backtrack(i, remaining - candidates[i], path)
                
                # Backtrack
                path.pop()
        
        candidates.sort()
        backtrack(0, target, [])
        return result
