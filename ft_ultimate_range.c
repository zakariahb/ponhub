#include <stdio.h>
#include <stdlib.h>
int  ft_ultimate_range(int **range, int min, int max)
{
    if (min >= max)
    {
        *range = NULL;
        return 0;
    }
    int len = max - min;
    *range = malloc ((len + 1)* sizeof(int));
    if (*range == NULL)
    return -1;
    int i = 0;
        while(i <= len)
        {
            *(range)[i] = min + 1;
            i++;
        }

    return len;
}
int main (int ac , char **av)
{
	int *res;
	int i = 0;
	int size = ft_ultimate_range(&res, atoi(av[1]), atoi(av[2]));

	while(i < size )
	{
		printf("%d\n",res[i]);
		i++;
	}
	return 0;
}
