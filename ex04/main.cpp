/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:44:30 by emimenza          #+#    #+#             */
/*   Updated: 2024/04/27 19:44:30 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::string	line;
	size_t		pos;

	std::ifstream input(filename.c_str()); // Convert filename to const char*
	if (!input)
	{
		std::cerr << "Error: Couldn't open input file: " << filename << std::endl;
		return;
	}

	std::ofstream output((filename + ".replace").c_str()); // Convert filename to const char*
	if (!output)
	{
		std::cerr << "Error: Couldn't create output file." << std::endl;
		return;
	}

	while (std::getline(input, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		output << line << std::endl;
	}

	std::cout << "Replacement completed. Output written to " << filename << ".replace" << std::endl;
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	replaceStringInFile(filename, s1, s2);

	return 0;
}
