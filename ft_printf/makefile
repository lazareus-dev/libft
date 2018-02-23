# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/11 11:12:30 by tle-coza     #+#   ##    ##    #+#        #
#    Updated: 2018/02/23 15:14:38 by tle-coza    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h ../libft.h

SRC = ft_printf.c check_spec.c get_spec.c  parse_args.c argsize.c print_str.c \
	  print_nb.c compute_nb.c 

LIBSRC = ft_strchr.c ft_wcbytelen.c ft_putchar.c ft_strnew.c ft_wsbytelen.c \
		 ft_isdigit.c ft_putnchar.c ft_atoi.c ft_strlen.c ft_putstr.c \
		 ft_strndup.c ft_abs_int.c ft_putnbrbase.c printf_nbrlen_base.c \
		 ft_putllnbr.c ft_nbr_len.c ft_memalloc.c ft_putnwstr.c ft_putwstr.c \
		 ft_putnbytewstr.c ft_nbprintable.c ft_putwchar.c ft_locate_char.c

LIBOBJS = $(addprefix ../, $(LIBSRC:.c=.o))

LIBSRCS = $(addprefix ../, $(LIBSRC))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBOBJS)
	ar -rc $@ $^

%.o: %.c
	gcc -c $< -o $@ $(FLAGS)

clean:
	/bin/rm -f $(OBJ) $(LIBOBJS) ft_printf.h.gch ./libft/libft.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
