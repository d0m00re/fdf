# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alhelson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/13 19:24:35 by alhelson          #+#    #+#              #
#    Updated: 2017/03/13 19:24:38 by alhelson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS= -Wall -Wextra -Werror
SOURCES=srcs
LIB_PATH= ./libft
INC=includes
INCTEST= ./includes/ft_renderer.h ./includes/ft_fdf.h ./includes/ft_map2d_pts.h ./includes/ft_parser.h
INC_PATH= ./$(LIB_PATH)/$(INC)
NAME= fdf

SRC_MLX=minilibx_macos
INC_MLX=./$(SRC_MLX)/
SRC_PATH=srcs
SRC_M_MAIN_PATH=m_main
SRC_M_RENDERER_PATH=m_renderer
SRC_M_PARSER_PATH=m_parser
SRC_M_MAP_PTS_PATH=m_map2d_pts
SRC_M_FDF_PATH=m_fdf

OBJ_PATH=srcs

#################################################
### COLOR
##################################################

COL_BLACK       = \033[1;30m
COL_RED         = \033[1;31m
COL_GREEN       = \033[1;32m
COL_YELLOW      = \033[1;33m
COL_BLUE        = \033[1;34m
COL_PURPLE      = \033[1;35m
COL_WHITE       = \033[1;37m

##################################################
### SOURCES
###################################################

SRC_M_MAIN=\
main.c

SRC_M_RENDERER=\
my_renderer_point.c my_renderer_segment.c my_renderer_carry.c my_renderer_line.c\
my_renderer_gride.c my_renderer_carry_iso.c my_renderer_gride_iso.c\
my_renderer_map2d_pts.c my_renderer_map2d_pts_segment.c

SRC_M_PARSER=\
main_parser.c valid_data.c

SRC_M_MAP_PTS=\
ft_map2d_pts_iso.c ft_map2d_center.c ft_map2d_moove.c

SRC_M_FDF=\
manage_init.c

#################################################
#### OBJECT
################################################
OBJ_M_MAIN= $(patsubst %.c, %.o, $(SRC_M_MAIN))
OBJ_M_M= $(addprefix ./$(OBJ_PATH)/, $(OBJ_M_MAIN))

OBJ_M_RENDERER= $(patsubst %.c, %.o, $(SRC_M_RENDERER))
OBJ_M_R= $(addprefix ./$(OBJ_PATH)/, $(OBJ_M_RENDERER))

OBJ_M_PARSER=$(patsubst %.c, %.o, $(SRC_M_PARSER))
OBJ_M_P=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_PARSER))

OBJ_M_MAP=$(patsubst %.c, %.o, $(SRC_M_MAP_PTS))
OBJ_M_MM=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_MAP))

OBJ_M_FDF=$(patsubst %.c, %.o, $(SRC_M_FDF))
OBJ_M_F=$(addprefix ./$(OBJ_PATH)/, $(OBJ_M_FDF))

OBJ_ALL= $(OBJ_M_M) $(OBJ_M_R) $(OBJ_M_P) $(OBJ_M_MM) $(OBJ_M_F)

##################################################
### RULES
###################################################

.PHONY: all clean fclean re fcleanlib cleanlib

all: Makefile lib $(NAME)

$(NAME): $(OBJ_M_M) $(OBJ_M_R) $(OBJ_M_P) $(OBJ_M_MM) $(OBJ_M_F) $(INCTEST)
	@make -C $(LIB_PATH)
	$(CC) $(OBJ_ALL) -o $(NAME) -L libft/ -lft -lmlx -framework OpenGL -framework Appkit

$(OBJ_M_F): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_FDF_PATH)%.c
	@$(CC) $(CFLAGS) -I $(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [MAIN]"

$(OBJ_M_MM): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_MAP_PTS_PATH)%.c
	@$(CC) $(CFLAGS) -I $(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [MAIN]"

$(OBJ_M_M): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_MAIN_PATH)%.c
	@$(CC) $(CFLAGS) -I $(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [MAIN]"

$(OBJ_M_R): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_RENDERER_PATH)%.c
	@$(CC) $(CFLAGS) -I includes/ -I $(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [RENDERER]"

$(OBJ_M_P): $(OBJ_PATH)%.o : $(SRC_PATH)/$(SRC_M_PARSER_PATH)%.c
	@$(CC) $(CFLAGS) -I includes/ -I $(INC_PATH) -I$(INC) -c $< -o $@
	@echo "COMPIL [PARSER]"

cleanlib:
	@cd $(LIB_PATH) && make clean
	@echo "$(COL_WHITE)[ CLEAN LIBFT ]\n"

fcleanlib: cleanlib
	@cd $(LIB_PATH) && make fclean
	@echo "$(COL_WHITE)[ FCLEAN LIBFT ]\n"

lib:
	@cd $(LIB_PATH) && make;

clean: cleanlib
	@rm -f $(OBJ_ALL)
	@echo "[CLEAN]"

fclean: clean fcleanlib
	@rm  -f $(NAME)
	@echo "DELETE [$(NAME)]"

re: fclean $(NAME)
