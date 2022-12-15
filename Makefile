SRCS		=	./sources/ft_format_eval.c 	\
				./sources/ft_putchar.c		\
				./sources/ft_putstr.c 		\
				./sources/ft_putnbr.c		\
				./sources/ft_putnbr_base.c	\
				./sources/ft_putadress.c	\
				ft_printf.c
																				
H_SRC		=	./includes/ft_printf.h

OBJS		=	$(SRCS:.c=.o)

CC			= 	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -f

NAME 		=	libftprintf.a

all:			$(NAME)

%.o:%.c 		Makefile $(H_SRC)
					$(CC) $(CFLAGS)  -c $< -o $@

$(NAME):		$(OBJS)
					ar -rcs $(NAME) $(OBJS)
clean:	
					$(RM) $(OBJS)

fclean:			clean
					$(RM) $(NAME)

re:				fclean	$(NAME)

.PHONY:			re fclean clean all