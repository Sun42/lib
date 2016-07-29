#include <stdlib.h>
#include <stdio.h>



int my_strlen_iter(char* str)
{
  int cpt = 0;
  while (str[cpt] != '\0')
    {
      cpt++;
    }

    return cpt;
}


int my_strlen_recurs(char* str)
{
  if (*str == '\0')
    {
      return 0;
    }
  return my_strlen_recurs(++str) + 1;
}

int	main(int argc, char** argv)
{
  int len_iter, len_recurs;
  // printf("nb args %i \n", argc);
  if (argc != 2)
    {
      printf("usage : \n");
      exit(1);
    }
  len_iter = my_strlen_iter(argv[1]);
  printf("len_iter: %i \n", len_iter);


  len_recurs = my_strlen_recurs(argv[1]);
  printf("len_recurs: %i \n", len_recurs);
  exit(0);
}

