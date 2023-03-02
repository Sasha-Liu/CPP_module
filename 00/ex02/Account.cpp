/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:38:13 by hsliu             #+#    #+#             */
/*   Updated: 2023/03/02 18:26:03 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <cstddef>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*
void	Account::_displayTimestamp( void )
{
	std::time_t time;
	char str[sizeof("[%Y%m%d_%H%M%S]")];

	time = std::time(NULL);
	std::strftime(str, sizeof("[%Y%m%d_%H%M%S]"), "[%Y%m%d_%H%M%S]", std::localtime(&time));
	std::cout << str << '\n';
}
*/

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << getNbAccounts()
			<< ";total:" << getTotalAmount()
			<< ";deposits:" << getNbDeposits()
			<< ";withdrawls:" << getNbWithdrawals()
			<< std::endl;
}

Account::Account( void )
	:_accountIndex(_nbAccounts),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;
}

Account::Account( int initial_deposit )
	:_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_nbDeposits -= this->_nbDeposits;
	_nbWithdrawals -= this->_nbWithdrawals;
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount
			<< ";nb_deposits:" << this->_nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused\n";
		return (1);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << withdrawal
				<< ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals
				<< std::endl;
		return (0);
	}
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawal:" << this->_nbWithdrawals
			<< std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}