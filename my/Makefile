##
## Makefile for makefile in /u/all/sundas_c/rendu/lib/my
## 
## Made by christophe sundas
## Login   <sundas_c@epitech.net>
## 
## Started on  Mon Oct 20 21:52:16 2008 christophe sundas
## Last update Wed Feb 18 22:50:08 2009 christophe sundas
##

CC 			= gcc
NAME 			= libmy_`uname -m`-`uname -s`.a
SRC 			= my_find_prime_sup.c \
			my_putstr.c \
			my_str_isalpha.c \
			my_strcat.c \
			my_strncat.c \
		my_getnbr.c \
			my_revstr.c \
			my_str_islower.c \
			my_strcmp.c \
			my_strncmp.c \
			my_is_prime.c \
			my_show_to_wordtab.c \
			my_str_isnum.c \
			my_strcpy.c \
			my_strncpy.c \
			my_isneg.c \
			my_showmem.c \
			my_str_isprintable.c \
			my_strdup.c \
			my_strstr.c \
			my_power_rec.c \
			my_showstr.c \
			my_str_isupper.c \
			my_strlcat.c \
			my_strupcase.c \
			my_put_nbr.c \
			my_sort_int_tab.c \
		my_str_to_wordtab.c \
			my_strlen.c \
			my_swap.c \
			my_putchar.c \
			my_square_root.c \
			my_strcapitalize.c \
			my_strlowcase.c \
			sum_params.c \
			my_put_in_list.c \
			my_apply_on_list.c \
			my_apply_on_eq_in_list.c \
			my_find_node_in_eq_list.c \
			my_params_in_list.c \
			my_rev_list.c \
			my_find_elm_eq_in_list.c \
			my_list_size.c \
			my_rm_all_eq_from_list.c \
			my_show_str_in_list.c \
			my_itoa.c \
			my_put_error.c

HEADERS			= my.h
INCLUDES 		= -I.
CFLAGS 			+= $(INCLUDES) -W -Wall -ansi -pedantic 
OBJ 			= $(SRC:.c=.o)
RM 			= rm -f


$(NAME): all

all:
	$(CC) -c $(SRC) $(INCLUDES)
	ar r $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp $(HEADERS) ../../include
	#cp /u/all/sundas_c/cu/rendu/include/$(HEADERS) $(HEADERS)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

#.PHONY: all clean fclean re	