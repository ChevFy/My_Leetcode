
int	maxProfit(int *prices, int pricesSize)
{
	int max;
	int minprice = prices[0];

	for(int i = 1 ; i < pricesSize; i++)
	{
		if(prices[i] < minprice)
			minprice = prices[i];
		else{
			int profit = prices[i] - minprice;
			if(profit > max)
				max = profit;
		}
	}
	return max;

}
