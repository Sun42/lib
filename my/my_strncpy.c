/*
** my_strncpy.c for my string lenght copy in /u/epitech_2011s/sundas_c/cu/rendu/piscine/Jour_06
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Tue Oct 14 19:04:50 2008 christophe sundas
** Last update Thu Jan 29 09:43:40 2009 christophe sundas
*/

/* prbm valgrind \0
char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	lenght;

  i = 0;
  lenght = my_strlen(src);
  while (i < n)
    {
      if (i >= lenght)
	{
	  *(dest + i) = '\0';
	}
      else
	{
	  *(dest + i) = src[i];
	}
      i = i + 1;
    }
  return (dest);
}
*/
 /* celle la devrait fonctionner, a tester O_o*/
char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	src_len;

  
  i = 0;
  src_len = my_strlen(src) - 1;
  dest[n] = '\0';
  while (i < n)
    {
      if (i >= src_len)
	{
	  dest[i] = '\0';
	}
      else
	{
	  dest[i] = src[i];
	}
      i++;
    }
  return (dest);
}
