# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amounach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 19:46:15 by amounach          #+#    #+#              #
#    Updated: 2022/06/08 19:49:38 by amounach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------  PROJECT  ----------------------------------------------------- #
NAME			=	libft.a

# ------------  FLAGS  ------------------------------------------------------- #
RM				=	rm -rf
CC				=	gcc
C_FLAGS			=	-Wall -Wextra -Werror
I_FLAGS			=	-I $(HDR_DIR)

# ------------  DIRECTORIES  ------------------------------------------------- #
SRC_DIR			=	src
HDR_DIR			=	includes
OBJ_DIR			=	obj
LIBFT_DIR		=	libft_src
FT_PRINTF_DIR	=	ft_printf_src
GNL_DIR			=	gnl_src

# ------------  SOURCE FILES  ------------------------------------------------ #
SRC_FLS	=		$(LIBFT_FLS)\
				$(GNL_FLS)\
				$(FT_PRINTF_FLS)

LIBFT_FLS	=	$(LIBFT_DIR)/ft_isascii.c		\
				$(LIBFT_DIR)/ft_isprint.c		\
				$(LIBFT_DIR)/ft_isdigit.c		\
				$(LIBFT_DIR)/ft_isalpha.c		\
				$(LIBFT_DIR)/ft_isalnum.c		\
				$(LIBFT_DIR)/ft_tolower.c		\
				$(LIBFT_DIR)/ft_toupper.c		\
				$(LIBFT_DIR)/ft_strlen.c		\
				$(LIBFT_DIR)/ft_strlcpy.c		\
				$(LIBFT_DIR)/ft_strncmp.c		\
				$(LIBFT_DIR)/ft_strchr.c		\
				$(LIBFT_DIR)/ft_strrchr.c		\
				$(LIBFT_DIR)/ft_memset.c		\
				$(LIBFT_DIR)/ft_memchr.c		\
				$(LIBFT_DIR)/ft_memcmp.c		\
				$(LIBFT_DIR)/ft_memcpy.c		\
				$(LIBFT_DIR)/ft_memmove.c		\
				$(LIBFT_DIR)/ft_bzero.c			\
				$(LIBFT_DIR)/ft_strdup.c		\
				$(LIBFT_DIR)/ft_strlcat.c		\
				$(LIBFT_DIR)/ft_strjoin.c		\
				$(LIBFT_DIR)/ft_strtrim.c		\
				$(LIBFT_DIR)/ft_calloc.c		\
				$(LIBFT_DIR)/ft_itoa.c			\
				$(LIBFT_DIR)/ft_putstr_fd.c		\
				$(LIBFT_DIR)/ft_putendl_fd.c	\
				$(LIBFT_DIR)/ft_putnbr_fd.c		\
				$(LIBFT_DIR)/ft_striteri.c		\
				$(LIBFT_DIR)/ft_strmapi.c		\
				$(LIBFT_DIR)/ft_strnstr.c		\
				$(LIBFT_DIR)/ft_substr.c		\
				$(LIBFT_DIR)/ft_split.c			\
				$(LIBFT_DIR)/ft_atoi.c			\
				$(LIBFT_DIR)/ft_itoa.c			\
				$(LIBFT_DIR)/ft_lstnew.c		\
				$(LIBFT_DIR)/ft_lstadd_front.c	\
				$(LIBFT_DIR)/ft_lstsize.c		\
				$(LIBFT_DIR)/ft_lstlast.c		\
				$(LIBFT_DIR)/ft_lstadd_back.c	\
				$(LIBFT_DIR)/ft_lstdelone.c		\
				$(LIBFT_DIR)/ft_lstclear.c		\
				$(LIBFT_DIR)/ft_lstiter.c		\
				$(LIBFT_DIR)/ft_lstmap.c

GNL_FLS = 		$(GNL_DIR)/get_next_line.c		\
				$(GNL_DIR)/get_next_line_utils.c

FT_PRINTF_FLS =	$(FT_PRINTF_DIR)/ft_printf.c	\
				$(FT_PRINTF_DIR)/auxiliary_functions.c

# ------------  FILEPATHS  --------------------------------------------------- #
SRC	=		$(addprefix $(SRC_DIR)/, $(SRC_FLS))
OBJ	=		$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o, $(SRC))

# ------------  RULES  ------------------------------------------------------- #
.PHONY: all clean fclean re

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(C_FLAGS) -c -o $@ $< $(I_FLAGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/$(LIBFT_DIR)
	mkdir -p $(OBJ_DIR)/$(FT_PRINTF_DIR)
	mkdir -p $(OBJ_DIR)/$(GNL_DIR)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
