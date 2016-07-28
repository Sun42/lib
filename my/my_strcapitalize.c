/*
** my_strcapitalize.c for oituiort in /u/epitech_2011s/sundas_c/cu/rendu/piscine/Jour_06
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Tue Oct 14 23:33:20 2008 christophe sundas
** Last update Wed Oct 15 19:46:43 2008 christophe sundas
*/

char	*my_strcapitalize(char *str)
{
  int	i;
  int	flag;
  int	lenght;

  my_strlowcase(str);
  i = 0;
  flag = 0;
  lenght = my_strlen(str);
  while (i < lenght)
    {
      if (((str[i] >= 'a') && (str[i] <= 'z')))
        {
	  if (flag == 0)
	    {
	      str[i] = str[i] - 32;
	    }
	  flag = 1;
        }
      else
        {
	  flag = 0;
        }
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}
