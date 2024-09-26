NAME = megaphone
CC = c++
CFLAGS = -Wall -Werror -Wextra
# CFLAGS += -std=98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

bonus: all

re: fclean all
