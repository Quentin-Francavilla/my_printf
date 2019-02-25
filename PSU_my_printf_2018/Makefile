##
## EPITECH PROJECT, 2018
## makefile
## File description:
## 
##

SRC	=	./lib/my/my_convert_char_int.c \
		./lib/my/my_putchar.c \
		./lib/my/my_put_nbr.c \
		./lib/my/my_putstr.c \
		./lib/my/my_revstr.c \
		./lib/my/my_strlen.c \
		./lib/my/my_strlennbr.c \
		./lib/my/my_putnbr_base.c \
		my_printf.c \
		count_percent.c \
		redirection.c \
		./number/number.c \
		./str/str.c \
		./str2/str2.c \
		./character/character.c \
		./unsigned/unsigned.c \
		./octal/put_nbr_octal.c \
		./octal/octal.c \
		./hexa/put_nbr_hexa.c \
		./hexa/hexa.c \
        ./binary/binary.c \
        ./binary/put_nbr_binary.c \
        ./pointeur/pointeur.c \
		./pointeur/put_nbr_pointeur.c \
        ./hexa/hexa_cap.c \
        ./hexa/put_nbr_hexa_cap.c \
        ./modulo/modulo.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)
	rm -f	*.o \
			./number/*.o \
			./str/*.o \
			./lib/my/*.o \
			./str2/*.o \
			./character/*.o \
			./unsigned/*.o \
			./octal/*.o \
			./hexa/*.o \
            ./binary/*.o \
            ./pointeur/*.o \
            ./modulo/*.o \

clean:
	rm -f $(OBJ)
	rm -f *.o
	rm -f *~

fclean:	clean
	rm -f $(NAME)
	rm -f *.o

re:	fclean all
