/*
** my_find_prime_sup.c for my_find_prime_sup in /u/epitech_2011s/gobert_e/cu/rendu/piscine/Jour_05
** 
** Made by emilien gobert
** Login   <gobert_e@epitech.net>
** 
** Started on  Tue Oct 14 14:39:50 2008 emilien gobert
** Last update Wed Oct 15 19:18:09 2008 christophe sundas
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  while (((i < my_square_root(nb))) && (i < nb))
    {
      if ((nb % i) == 0)
        return (0);
      i = i + 1;
    }
  return (1);
}

int	my_find_sup(int nb)
{
  while (my_is_prime(nb) != 1)
    {
      nb = nb + 1;
    }
  return (nb);
}
