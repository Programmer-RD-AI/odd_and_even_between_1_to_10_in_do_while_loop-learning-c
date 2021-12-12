#include <stdio.h>
int main()
{
    int n = 11;
    int sumEven, sumOdd, sum = 0;
    do
    {
        switch (n % 2)
        {
        case 0:
        {
            sumEven = sumEven += n;
            break;
        };
        default:
        {
            sumOdd = sumOdd += n;
        }
        }
        sum += n;
        n--;
    } while (n != 1);
    printf("Sum Odd = %d \nSum Even = %d \nSum = %d\n", sumOdd, sumEven, sum);
}
