#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int x = 2;
    while(x < nb)
    {
        x++;

        if(x==nb)
        {
            return nb;
        }

        if(!(nb%x))
        {
            x = 1;
            nb++;
        }
    }
}


int main()
{
    printf("%d", ft_find_next_prime(23));
}