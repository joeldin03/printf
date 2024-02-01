/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:18:12 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/24 22:22:45 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*f_content;
	t_list	*new_n;
	t_list	*result;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		f_content = f(lst->content);
		new_n = ft_lstnew(f_content);
		if (!new_n)
		{
			ft_lstclear(&result, del);
			free(f_content);
			return (NULL);
		}
		ft_lstadd_back(&result, new_n);
		lst = lst->next;
	}
	return (result);
}
