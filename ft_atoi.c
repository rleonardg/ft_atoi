/*
FUNCTION
      	<<atoi>>

DESCRIPTION
	Convert string to an integer. The string may begin with an arbitrary amount of white space (as determined by isspace(3))
 	followed by an optional indeterminate '+' or '-' sign. The function stop at the first character which is not a valid
  	digit in the given base

EXAMPLE
	If str = "\t--++-666" the return will be:
 	-666
	
 	If n = " ++++++++++987" the return will be:
  	987
*/

#include <stdio.h>
int ft_atoi(char *str)
{
    int     i;
    int     sign;
    int     result;
    
    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) 
    {
        i++;        
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;     
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (sign * result);
}
int main()
{
    printf("%d", ft_atoi("\t--++-666"));
    return 0;
}
