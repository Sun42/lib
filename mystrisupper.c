int	my_str_isupper(char *str);
int     my_strlen(char *str);

int main()
{
    printf("%i",my_str_isupper("AZPOIPOI"));
    return(0);
}
int	my_str_isupper(char *str)
{
    int i;
    int lenght;

    i = 0;
   lenght = my_strlen(str);
    while (i<lenght)
    {
     if (( str[i] < 'A')  || (str[i]>'Z'))
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

