/*
** my_strstr.c for mystrstr in /u/epitech_2011s/sundas_c/cu/rendu/piscine/Jour_06
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Tue Oct 14 22:46:56 2008 christophe sundas
** Last update Wed Oct 15 19:57:29 2008 christophe sundas
*/

#define NULL (void *)0

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  if (!my_strlen(to_find))
    return (str);
  while ((i < my_strlen(str)))
    {
      if ((strncmp((str + i), to_find, my_strlen(to_find))) == 0)
        {
	  return (str + i);
        }
      i = i + 1;
    }
  return (NULL);
}
