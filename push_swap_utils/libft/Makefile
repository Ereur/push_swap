CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_atoi.c  ft_isdigit.c ft_putstr_fd.c ft_split.c ft_strchr.c\
		ft_strlen.c ft_strnstr.c ft_strchr.c ft_strtrim.c ft_substr.c ft_issorted.c get_next_line_utils.c

NAME = libft.a

SRCS_B = ft_lstadd_back_bonus.c  ft_lstadd_front_bonus.c   ft_lstnew_bonus.c ft_lstsize_bonus.c	ft_lstlast_bonus.c\

OBJS = ${SRCS:.c=.o}

OBJS_B = ${SRCS_B:.c=.o}

all: $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@
	@ar crs $(NAME) $@

$(NAME): $(OBJS)

bonus: $(OBJS_B)

clean :
	@rm -f ${OBJS_B} ${OBJS}

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: re fclean all clean bonus