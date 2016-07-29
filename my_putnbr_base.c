int	my_putnbr_base(int nbr, char *base);
int     my_strlen(char *str);
int main()
{
    /*printf("%i",my_putnbr_base(3,"01"));*/
    my_putnbr_base(15,"0123456789ABCDEF");
    return(0);
}
int	my_putnbr_base(int nbr, char *base)
{
    int flag_neg;
    flag_neg =0;
    if (nbr==0)
        return(0);
    if (nbr<0)
    {
    nbr = -nbr;
    flag_neg =1;
    }
    int nb_base = my_strlen(base);

    while ( nbr > 0)
    {
        printf("%c",base[nbr%nb_base]);
        /*a mettre dans un char*, puis faire un reverse puis un get nbr_base  */
        nbr =(nbr/nb_base);
    }
if (flag_neg ==1)
{
    /* nobre a retourner = -nombre a retourner*/
}
    return (0);
}
 int     my_strlen(char *str)
{
  int count;

  count = 0;
  while (*str++)
    {
      count++;
    }
  return (count);
}
