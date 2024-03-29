# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 12:43:44 by joelozan          #+#    #+#              #
#    Updated: 2024/02/02 19:22:12 by joelozan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HDR = libft.h

COMP = cc

FLAGS = -Wall -Werror -Wextra

PREREQ = $(HDR) Makefile

SRC = 		ft_isalpha.c		\
	  		ft_isdigit.c		\
	  		ft_isalnum.c		\
	  		ft_isascii.c		\
	  		ft_isprint.c		\
	  		ft_strlen.c			\
	  		ft_memset.c			\
	  		ft_bzero.c			\
	  		ft_memcpy.c			\
	  		ft_memcmp.c			\
	  		ft_memmove.c		\
	  		ft_strlcpy.c		\
	  		ft_strlcat.c		\
	  		ft_toupper.c		\
	  		ft_tolower.c		\
	  		ft_strchr.c			\
	  		ft_strrchr.c		\
	  		ft_strncmp.c		\
	  		ft_memchr.c			\
	  		ft_strnstr.c		\
	  		ft_atoi.c			\
	  		ft_calloc.c			\
	  		ft_strdup.c			\
	  		ft_substr.c			\
	  		ft_strjoin.c		\
	  		ft_strtrim.c		\
	  		ft_split.c			\
	  		ft_itoa.c			\
	  		ft_strmapi.c		\
	  		ft_striteri.c		\
	  		ft_putchar_fd.c		\
	  		ft_putstr_fd.c		\
	 	 	ft_putendl_fd.c		\
	  		ft_putnbr_fd.c		\
	
BSRC  =		ft_lstnew_bonus.c			\
			ft_lstadd_front_bonus.c		\
			ft_lstsize_bonus.c			\
			ft_lstlast_bonus.c			\
			ft_lstadd_back_bonus.c		\
			ft_lstdelone_bonus.c		\
			ft_lstclear_bonus.c			\
			ft_lstiter_bonus.c			\
			ft_lstmap_bonus.c			\

OBJS = $(SRC:.c=.o)

BOBJS = $(BSRC:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS) 
	@ar rc $(NAME) $(OBJS)

%.o: %.c $(PREREQ)
	$(COMP) $(FLAGS) -c $< -o $@

bonus:  $(OBJS) $(BOBJS)
	@ar rc $(NAME) $(OBJS) $(BOBJS)

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
