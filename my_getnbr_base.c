#define NULL (void *)0

int	my_getnbr_base(char *str, char *base);
char *my_strstr(char *str, char * to_find);
int   my_strncmp(char *s1, char *s2,int n);
int   my_strlen(char *str);
int my_cmp_char(char c1, char c2);
int my_max_int(int i1, int i2);

int main()
{

    printf("%i",my_getnbr_base("132","0123456"));
    return(0);
}
int	my_getnbr_base(char *str, char *base)
{
int flag_neg;
int cpt;
int i;
int maval;
flag_neg = 0;
/*if (str[0] == '-')
{
    str =str + 1;
    flag_neg = 1;
}*/
cpt = 0;
i = my_strlen(str) - 1;
printf(" i :%i\n",i);
while (i > 0)
{
   /* printf(" *str[%i] %i \n",i,str[i]-'0');*/
    /*printf("STR : %i\n",str);
    printf("*STR+%i :%i\n",i,str[i]);
    printf("STR+%i :%i\n",i,(str+i));
    printf("BASE :%i\n",base);
    printf("my-strstr : %i\n",*my_strstr(base,(str + i))-'0');*/
    maval = *(strstr(base,str + i)) - '0';
    printf("Maval :%i\n",maval);
    /*cpt = cpt + ( *( my_strstr(base,(str + (i) ) ) ) - '0');*/
     /*printf("CPT[%i] : %i \n",i,cpt);*/
    i = i - 1;
}
/*if (flag_neg)
{
    cpt = -cpt;
}*/
return (cpt);
}
char *my_strstr(char *str, char * to_find)
{
    int i;

    i = 0;
    if (!my_strlen(to_find))
        return (str);
    while ((i < my_strlen(str)) )
    {
        if ((my_strncmp((str + i), to_find, my_strlen(to_find))) == 0)
        {
            return(str + i);
        }
        i =i + 1;
    }
    return(NULL);
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
int    my_strncmp(char *s1, char *s2,int n)
 {
     int i;
     int lenght;

     i = 0;
     lenght = my_max_int(my_strlen(s1),my_strlen(s2));

     while ((i < lenght - 1) && (*(s1 + i) == *(s2 + i))&& (i < (n - 1)))
     {
        i = i + 1;
     }
     return(my_cmp_char(*(s1 + i),*(s2 + i)));
 }
int my_cmp_char(char c1, char c2)
{
    if (c1> c2)
        return (1);
    if(c1 < c2)
        return (-1);
    if (c1 == c2)
        return (0);
}
int my_max_int(int i1, int i2)
{

    if (i2 > i1)
        return(i2);
    else
        return(i1);
}
