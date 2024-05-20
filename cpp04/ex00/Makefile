NAME = Animal

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

SRC = Animal.cpp Cat.cpp main.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

s: re
	@./Animal
	@make f

c:clean
f:fclean
r:re