/*
** my_strlowcase.c for nysrpotirt in /u/epitech_2011s/sundas_c/cu/rendu/piscine/Jour_06
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Tue Oct 14 23:29:39 2008 christophe sundas
** Last update Wed Oct 15 19:52:20 2008 christophe sundas
*/

char	*my_strlowcase(char *str)
{
  int	i;
  int	lenght;
  
  i = 0;
  lenght = my_strlen(str);
  while (i < lenght)
    {
      if (( str[i] >= 'A') && (str[i] <='Z'))
        {
	  str[i] = str[i] + 32;
        }
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}
