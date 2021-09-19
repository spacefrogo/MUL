##
## EPITECH PROJECT, 2018
## project
## File description:
## my makefile
##

CFLAGS	+= -Werror -Wall
CFLAGS	+= -I./include -L./lib/my -lmy
CFLAGS	+= -lcsfml-audio
CFLAGS	+= -lcsfml-window
CFLAGS	+= -lcsfml-graphics
CFLAGS	+= -lcsfml-system

DFLAGS	+= -Wall
DFLAGS	+= -I./include -L./lib/my -lmy
DFLAGS	+= -lcsfml-audio
DFLAGS	+= -lcsfml-window
DFLAGS	+= -lcsfml-graphics
DFLAGS	+= -lcsfml-system
DFLAGS	+= -g
DFLAGS	+= -fsanitize=address

NAME	=	my_rpg
SRC	=	$(wildcard source/*.c)
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) include/rpg.h include/my.h
	@$(MAKE) -C lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@echo -n "[ "
	@echo -n "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo -e "\e[1;31mCompiling finished!\e[0m"

debug:	$(SRC) include/rpg.h include/my.h
	@$(MAKE) -C lib/my debug
	clang -o $(NAME) $(SRC) $(DFLAGS)

clean:
	@$(MAKE) -C lib/my clean
	@rm -f $(NAME) $(OBJ)
	@rm -f $(wildcard source/*~) $(wildcard source/.#*#)
	@rm -f $(wildcard include/*~) $(wildcard include/.#*#)
	@rm -f $(wildcard *~) $(wildcard .#*#)
	@echo -n "[ "
	@echo -n "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo	 "\e[1;31mREMOVED THE BINARY FILE AND USELESS FILES!\e[0m"


fclean:	clean

re:		fclean all
	@echo -n "[ "
	@echo -n "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo -e "\e[1;31mForce make is completed!\e[0m"

.PHONY:	all link clean fclean re
