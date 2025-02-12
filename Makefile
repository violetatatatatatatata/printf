# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 16:12:25 by avelandr          #+#    #+#              #
#    Updated: 2025/02/12 15:18:06 by avelandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiladador y sus flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Libreria
NAME = libftprintf.a

# Lista de funciones a compilar
FUNCTIONS = ft_putchar.c \
	ft_hexpointer.c \
	ft_numtostr.c \
	ft_printf.c \
	ft_puthex.c \
	ft_putnum.c \
	ft_putstr.c \
	ft_putunsignint.c \
	ft_calloc.c

OBJS = $(FUNCTIONS:%.c=%.o)

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $^

# Rule to compile .c files into .o files
$(OBJS): %.o: %.c ft_printf.h Makefile
	$(CC) -c $(CFLAGS) $< -o $@

$(BOBJS): %.o: %.c ft_printf.h 
	$(CC) -c $(CFLAGS) $< -o $@

# Rule to run Valgrind for memory leak checks
valgrind: $(NAME)
	valgrind --leak-check=full --track-fds=yes ./$(NAME)

# Clean up the object files
clean:
	rm -f $(OBJS)
	rm -f $(BOBJS)

# Clean up the object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild the library from scratch
re: fclean all

# Print the list of functions (for debugging purposes)
info:
	$(info $(FUNCTIONS))

# Declare these rules as phony (they are not actual files)
.PHONY: all clean fclean re info valgrind
