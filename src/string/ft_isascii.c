/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:39:56 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/17 11:01:43 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*[TEST]*/
int main()
{
	int		a;

	for (a = 0; a < 130; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isascii(a) == isascii(a), ft_isascii(a), isascii(a)));
	return (0);
}