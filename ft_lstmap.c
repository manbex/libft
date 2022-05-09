#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*cpy;

	new = 0;
	if (!f || !lst || !del)
		return (0);
	while (lst)
	{
		cpy = ft_lstnew(f(lst->content));
		if (!cpy)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, cpy);
		lst = lst->next;
	}
	return (new);
}
