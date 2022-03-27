int     ft_check_input(char *str)
{
        int size;
        int i;

        size = 0;
        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= '1' && str[i] <= '4')
				{
					i++;
                    size++;
				}
                else if (str[i] == ' ')
					i++;
				else
					i++;
        }
        if (size != 16) 
                return (0);
        return (1);
}

