/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:56:31 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/10 14:49:26 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome(int n) : _n(n) {}
		bool	operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
		bool	operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
		bool	operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
		bool	operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
		bool	operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
		bool	operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
		int		getN(void) const { return this->_n; }
};

std::ostream	&operator<<(std::ostream &o, Awesome const &awe)
{
    o << awe.getN();
    return o;
}

void test_sub(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    try
    {
        ++ite;
        --it;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void my_test(void)
{
    MutantStack<Awesome> awes;
    Awesome awes1(5);
    Awesome awes2(17);
    Awesome awes3(3);
    Awesome awes4(5);
    Awesome awes5(737);
    Awesome awes6(0);
    awes.push(awes1);
    awes.push(awes2);
    std::cout << "top: " << awes.top().getN() << std::endl;
    awes.pop();
    std::cout << "size: " << awes.size() << std::endl;
    awes.push(awes3);
    awes.push(awes4);
    awes.push(awes5);
    //[...]
    awes.push(awes6);
    MutantStack<Awesome>::iterator it = awes.begin();
    MutantStack<Awesome>::iterator ite = awes.end();
    ++it;
    --it;
    try
    {
        ++ite;
        --it;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<Awesome> s(awes);
}

int main()
{
    test_sub();
    my_test();
    return 0;
}
