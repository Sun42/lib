/*
** my_str_islower.c for my string is lower in /u/epitech_2011s/sundas_c/cu/rendu/piscine/Jour_06
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Wed Oct 15 00:11:46 2008 christophe sundas
** Last update Wed Oct 15 19:40:21 2008 christophe sundas
*/

int	my_str_islower(char *str)
{
  int	i;
  int	lenght;

  i = 0;
  lenght = my_strlen(str);
  while (i < lenght)
    {
      if ((str[i] < 'a') || (str[i] > 'z'))
        {
	  return (0);
        }
      i = i + 1;
    }
  return (1);
}

