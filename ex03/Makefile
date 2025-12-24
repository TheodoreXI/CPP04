CC = c++
FLAGS =  -Wall -Wextra -Werror -MMD -std=c++98
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
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