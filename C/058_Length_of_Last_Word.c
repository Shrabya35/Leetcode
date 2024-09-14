int lengthOfLastWord(char *s)
{
    int i = 0, len = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    while (i > 0 && s[i - 1] == ' ')
    {
        i--;
    }

    while (i > 0 && s[i - 1] != ' ')
    {
        len++;
        i--;
    }

    return len;
}