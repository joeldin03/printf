/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:02:56 by joelozan          #+#    #+#             */
/*   Updated: 2024/01/25 19:00:06 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	while (lst)
	{
		temp = lst;
		lst = lst->next;
		f(temp->content);
	}
}
/*
#include <stdio.h>
void print_str(void *data)
{
    printf("%s\n", (char *)data);
}

int main()
{
	t_list *lst = malloc(sizeof(t_list));
	lst->content = "a";
	lst->next = malloc(sizeof(t_list));
	lst->next->content = "b";
	lst->next->next = NULL;

	ft_lstiter(lst, print_str);

	t_list *current = lst;
	while (current)
	{
		t_list *temp = current;
        current = current->next;
        free(temp);
	}

	return 0;
}
*/