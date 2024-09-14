int romanToInt(char *s)
{
    int sum = 0;
    int values[256] = {0};
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    for (int i = 0; s[i] != '\0'; i++)
    {
        int s1 = values[s[i]];
        if (s[i + 1] && s1 < values[s[i + 1]])
        {
            sum -= s1;
        }
        else
        {
            sum += s1;
        }
    }
    return sum;
}