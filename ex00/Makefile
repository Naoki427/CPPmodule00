NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
# CXXFLAGS += -std=98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

bonus: all

re: fclean all
