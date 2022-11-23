/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:50:50 by lduheron          #+#    #+#             */
/*   Updated: 2022/11/23 14:54:14 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
		int	i;
		if (!(lst))
			return (0);
		i = 0;
		while (lst)
		{
			lst = lst-> next;
			i++;
		}
		return (i);
}
