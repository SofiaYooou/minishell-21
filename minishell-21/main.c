#include "minishell.h"


int main(int argc, char **argv, char **env)
{
    t_parse *parse;
	t_main *main;

	(void)argc;
	(void)argv;

    parse = (t_parse *) malloc(sizeof(t_parse));
	main = (t_main *) malloc(size(t_main));
    while(1)
	{
		main->readline = printf( "%s\n", readline("minishell") );
		


		main_parser(main, env);

	}
}