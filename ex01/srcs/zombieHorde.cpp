/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:21:42 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/24 19:21:42 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *new_zombie = new Zombie[N];
    int i = 0;

    while (i < N)
    {
        new_zombie[i].setName(name);
        i++;
    }
    return(new_zombie);
}