/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:09:39 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/24 18:09:39 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/zombie.hpp"

int main (void)
{
    Zombie *d_zombi = newZombie("pepito");
    d_zombi->announce();

    randomChump("pedro");
    delete d_zombi;

    return 0;
}