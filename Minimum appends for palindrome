# Minimum Appends for Palindrome!
# Problem Description

# Given a string A consisting of lowercase characters.

# We need to tell minimum characters to be appended (insertion at end) to make the string A a palindrome.



    def ispalindrome(self,A):
        i = 0
        j = len(A)-1
        while(i<=j):
            if A[i] != A[j]:
                return False
            i+=1
            j-=1
        return True
    def solve(self, A):
        if self.ispalindrome(A):
            return 0
        A = A[1:]
        return 1+self.solve(A)
