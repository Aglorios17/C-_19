/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 18:32:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void test(int i)
{
    std::list<int>    lst;

    lst.push_back(1);
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(7);

    std::cout << " TEST With : " << i << " >> ";
    try{
        easyfind<std::list<int> > (lst, i);}
    catch (std::exception &e){
        std::cout << "Value not found." << std::endl;}
}

int main()
{
    std::cout << "LIST VALUE : 1, 3, 5, 7" << std::endl;
    test(1);
    test(2);
    test(3);
    test(4);
    test(5);

    return (0);
}
