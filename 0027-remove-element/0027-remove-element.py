class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        R = len(nums)-1
        if R < 0:
            return 0
        L = 0
        while L < R:
            while nums[R] == val and L < R:
                R -= 1
            if nums[L] == val:
                nums[L], nums[R] = nums[R], nums[L]
            L += 1
        if nums[R] == val:
            del nums[R:]
        else:
            del nums[R+1:]
        return len(nums)