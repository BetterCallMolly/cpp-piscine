CXX := c++
INCLUDE_FLAGS := -I includes/
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 ${INCLUDE_FLAGS} -MMD

NAME = polymorphism

SRCS = srcs/main.cpp \
		srcs/Cat.cpp \
		srcs/Dog.cpp \
		srcs/Animal.cpp \
		srcs/WrongAnimal.cpp \
		srcs/WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

.cpp:.o
	${CXX} $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	${CXX} $(CXXFLAGS) -o $(NAME) $(OBJS)

-include $(OBJS:.o=.d)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re
