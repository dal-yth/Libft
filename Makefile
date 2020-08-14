NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

DIR_S = srcs

DIR_O = obj

INC = includes/

SOURCES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c \
		ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c \
		ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c \
		ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c \
		ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
		ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c \
		ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
		ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
		ft_strtrim.c ft_tolower.c ft_toupper.c get_next_line.c ft_printf.c \
		c_op.c str_op.c di_op.c p_op.c uox_op.c f_op.c converts.c help.c \
		make_float.c parse_color.c parse_funcs.c parser.c str_maker.c \
		utils.c	timer.c ft_isspace.c

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

PROGRESS_CHAR = "\e[92m█\e[0m"

all: $(NAME)

# @ supresses 'echo' of the command
$(NAME): $(OBJS)
	@echo "\nCreating library..."
	@ar rc $(NAME) $(OBJS)
	@echo "Organizing library..."
	@ranlib $(NAME)
	@echo "\e[1m$(NAME) created!\e[0m"

# $@ is the name of file being generated
# $@ evaluates to $(DIR_O)/%.o
# $^ all prerequisites
# $^ evaluates to $(DIR_S)/%.c
$(DIR_O)/%.o: $(DIR_S)/%.c $(INC)
	@mkdir -p $(DIR_O)
	@$(CC) $(FLAGS) -I $(INC) -o $@ -c $<
	@echo $(PROGRESS_CHAR)"\c"

clean:
	@echo "Cleaning objects..."
	@rm -f $(OBJ)
	@rm -rf $(DIR_O)

fclean: clean
	@echo "$(NAME) removed"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
