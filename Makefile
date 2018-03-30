CLIENT = client
SERVER = server
LIBFT = ./libft/libft.a
CLIENTFILES = 	./client.c\
				./parser.c
SERVERFILES = 	./server.c
LIBDIR = ./libft/
INCDIR = ./includes/
SRC = $(wildcard $(SRCDIR)*.c)
OBJ = $(patsubst $(SRCDIR)%.c, objs/%.o, $(SRC))
FLAGS = -Wall -Werror -Wextra

all: $(SERVER)

$(LIBFT):
	@make -C $(LIBDIR)

$(CLIENT):
	@gcc $(FLAGS) $(CLIENTFILES) $(LIBFT) -o $(CLIENT)
	@echo "PAPI CLIENT COMPILED!"

$(SERVER): $(LIBFT) $(CLIENT)
	@gcc $(FLAGS) $(SERVERFILES) $(LIBFT) -o $(SERVER)
	@echo "PAPI SERVER COMPILED!"

clean:
	@rm -rf $(OBJDIR)
	@make clean -C $(LIBDIR)

fclean:
	@make clean
	@rm -rf $(CLIENT)
	@rm -rf $(SERVER)
	@make fclean -C $(LIBDIR)

re:	
	@make fclean
	@make all

.PHONY: all clean fclean re
