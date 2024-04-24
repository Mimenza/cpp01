/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:21:45 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/24 19:21:45 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Zombie.hpp"

int main (void)
{
    int i = 0;
    int n = 6;
    Zombie *arr_Zombie = zombieHorde(n, "pepe");

    while (i < n)
    {
        arr_Zombie[i].announce();
        i++;
    }
    delete[] arr_Zombie;
    return 0;
}