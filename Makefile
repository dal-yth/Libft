NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

MKDIR_P = mkdir -p

LIBFT_DIR = srcs/libft_srcs

GNL_DIR = srcs/get_next_line

FT_PRINTF_DIR = srcs/ft_printf_srcs

LIBFT_OBJ = obj_libft

GNL_OBJ = obj_gnl

PRINTF_OBJ = obj_printf

INC = includes/

LIBFT_SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
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
		ft_strtrim.c ft_tolower.c ft_toupper.c ft_isspace.c timer.c

GNL_SRCS = get_next_line.c

FT_PRINTF_SRCS = ft_printf.c c_op.c str_op.c di_op.c p_op.c uox_op.c f_op.c \
				converts.c help.c make_float.c parse_color.c parse_funcs.c \
				parser.c str_maker.c utils.c

OBJS_LIB = $(addprefix $(LIBFT_OBJ)/,$(LIBFT_SRCS:.c=.o))

OBJS_GNL = $(addprefix $(GNL_OBJ)/,$(GNL_SRCS:.c=.o))

OBJS_PRINTF = $(addprefix $(PRINTF_OBJ)/,$(FT_PRINTF_SRCS:.c=.o))

PROGRESS_CHAR = "\e[92m█\e[0m"

all: dirs $(NAME)

# @ supresses 'echo' of the command
$(NAME): $(OBJS_LIB) $(OBJS_GNL) $(OBJS_PRINTF)
	@echo "\nCreating library..."
	@ar rc $(NAME) $(OBJS_LIB) $(OBJS_GNL) $(OBJS_PRINTF)
	@echo "Organizing library..."
	@ranlib $(NAME)
	@echo "\e[1m$(NAME) created!\e[0m"

dirs:
	@echo "Creating object dirs..."
	@${MKDIR_P} $(LIBFT_OBJ) $(GNL_OBJ) $(PRINTF_OBJ)
	@echo "Creating objects..."

# $@ is the name of file being generated
# $@ evaluates to $(DIR_O)/%.o
# $^ all prerequisites
# $^ evaluates to $(DIR_S)/%.c
$(LIBFT_OBJ)/%.o: $(LIBFT_DIR)/%.c $(INC)
	@$(CC) $(FLAGS) -I $(INC) -o $@ -c $<
	@echo $(PROGRESS_CHAR)"\c"

$(GNL_OBJ)/%.o: $(GNL_DIR)/%.c $(INC)
	@$(CC) $(FLAGS) -I $(INC) -o $@ -c $<
	@echo $(PROGRESS_CHAR)"\c"

$(PRINTF_OBJ)/%.o: $(FT_PRINTF_DIR)/%.c $(INC)
	@$(CC) $(FLAGS) -I $(INC) -o $@ -c $<
	@echo $(PROGRESS_CHAR)"\c"

clean:
	@echo "Cleaning objects..."
	@rm -rf $(OBJS_LIB) $(OBJS_GNL) $(OBJS_PRINTF)
	@rm -rf $(LIBFT_OBJ) $(GNL_OBJ) $(PRINTF_OBJ)

fclean: clean
	@echo "$(NAME) removed"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re dirs
