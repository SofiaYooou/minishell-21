int check_symbols(t_main *main, char)
{
	int i = 0;
while (main->readline)
{
	if (main->readline[i] == "$")
{
			ft_dollar();
		return (1);
}
	if (main->readline[i] == "|")
		{
			ft_pipe();
			return (1);
		}
	if (main->readline[i] == ">" || main->readline[i] == "<" || main->readline[i] == ">>" || main->readline[i] == "<<")
		{
			ft_redirect();
		return (1);
		}
	i++;
}
return (0);
}

int main_parser(t_main *main, char **env)
{
	char *line;

	if(check_symbols(main, main->readline))
		return;
	if(check_commands(main, main->readline));

}