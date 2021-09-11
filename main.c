#include "minishell.h"


// int main(int argc, char **argv, char **env)
// {
//     // t_parse *parse;
// 	t_head *head;

// 	(void)argc;
// 	(void)argv;

//     // parse = (t_parse *) malloc(sizeof(t_parse));
// 	head = (t_head *) malloc(sizeof(t_head));
//     while(1)
// 	{
// 		*head->readline = printf( "%s\n", readline("minishell") );
// 		main_parser(head, env);

// 	}
// }

int main(int argc, char **argv, char **env)
{
    // t_parse *parse;
    t_head *head;
    (void)argc;
    (void)argv;
    // parse = (t_parse *) malloc(sizeof(t_parse));
	//clear_head(head, env);
    head = (t_head *) malloc(sizeof(t_head));
    while(1)
    {
        head->readline = readline("\033[31m︻\033[0m\033[32m┳\033[0m\033[33mデminishell \033[0m");
        main_parser(head, env);
		free(head->readline);
    }
	return (0);
}