CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

FUNC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

FUNCADDITIONAL =	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
					ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c

SRCS = ${FUNC} ${FUNCADDITIONAL}
SRCSALL = ${FUNC} ${FUNCADDITIONAL} ${BONUS}

OBJS = ${SRCS:.c=.o} 
OBJSALL = ${SRCSALL:.c=.o} 


.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rsc ${NAME} ${OBJS}

bonus: ${OBJSALL}
		ar -rsc ${NAME} ${OBJSALL}; \

all: 	${NAME}

clean:	
		rm -f ${OBJSALL}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus
