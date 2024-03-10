#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int i =0;
    while(str[i])
    i++;
    return i ;
}
char    *ft_strdup(char *src)
{
	size_t len = ft_strlen(src);
    size_t i = 0;
    char *p1= malloc((len + 1)* sizeof(char));
    
    if (p1 == NULL)
    return NULL;
    while ( i < len)
    {
        p1[i] = src[i];
        i++;

    }
    p1[i] = '\0';

    return p1;                                                             }
int main(int ac,char **av)
{
	
	char *k = ft_strdup(av[1]);
    printf("original strings==>%s\n",(av[1]));
	printf("duplicate string====>%s\n",k);



	return 0 ;
}
