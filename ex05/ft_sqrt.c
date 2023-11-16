#include <stdio.h>

int ft_sqrt(int nb)
{   
    int start = 0 , end = nb , mid;

    while(1==1)
    {
        mid = (start + end) / 2;

        if(start >= end || mid == start || mid == end)
        {
            break;
        }

        if((mid * mid) == nb)
        {
            break;
        }

        if((mid * mid) > nb)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
        
    }

    return mid;
}

int main()
{
    printf("%d", ft_sqrt(9));
}