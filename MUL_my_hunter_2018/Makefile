##
## EPITECH PROJECT, 2018
## project
## File description:
## my makefile
##

CFLAGS		=	-I./include -lcsfml-audio -lcsfml-window \
                        -lcsfml-graphics -lcsfml-system

SRC		=	$(wildcard source/*.c)

NAME		=	my_hunter

all: link

link: $(SRC)
		@gcc -o $(NAME) $(SRC) $(CFLAGS)
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mCompiling finished!\e[0m"

debug: 	$(SRC)
		gcc -c -g $(SRC) $(CFLAGS)

clean:
		@rm -f $(NAME)
		@rm -f source/*~
		@rm -f include/*~
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mREMOVED THE BINARY FILE AND USELESS FILES!\e[0m"


fclean: 	clean
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mForce clean is completed!\e[0m"


re: 		fclean all
		@echo -n "[ "
		@echo -n -e "\e[1;32mOK\e[0m"
		@echo -n " ] "
		@echo -e "\e[1;31mForce make is completed!\e[0m"


.PHONY: 	all obj link clean fclean re
