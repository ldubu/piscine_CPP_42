CPP		= 	c++
NAME	= 	megaphone
CFLAGS	= 	-Wall -Werror -Wextra -std=c++98
RM		=	rm -rf
SRCS	= 	megaphone.cpp

OBJS_PATH = objs/
OBJS	= $(addprefix $(OBJS_PATH), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(OBJS) $(CFLAGS) -o $@ 

$(OBJS_PATH)%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) 
	$(RM) $(OBJS_PATH)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean 