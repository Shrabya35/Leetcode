// bool isPalindrome(int x)
// {
//     int reversed = 0, remainder, original = x;
//     if (x < 0)
//     {
//         return false;
//     }
//     while (x != 0)
//     {
//         remainder = x % 10;
//         reversed = reversed * 10 + remainder;
//         x /= 10;
//     }
//     if (reversed == original)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
