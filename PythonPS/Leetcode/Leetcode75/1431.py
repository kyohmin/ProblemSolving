class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxVal = max(candies)
        result = []
        for i in candies:
            result.append(i+extraCandies >= maxVal)

        return result