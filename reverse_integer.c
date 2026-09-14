#include<stdio.h>

int reverse(int x)
{
    // int count = 0;
    int result = 0;
    // while(x != 0)
    // {
    //     x = x / 10;
    //     count++;
    // }
    while(x != 0)
    {
        result = (result * 10) + (x % 10);
        x = x / 10;
    }
    return result;
    // return result;
}


int main()
{
    printf("%d", reverse(6469));
}