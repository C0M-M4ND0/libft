# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 08:48:00 by oabdelha          #+#    #+#              #
#    Updated: 2021/11/17 11:15:35 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CM = cc

FLAG = -Wall -Wextra -Werror

SRC = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
        ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_itoa.c  ft_atoi.c ft_isascii.c ft_putendl_fd.c\
        ft_isalnum.c ft_strlcpy.c ft_tolower.c ft_bzero.c  ft_putnbr_fd.c ft_strlen.c\
        ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
        ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
        ft_strnstr.c ft_striteri.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c\
        ft_lstiter.c ft_lstlast.c  ft_lstnew.c ft_lstsize.c

CNVRT = $(SRC:.c=.o)

CNVRTB = $(BONUS:.c=.o)

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(CNVRT) $(INCLUDE)
	@ar rcs $(NAME) $(CNVRT) $(INCLUDE)

bonus: $(CNVRT) $(CNVRTB) $(INCLUDE)
	@ar rcs $(NAME) $(CNVRT) $(CNVRTB)

%.o : %.c $(INCLUDE)
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(CNVRT) $(CNVRTB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
