/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:52:34 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/16 17:27:11 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*[TEST]*/
int main()
{
	char	tab[] = {"adsd 2@@## rWEF W FWf fwffwFW WF  WfwfwFWF"};
	int		a;

	for (a = 0; a < 43; a++)
		printf("%c \n", tolower((int)tab[a]));
	
	return (0);
}