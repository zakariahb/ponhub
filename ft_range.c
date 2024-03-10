#include <stdio.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
    if (min >= max)
    return NULL;
    size_t len = max - min;
    int * p1= malloc ((len + 1) * sizeof(int));
    if (p1 == NULL)
    return NULL;
    size_t i = 0;
        while (min < max )
        {
            p1[i] = min;
            min++;
	    i++;
        }
    p1[i] = '\0';

    return p1;
}
int main (int ac,char **av)
{
	int *i = ft_range(atoi(av[1]),atoi(av[2]));

    if (i != NULL)
    {
	    int j = 0;
	        while(i[j] != '\0')
    	{
	    	printf("number :%d\n",i[j]);
	    j++;
        }
    }
    else

    printf("eroor : min beger or epoul than max \n");

    return 0;
}
