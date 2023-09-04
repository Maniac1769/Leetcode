class Solution(object):
    def thirdMax(self, nums):
        first_max = second_max = third_max = float('-inf')  # Initialize with negative infinity
    
        for num in nums:
            if num > first_max:
                third_max = second_max
                second_max = first_max
                first_max = num
            elif num > second_max and num != first_max:
                third_max = second_max
                second_max = num
            elif num > third_max and num != second_max and num != first_max:
                third_max = num
        
        # Check if a third maximum exists (not equal to negative infinity)
        if third_max != float('-inf'):
            return third_max
        else:
            return first_max  # Return the maximum if a third maximum doesn't exist

            