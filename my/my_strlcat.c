/*
** my_strlcat.c for my_strlcat.c in /u/epitech_2011s/sundas_c/cu/rendu/piscine/Jour_07
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Wed Oct 15 16:52:57 2008 christophe sundas
** Last update Wed Oct 15 19:50:17 2008 christophe sundas
*/

char	*my_strlcat(char *str1, char *str2, int l)
{
  int	str1_len;
  int	i;

  str1_len = my_strlen(str1);
  i = 0;
  l  = l - ( str1_len + 1);
  while ((i < l) && (str2[i] != '\0'))
    {
      str1[(str1_len + i)] = str2[i];
      i = i + 1;
    }
  str1[str1_len + i] = '\0';
  return (str1);
  }
