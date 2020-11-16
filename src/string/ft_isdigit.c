/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:32:51 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/16 22:50:58 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*[TEST]*/
int main()
{
	char	tab[] = {'e', '3', '2', '4', 'E'};
	int		a;

	for (a = 0; a < 5; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isdigit((int)tab[a]) == isdigit((int)tab[a])), ft_isdigit((int)tab[a]), isdigit((int)tab[a]));
	return (0);
}