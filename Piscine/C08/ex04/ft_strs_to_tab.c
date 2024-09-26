/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:01:32 by norabino          #+#    #+#             */
/*   Updated: 2024/09/26 10:41:29 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char	*str)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
#include <stdio.h>
	return (dup);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		printf("%s", av[i]);
		i ++;
	}
	return (s_stock_str);
}

int	main()
{
	char	*av[456] = {"allo", "ya", "dla", "merd", "dan", "ltono"};
	int		ac = 6;

	ft_strs_to_tab(ac, av);
}
