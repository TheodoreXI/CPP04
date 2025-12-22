CC = c++
# FLAGS = -Wall -Wextra -Werror -MMD -std=c++98
Flags = -Wall
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
D = $(OBJS:.o=.d)
NAME = Materia

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(D)

fclean: clean
	rm -rf $(NAME)

re: fclean all

-include $(D)