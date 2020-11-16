/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:02:16 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/16 23:07:50 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*[TEST]*/
//////////////////////////////////////////////
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
////////////////////////////////////////

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*[TEST]*/
int		main()
{
	char	tab[] = {'e', '3', '2', '4', 'E'};
	int		a;

	for (a = 0; a < 5; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isalnum((int)tab[a]) == isalnum((int)tab[a])), ft_isalnum((int)tab[a]), isalnum((int)tab[a]));
	return (0);

}