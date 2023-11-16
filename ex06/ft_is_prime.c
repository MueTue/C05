#include <stdio.h>

int ft_is_prime(int nb)
{
    if(nb <= 1)
    {
        return 0;
    }

    for(int i =2; i < nb; i++)
    {
        if(!(nb%i))
        {
            return 0;
        }
    }

    return 1;
}


int main()
{
    printf("%d", ft_is_prime(21));
}