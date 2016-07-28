/*
** my_is_prime.c for my_is_prime in /u/epitech_2011s/gobert_e/cu/rendu/piscine/Jour_05
** 
** Made by emilien gobert
** Login   <gobert_e@epitech.net>
** 
** Started on  Mon Oct 13 17:26:53 2008 emilien gobert
** Last update Wed Oct 15 19:12:59 2008 christophe sundas
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  while (i <= my_square_root(nb))
    {
      if ((nb %i) == 0)
	return (0);
      i = i + 1;
    }
  return (1);
}
