CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIB = libft.a

FUNC =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

FUNCADDITIONAL =	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
					ft_itoa.c

BONUS =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

SRCSALL = ${FUNC} ${FUNCADDITIONAL}
OBJSALL = ${SRCSALL:.c=.o} 

TARGET = exe


.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIB}:	${OBJSALL}
		ar -rsc ${LIB} ${OBJSALL}

# bonus:	${OBJSALL}
# 		ar -rsc ${LIB} ${OBJSALL}

all: 	${LIB}

clean:	
		rm -f ${OBJSALL}

fclean:	clean;
		rm -f ${LIB}

re:	fclean all

.PHONY: all clean fclean re   #bonus
