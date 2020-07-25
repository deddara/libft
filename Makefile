# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 01:40:26 by deddara           #+#    #+#              #
#    Updated: 2020/05/04 23:29:51 by deddara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_split.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strtrim.c\
	ft_substr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\

BON = ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstlast.c\
	ft_lstsize.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstmap.c\
	ft_lstiter.c


OBJ = $(SRC:.c=.o)
BONOBJ = $(BON:.c=.o)

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME):$(SRC)
	@clang -c -Wall -Wextra -Werror  $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f $(BONOBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus:
ifeq ($(shell test -f $(NAME) && ar t $(NAME) | grep lst),)
	@clang -c -Wall -Wextra -Werror $(BON)
	@ar rc $(NAME) $(BONOBJ)
	@ranlib $(NAME)
endif
