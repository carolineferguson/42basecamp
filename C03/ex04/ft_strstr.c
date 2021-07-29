int	ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i_str;
	int	i_tofind;

	len = ft_strlen(to_find);
	i_str = 0;
	i_tofind = 0;
	if (len == 0)
	{
		return (str);
	}
	while (str[i_str] != '\0')
	{
		while (to_find[i_tofind] == str[i_str + i_tofind])
		{
			if (i_tofind + 1 == len)
			{
				return (str + i_str);
			}
			i_tofind++;
		}
		i_tofind = 0;
		i_str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0' )
	{
		index++;
	}
	return (index);
}
