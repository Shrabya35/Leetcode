int reverse(int x)
{
    int reversed = 0, reminder;
    while (x != 0)
    {
        reminder = x % 10;
        if ((reversed > INT_MAX / 10) ||
            (reversed < INT_MIN / 10) ||
            (reversed == INT_MAX / 10 && reminder > INT_MAX % 10) ||
            (reversed == INT_MIN && reminder > INT_MIN % 10))
        {
            return 0;
        }
        else
        {
            reversed *= 10;
        }
        reversed += reminder;
        x /= 10;
    }
    return reversed;
}