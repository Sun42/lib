/*
** my_itoa.c for int to alpha in /u/all/sundas_c/cu/rendu/lib/my
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Mon Oct 27 20:47:57 2008 christophe sundas
** Last update Mon Oct 27 21:27:10 2008 christophe sundas
*/

#include "my.h"

void	my_itoa(int nbr, char *str)
{
  int	i;
  int	signe;
  
  i = 0;
  signe = nbr;
  if (signe < 0)
    nbr = -nbr;
  while (nbr > 0)
    {
      str[i] = ((nbr % 10) + '0');
      nbr = nbr / 10;
      i = i + 1;
    }
  if (signe < 0)
    {
      str[i] = '-';
      i = i + 1;
    }
  str[i] = '\0';
  my_revstr(str);
}
