#include<stdio.h>
#include<stdlib.h>
bool isPalindrome(int x) 
{
    int int_count = 0;
    int a = x;
    int i = 0;
    while(a != 0)
    {
        a = a / 10;
        int_count++;
    }
    int *tab;
    tab = malloc(sizeof(int) * int_count);
    int index = int_count - 1;
    while(index >= 0)
    {
        tab[index] = x % 10;
        x = x / 10;
        index--;
    }
    index = int_count - 1;
    while(index >= i)
    {
        if(!(tab[0] >= 0 && tab[0] <= 9))
            return 0;
        if(tab[index] == tab[i])
        {
            index--;
            i++;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    printf("%d", isPalindrome(-121));
}