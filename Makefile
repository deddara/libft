# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 01:40:26 by deddara           #+#    #+#              #
#    Updated: 2020/07/25 13:55:30 by deddara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HDR_DIR = ./includes/
OBJ_DIR = obj/
CC = gcc
FLAGS = -I$(HDR_DIR) -Wall -Wextra -Werror 

HEAD =  $(addprefix $(HDR_DIR), libft.h)

SRC_DIR = src/
SRC =  ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha\
	ft_isascii ft_isdigit ft_isprint ft_memccpy\
	ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset	ft_split\
	ft_strchr ft_strdup ft_strjoin ft_strlcat ft_strlcpy ft_strlen\
	ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower\
	ft_toupper ft_itoa ft_strmapi ft_putchar_fd ft_putstr_fd ft_putendl_fd\
	ft_putnbr_fd ft_lstnew ft_lstadd_front ft_lstlast ft_lstsize ft_lstadd_back\
	ft_lstdelone ft_lstclear ft_lstmap ft_lstiter

SRC_FLS.O = $(addprefix $(OBJ_DIR), $(SRC:=.o))

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ_DIR) $(SRC_FLS.O)
	@ar rc $(NAME) $(SRC_FLS.O)
	@ranlib $(NAME)
	@echo "\033[32m[+] Make completed!\033[0m"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(SRC_FLS.O): $(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEAD)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all