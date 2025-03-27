/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:08:14 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/27 10:55:34 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int		Account::getNbAccounts( void ){
		return _nbAccounts;
	}
int		Account::getTotalAmount( void ){
	return _totalAmount;
}
int		Account::getNbDeposits( void ){
	return _totalNbDeposits;
}
int		Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void ){
	return ;
}
Account::Account( int initial_deposit ){
	return ;
}
Account::~Account( void ){
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals;
	return ;
}
void	Account::makeDeposit( int deposit ){
	return ;
}
bool	Account::makeWithdrawal( int withdrawal ){
	return false;
}
int		Account::checkAmount( void ) const{
	return 0;
}
void	Account::displayStatus( void ) const{
	return ;
}
void	Account::_displayTimestamp( void ){
	return ;
}