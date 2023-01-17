/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wting <wting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:35:12 by wting             #+#    #+#             */
/*   Updated: 2023/01/17 22:45:11 by wting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubblesort(int *arr, int n)
{
	int	i;
	int	j;

	i = -1;
	while (++i < n - 1)
	{
		j = -1;
		while (++j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

void	indexing(t_stack *stack)
{
	int	*dup;
	int	i;
	int	j;

	i = -1;
	j = -1;
	dup = dup_arr(stack->a, stack->alen);
	bubblesort(dup, stack->alen);
	while (++i < stack->alen)
	{
		while (++j < stack->alen)
		{
			if (dup[j] == stack->a[i])
			{
				stack->a[i] = j;
				break ;
			}
		}
		j = -1;
	}
	free (dup);
}

void	bitcheck(t_stack *stack, int bitshift)
{
	int	tmp_bit;

	tmp_bit = (stack->a[0] >> bitshift) & 1;
	if (tmp_bit == 0)
		pb(stack, 1);
	else
		ra(stack, 1);
}

void	ps_radixsort(t_stack *stack)
{
	int	i;
	int	bitshift;
	int	len;

	bitshift = 0;
	i = -1;
	len = stack->alen;
	indexing(stack);
	while (!check_sorted(stack, 0))
	{
		while (++i < len)
			bitcheck(stack, bitshift);
		i = -1;
		while (stack->blen > 0)
			pa(stack, 1);
		++bitshift;
	}
}
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // Driver program to test above functions
// int main()
// {
//     int arr[] = { 5, 1, 4, 2, 8 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }