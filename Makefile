# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_printf_utils.c ft_printf_utils1.c ft_printf_format.c ft_printf_format2.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

# libreria
$(NAME): $(OBJ)
	@echo "Building $(NAME)..."
	@if [ ! -f $(NAME) ] || [ "$(OBJ)" -nt "$(NAME)" ]; then \
		ar rcs $(NAME) $(OBJ); \
		echo "🎉 Build SUCCESS! $(NAME) created!"; \
		echo ""; \
		echo "  ____                              _     ____  "; \
		echo " / ___| _   _  ___ ___ ___  ___ ___| |  _|  _ \ "; \
		echo " \___ \| | | |/ __/ __/ _ \/ __/ __| | (_) | | |"; \
		echo "  ___) | |_| | (_| (_|  __/\__ \__ \_|  _| |_| |"; \
		echo " |____/ \__,_|\___\___\___||___/___(_) (_)____/ "; \
		echo ""; \
	fi

# Compilar archivos -o
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos objeto
clean:
		rm -f $(OBJ)

# Eliminar los archivos objeto y la librería
fclean: clean
	rm -f $(NAME) ./a.out

# Regenerar todo (limpiar y compilar de nuevo)
re: fclean all

.PHONY: all clean fclean re run test
