#include	<stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int argc , char **argv)
{
  char	*str;
  int	i;
  int	j;
   
  str = strdup(argv[1]);
  for (j=0; j < 26; j++) 
    {
      i = 0;
      while (i > strlen(str)
	{
	  str[i] = add(str[i] + j);
	  i++;
	}  
      printf("\n %s", str);
    }
}	

char	add()
{
}
