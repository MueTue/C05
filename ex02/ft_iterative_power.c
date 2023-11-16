#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    if(power < 0)
    {
        return 1;   
    }
    
    if(power == 0)
    {
        return 1;
    }

    int n = nb;
    while(power > 1)
    {
        nb = nb * n;

        power--;
    }

    return nb;

}

int main()
{
    printf("%d", ft_iterative_power(5,0));
}