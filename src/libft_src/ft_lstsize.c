/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:07:21 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:54:09 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cpt;

	cpt = 0;
	while (lst != NULL)
	{
		cpt++;
		lst = lst -> next;
	}
	return (cpt);
}
