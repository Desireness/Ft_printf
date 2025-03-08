# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_printf_utils.c  ft_printf_utils1.c ft_printf_format.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

# Regla por defecto
all: $(NAME)

# Crear la librería estática
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compilar los archivos fuente en objetos
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos objeto
clean:
	rm -f $(OBJ)

# Eliminar los archivos objeto y la librería
fclean: clean
	rm -f $(NAME)

# Regenerar todo (limpiar y compilar de nuevo)
re: fclean all

# Regla para compilar y ejecutar los tests
run: all
	./a.out

# Regla de pruebas específicas
test: all
	./test_suite

.PHONY: all clean fclean re run test
