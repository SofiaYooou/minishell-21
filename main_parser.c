// int check_symbols(t_main *main, char)
// {
// 	int i = 0;
// while (main->readline)
// {
// 	if (main->readline[i] == "$")
// {
// 			ft_dollar();
// 		return (1);
// }
// 	if (main->readline[i] == "|")
// 		{
// 			ft_pipe();
// 			return (1);
// 		}
// 	if (main->readline[i] == ">" || main->readline[i] == "<" || main->readline[i] == ">>" || main->readline[i] == "<<")
// 		{
// 			ft_redirect();
// 		return (1);
// 		}
// 	i++;
// }
// return (0);
// }

#include "libft/libft.h"
#include "stdio.h"
#include "minishell.h"

int     ifkey(char c)
{
    if (c == '_' || ft_isalnum(c))
        return 1;
    return 0;
}

char   *ft_dollar(char *str, int *i, char **env)
{
    int j = *i;
    char *tmp;
    char *tmp2;
    char *tmp3;
    int z;

    while (str[++(*i)])
        if (!ifkey(str[*i]))
            break ;
    if (*i == j + 1)
        return (str);
    tmp = ft_substr(str, j + 1, *i - j - 1);
    int k = -1;
    while (env[++k])
    {
        if (strstr(env[k], tmp))
        {
            z = 0;
            while (env[k][z] && env[k][z] != '=')
                z++;
            tmp2 = ft_substr(env[k], 0, z);
            if (strcmp(tmp, tmp2) == 0)
                break;
        }
    }
    tmp2 = ft_substr(env[k], z + 1, strlen(env[k]) - z);
    printf("tmp2 = %s\n", tmp2);
    return (str);
}

char    *ft_single_quotes(char *str, int *i)
{
    int j = *i;
    char *tmp;
    char *tmp2;
    char *tmp3;

    while (str[++(*i)])
        if (str[*i] == '\'')
            break ;
    tmp = ft_substr(str, 0, j - 1);
    tmp2 = ft_substr(str, j + 1, *i - j - 1);
    tmp3 = ft_strdup(str + *i + 1);
    tmp = ft_strjoin(tmp, tmp2);
    tmp = ft_strjoin(tmp, tmp3);
    printf("tmp = %s\n", tmp);
    free(str);
    return (tmp);
}

char    *ft_double_quotes(char *str, int *i, char **env)
{
    int j = *i;
    char *tmp;
    char *tmp2;
    char *tmp3;

    while (str[++(*i)])
    {
        // if (str[*i] == '\\' && (str[*i + 1] == '\"' || str[*i + 1] == '$' || str [*i + 1] == '\\'))
        //     str = ft_slesh(str, i);
        if (str[*i] == '$')
            ft_dollar(str, i, env);
        if (str[*i] == '\"')
            break ;
    }
    tmp = ft_substr(str, 0, j);
    tmp2 = ft_substr(str, j + 1, *i - j - 1);
    tmp3 = ft_strdup(str + *i + 1);
    tmp = ft_strjoin(tmp, tmp2);
    tmp = ft_strjoin(tmp, tmp3);
    printf("tmp = %s\n", tmp);
    free(str);
    return (tmp);
}

int main_parser(t_head *head, char **env)
{
	int i;

	i = -1;
	while(head->readline[++i])
	{
        if (head->readline[i] == '\'')
            head->readline = ft_single_quotes(head->readline, &i);
        // if (str[i] == '\\')
        //     str = ft_slesh(str, &i);
        if (head->readline[i] == '\"')
            head->readline = ft_double_quotes(head->readline, &i, env);
        if (head->readline[i] == '$')
            head->readline = ft_dollar(head->readline, &i, env);	
	}
	return (0);
}