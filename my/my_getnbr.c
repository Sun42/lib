/*
** my_getnbr.c for my_getnbr in /u/all/duplei_m/cu/rendu/piscine/Jour_04
** 
** Made by mathieu dupleix
** Login   <duplei_m@epitech.net>
** 
** Started on  Thu Oct  9 10:55:52 2008 mathieu dupleix
** Last update Thu Jan 29 12:12:43 2009 christophe sundas
*/

int	my_getnbr(char *str)
{
  int	i;
  int	numb_find;
  int	ten;
  int	neg;

  i = 0;
  numb_find = 0;
  ten = 1;
  neg = 1;
  while (str[i] != '\0' && str[i] >= '+' && str[i] <= '9')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  if (i > 0)
	    numb_find = numb_find * 10;
	  ten = str[i] - '0';
	  numb_find = numb_find + ten;
	}
      if (str[i] == '-')
	neg = -neg;
      i = i + 1;
    }
  numb_find = (numb_find * neg);
  return (numb_find);
}

/*Correction
667
7 * 1
6 * 10
6 * 10 *10
 
int	my_getnbr(char *str)
{
  int	result;
  int	fact_mult;
  int	i;

  i = my_strlen(str) - 1;
  fact_mult = 1;
  result = 0;
  while (i >= 0)
    {
      result += (fact_mult * (str[i] - '0'));
      fact_mult *= 10;
      i--;
    }
  return (result);
}

*/
