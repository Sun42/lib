/*
** my_str_my_str_isprintable.c for  my str is printqble in /u/epitech_2011s/sundas_c/cu/rendu/piscine/Jour_06
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Wed Oct 15 00:17:28 2008 christophe sundas
** Last update Wed Oct 15 19:42:00 2008 christophe sundas
*/

int	my_str_isprintable(char *str)
{
  int	i;
  int	lenght;

  i = 0;
  lenght = my_strlen(str);
  while (i < lenght)
    {
      if ((str[i] < ' ') || (str[i] > '~'))
        {
	  return (0);
        }
      i = i + 1;
    }
  return (1);
}
