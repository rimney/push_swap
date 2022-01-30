#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_copy_elements(int *tab1, int *tab2)
{
    int i;
    i = 0;
    while(tab2[i])
    {
        tab1[i] = tab2[i];
        i++;
    }
}


int main(int argc, char **argv)
{
    int i = 1;

    int *tab = malloc(sizeof(int) * argc);
    *tab = 0;
    int nb;
    while(i < argc)
    {
        nb = atoi(argv[i]);
        if(tab[nb] == 0)
        {
            tab[nb] = 1;
            i++;
        }
        else
        {
            system("leaks a.out");
            printf("double\n");
            return (0);
        }
    }
    system("leaks a.out");
    printf("There's no double here");
    return (0);
}