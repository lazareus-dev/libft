# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-coza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 11:09:59 by tle-coza          #+#    #+#              #
#    Updated: 2018/03/08 15:36:44 by tle-coza    ###    #+. /#+    ###.fr      #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isblank.c ft_iscntrl.c ft_isdigit.c ft_isgraph.c ft_islower.c \
	   ft_isprint.c ft_isspace.c ft_isupper.c ft_isxdigit.c ft_itoa.c \
	   ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
	   ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	   ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c \
	   ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
	   ft_putstr.c ft_putstr_fd.c ft_sort_tab.c ft_str_is_alpha.c \
	   ft_str_is_lowercase.c ft_str_is_numeric.c ft_str_is_printable.c \
	   ft_str_is_uppercase.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
	   ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
	   ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
	   ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
	   ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c \
	   ft_strsub.c ft_strtrim.c ft_swap.c ft_tolower.c ft_toupper.c \
	   ft_realloc.c ft_matricealloc.c ft_memrealloc.c ft_strndup.c \
	   ft_locate_char.c ft_itoa_base.c ft_append_char.c ft_strcapitalize.c \
	   ft_ltoa.c ft_super_realloc.c ft_strinit.c ft_putllnbr.c ft_nbr_len.c \
	   ft_abs_ptr.c ft_putnchar.c ft_ltoa_base.c print_bits.c ft_wcslen.c \
	   ft_wcbytelen.c ft_wsbytelen.c ft_abs_int.c get_next_line.c \
	   ft_strexpand.c ft_putwchar.c ft_putwstr.c ft_putnwstr.c \
	   ft_putnbytewstr.c ft_nbprintable.c ft_putnbrbase.c printf_nbrlen_base.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar crs $@ $^

%.o: %.c
	gcc -I $(FLAGS) -c $^ -o $@

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re : fclean all
