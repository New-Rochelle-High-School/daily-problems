import itertools

class Solution:
    def letterCombinations(self, digits: str) -> list:
        values = {2 : 'abc', 3: 'def', 4 : 'ghi', 
                  5 :'jkl', 6 : 'mno', 7 : 'pqrs',
                  8:'tuv', 9 : 'wxyz'}
        
        letters = [[j for j in values[int(i)]] for i in digits]  

        result = itertools.product(*letters)
        
        result = [''.join(i) for i in result]
            
        return result if result != [''] else []