/*
** my_swap.c for my_swap.c in /u/all/sundas_c/cu/rendu/piscine/Jour_04
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Thu Oct  9 14:14:31 2008 christophe sundas
** Last update Wed Oct 15 19:58:22 2008 christophe sundas
*/

int	my_swap(int *a, int *b)
{
  int	toto;

  toto = *a;
  *a = *b;
  *b = toto;
  return (0);
}
