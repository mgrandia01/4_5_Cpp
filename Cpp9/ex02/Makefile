# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/07 11:55:24 by mgrandia          #+#    #+#              #
#    Updated: 2026/08/28 15:22:38 by mgrandia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ─────────────────────────────────────────────────────────────
# CONFIGURACIÓN GENERAL
# ─────────────────────────────────────────────────────────────
NAME = PmergeMe
CC = c++
RM = rm -f
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g

# ─────────────────────────────────────────────────────────────
# COLORESSSSSS
# ─────────────────────────────────────────────────────────────
GREEN = \033[38;5;114m   
SLATE = \033[38;5;145m 
TEAL = \033[38;5;123m 
RED = \033[0;31m
RESET = \033[0m

# ─────────────────────────────────────────────────────────────
# DIRECTORIOS
# ─────────────────────────────────────────────────────────────
DIR_INC = includes/ 
DIR_OBJS = objs/
DIR_SRC = srcs/

# ─────────────────────────────────────────────────────────────
# ARCHIVOS
# ─────────────────────────────────────────────────────────────

SRC = main.cpp PmergeMe.cpp
OBJS = $(addprefix $(DIR_OBJS), $(SRC:%.cpp=%.o))
DSRC = $(addprefix srcs/, $(SRC))
DOBJ = obj
DEP = $(addprefix $(DOBJ)/, $(SRC:.cpp=.d))


# ALL: primero construir 
all: $(NAME)

# Compilar, que depende de objetos 
$(NAME): $(DIR_OBJS) $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo
	@echo "$(GREEN)✅ Ejecutable $(NAME) creado correctamente!$(RESET)"
	@echo

# Crear carpeta objs si no existe
$(DIR_OBJS):
	@echo "$(SLATE)🛠️  Creando carpeta de objetos...$(RESET)"
	@mkdir -p $(DIR_OBJS)

# Compilar los archivos .c en .o con generación de dependencias .d
$(DIR_OBJS)%.o: $(DIR_SRC)%.cpp Makefile 
	@mkdir -p $(dir $@)
	@echo "$(SLATE)⚙️  Compilando $< ...$(RESET)"
	@$(CC) $(FLAGS) -MD -I$(DIR_INC) -c $< -o $@

# Limpiar objetos
clean:
	@echo "$(SLATE)🧹 Limpiando objetos...$(RESET)"
	@$(RM) -r $(DIR_OBJS)
	@echo "$(SLATE)✅ Objetos limpiados.$(RESET)"

# Limpiar todo incluyendo ejecutable y librería
fclean: clean
	@echo "$(SLATE)🗑️  Limpiando ejecutable...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(SLATE)✅ Limpieza total completada.$(RESET)"

# Recompilación completa
re: fclean all
	@echo "$(SLATE)🎉 Recompilación completa!$(RESET)"

# Incluir dependencias automáticas
-include $(DEP_FILES)

