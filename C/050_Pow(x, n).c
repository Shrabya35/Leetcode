double myPow(double x, int n)
{
    if (n == INT_MIN)
    {
        x = 1 / x;
        n = -(n / 2);
    }
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }

    double result = 1;
    double current_product = x;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result *= current_product;
        }
        current_product *= current_product;
        n /= 2;
    }

    return result;
}
