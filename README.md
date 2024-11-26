# Libft Extended

Libft Extended est une bibliothèque C qui inclut `libft` et `ft_printf`. Pour utiliser cette bibliothèque, vous devez inclure le fichier d'en-tête de `libft` dans votre code :

```c
#include "libft/libft.h"
```

## Exemple de Makefile

Voici un exemple de Makefile pour compiler un projet utilisant `libft` :

```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT_MAKEFILE = $(LIBFT_DIR)/Makefile
LIBFT_LIB = $(LIBFT_DIR)/libft.a
SRC = test.c
OBJ = $(SRC:.c=.o)
TARGET = test

all: $(LIBFT_LIB) $(TARGET)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

$(TARGET): $(OBJ) $(LIBFT_LIB)
	$(CC) $(CFLAGS) -o $@ $^ -L$(LIBFT_DIR) -lft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
```

Ce Makefile compile le projet en utilisant `libft` et gère les dépendances et les règles de nettoyage.
