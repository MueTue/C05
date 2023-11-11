#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;

    if(nb <= 0)
    {
        return 0;
    }

    while(nb >= 1)
    {
        result = result * nb;
        
        nb--;
    }

    return result;
}

int main()
{
    printf("%d", ft_iterative_factorial(5));
}