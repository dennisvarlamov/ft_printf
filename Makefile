NAME		= libftprintf.a

INC_DIR		= ./includes
SRC_DIR		= ./src
OBJ_DIR		= ./obj

HEADERS		= ft_printf.h
SOURCES		= ft_printf.c \

LIBFT		= ./libft
CC			= gcc
WFLAGS		= -Wall -Werror -Wextra
IFLAGS		= -I$(INC_DIR) -I$(LIBFT)

INCS		= $(addprefix $(INC_DIR)/, $(HEADERS))
SRCS		= $(addprefix $(SRC_DIR)/, $(SOURCES))
OBJS		= $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
		$(MAKE) -C $(LIBFT)/
		cp $(LIBFT)/libft.a ./$(NAME)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCS) Makefile
	@mkdir -p ${@D}
	$(CC) $(WFLAGS) $(IFLAGS) -c $< -o $@

clean:
		$(MAKE) -C $(LIBFT)/ clean
		rm -rf $(OBJ_DIR)

fclean:
		$(MAKE) -C $(LIBFT)/ fclean
		rm -rf $(OBJ_DIR)
		rm -rf $(NAME)

re: fclean all

norm:
		@norminette $(INCS) $(SRCS)

.PHONY: all clean fclean re
