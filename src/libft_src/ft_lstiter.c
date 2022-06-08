/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:51:26 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:54:23 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst ||!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
