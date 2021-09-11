#include "minishell.h"

int clear_head(t_head *head, char **env)
{
	head->readline = NULL;
	return (0);
}