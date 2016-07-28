/*
** my_putchar.c for my_putchar in /u/epitech_2011s/sundas_c/cu/rendu/lib/my
** 
** Made by christophe sundas
** Login   <sundas_c@epitech.net>
** 
** Started on  Wed Oct 15 18:38:49 2008 christophe sundas
** Last update Wed Oct 15 20:03:49 2008 christophe sundas
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}
