#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalAmount = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit ) :_accountIndex(this->getNbAccounts()),_amount(initial_deposit),_nbDeposits(0),_nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount+=initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" <<this->checkAmount() << ";" << "created" << std::endl;
}
Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" <<this->checkAmount() << ";" << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_totalAmount+=deposit;
	Account::_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
	this->_amount+=deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->checkAmount();
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if(withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount-=withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount-=withdrawal;
	std::cout << withdrawal << ";amount:" << this->checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);
    char timestamp[20];
    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", localTime);
	std::cout << "[" << timestamp <<"] ";
}

