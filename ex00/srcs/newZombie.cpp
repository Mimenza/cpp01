/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:09:37 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/24 18:09:37 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *createZombie = new Zombie(name);
	return createZombie;
}