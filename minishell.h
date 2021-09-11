#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

// typedef struct s_parse
// {
	
// }

typedef struct	s_head
{
	char *readline;

}	t_head;

int main_parser(t_head *head, char **env);
int clear_head(t_head *head, char **env);

#endif