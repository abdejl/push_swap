/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:20:29 by abjellal          #+#    #+#             */
/*   Updated: 2025/02/02 11:20:29 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_split(char **split)
{
    int i = 0;

    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}
