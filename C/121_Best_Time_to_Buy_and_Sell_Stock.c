int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize < 2)
        return 0;
    int profit = 0, difference;
    int cost = prices[0];
    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] > cost)
        {
            difference = prices[i] - cost;
            if (difference > profit)
            {
                profit = difference;
            }
        }
        else
        {
            cost = prices[i];
        }
    }
    return profit;
}