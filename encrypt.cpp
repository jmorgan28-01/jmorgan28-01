// Jonathan Morgan
// CS 1337
// lab 16


// Function encrypt receives a four-digit integer abcd and returns a
// new integer as follows: Replace each digit of abcd by ((digit + 7) mod
// 10). Then looking at the number from the left, swap the first digit
// with the third, swap the second digit with the fourth, and return the
// new number.
unsigned int encrypt(unsigned int abcd)
{
    //Step 1: compute a, b, c, and d from abcd
    int a = (abcd / 1000 + 7) % 10;
    int b = (abcd / 100 % 10 + 7) % 10;
    int c = (abcd / 10 % 10 + 7) % 10;
    int d = (abcd % 10 + 7) % 10;

    abcd = (((c * 10 + d) * 10 + a) * 10 + b);

    return abcd;
}