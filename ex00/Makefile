NAME := braaainz

CC := c++

#CPPFLAGS := -Wall -Wextra -Werror -g3 -std=c++98
CPPFLAGS := -Wall -Wextra -Werror -g3 -std=c++98 -fsanitize=address

SRC := main.cpp Zombie.cpp newZombie.cpp randomChump.cpp


INCLUDES := -I Zombie.hpp

OBJ := $(SRC:%.cpp=$(OBJ)%.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)


clean:
		rm -r $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
