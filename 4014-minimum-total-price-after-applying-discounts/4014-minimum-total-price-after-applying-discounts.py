class Solution:
    def minPrice(self, prices: list[int], discounts: list[int]) -> float:
        def discounted_price(p, d):
            return ((p * (100 - d))/100)

        discounts = sorted(discounts, reverse=True)
        prices = sorted(prices, reverse=True)

        i = 0 ; ans = 0
        if len(prices) >= len(discounts):
            for i in range(len(discounts)):
                ans += discounted_price(prices[i], discounts[i])
            ans += sum(prices[len(discounts):])
        else :
            for i in range(len(prices)):
                ans += discounted_price(prices[i], discounts[i])

        return ans

        