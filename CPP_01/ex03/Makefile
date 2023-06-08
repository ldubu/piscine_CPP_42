CPP		= 	c++
NAME	= 	violence
CFLAGS	= 	-Wall -Werror -Wextra -std=c++98
RM		=	rm -rf
SRCS	= 	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HEADER	=	Weapon.hpp HumanA.hpp HumanB.cpp

OBJS_PATH = objs/
OBJS	= $(addprefix $(OBJS_PATH), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@$(CPP) $(OBJS) $(CFLAGS) -o $@ 

$(OBJS_PATH)%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) 
	$(RM) $(OBJS_PATH)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all clean 