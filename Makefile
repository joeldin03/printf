# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 16:14:17 by joelozan          #+#    #+#              #
#    Updated: 2024/01/31 18:24:52 by joelozan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
HDR		=	libftprintf.h

COMP	=	gcc
FLAGS	=	-Wall -Werror -Wextra

PREREQ	=	$(HDR) Makefile

SRC		=	ft_printf.c 		\
			ft_putchar_pf.c		\
			ft_putstr_pf.c		\
			ft_putnbr_pf.c		\
			ft_putuint_pf.c		\
			ft_puthex_pf.c		\
			ft_putptr_pf.c		\
			ft_decimaltohex.c	\

OBJS 	=	$(SRC:.c=.o)

all: libft $(NAME)

$(NAME):$(OBJS)
	@ar rc $(NAME) $(OBJS)

%.o: %.c $(PREREQ)
	$(COMP) $(FLAGS) -c $< -o $@

libft:
	$(MAKE) -C libft

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all libft clean fclean re
