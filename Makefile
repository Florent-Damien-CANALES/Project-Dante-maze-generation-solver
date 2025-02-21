##
## EPITECH PROJECT, 2020
## delivery
## File description:
## Makefile
##

lib:
	$(MAKE) -C ./solver
	$(MAKE) -C ./generator

clean:
	$(MAKE) clean -C ./solver
	$(MAKE) clean -C ./generator

fclean: 	clean
	$(MAKE) fclean -C ./solver
	$(MAKE) fclean -C ./generator

re:
	$(MAKE) re -C ./solver
	$(MAKE) re -C ./generator

.PHONY: lib clean fclean re