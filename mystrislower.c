int	my_str_islower(char *str);
int     my_strlen(char *str);

int main()
{
    printf("%i",my_str_islower("a1az"));
    return(0);
}
int	my_str_islower(char *str)
{
    int i;
    int lenght;

    i = 0;
   lenght = my_strlen(str);
    while (i<lenght)
    {
     if (( str[i] < 'a')  || (str[i]>'z'))
        {
           return(0);
        }
        i = i + 1;
    }
    return(1);
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
