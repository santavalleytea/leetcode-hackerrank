# Intuition
The main idea behind this solution is to identify the lowest price to buy the stock and then sell it at a price that gives the maximum profit. We iterate through the list of stock prices, continuously updating our buying price if we find a lower price and calculating the potential profit if we sold at the current price.

# Approach
1.  Start with the first price as our initial buying price and set the initial maximum profit to zero.
2. Iterate through prices
    - If the current price is lower than our stored buying price, we update our buying price to this lower value.
    - If the current price minus the buying price is greater than the current maximum profit, we update our maximum profit.
3. After going through all prices, we return the maximum profit found

# Complexity
- Time complexity:
The time complexity is O(n) where n is the number of days. This is because we iterate through the list of prices exactly once.

- Space complexity:
The space complexity is O(1), as we only use a few extra variables (for storing the buying price and maximum profit) and do not use any data structures that scale with the input size.
