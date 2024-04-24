/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:09:33 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/24 18:09:33 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/zombie.hpp"

void randomChump( std::string name )
{
    //(void)name;
    Zombie createZombie(name);
    createZombie.announce();
}