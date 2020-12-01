/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:32:31 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/26 14:42:48 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

void test(int size)
{
    char string[] = "Hello there, \0\0\0\0\0\0\0\0\0\0";
    char buffer[] = "test\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(2);
    test(0);

    return(0);
}