#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";";
    std::cout << "created" << std::endl;
    return ;
};

Account::Account( void ) {
    return ;
}

Account::~Account( void ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    return ;
};

int	Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
};

int	Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
};

int	Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
};

int	Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
};

void	Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount;
    std::cout << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals;
    std::cout << std::endl;
    return ;
};

void	Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit; 
    this->_amount += deposit;
    this->_nbDeposits++;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits;
    std::cout << std::endl;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    return ;
};

bool	Account::makeWithdrawal( int withdrawal ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (this->_amount < withdrawal)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (0);
    }
    std::cout << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    return (1);
};

int		Account::checkAmount( void ) const {
    return (this->_amount);
};

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
};

void	Account::_displayTimestamp( void ) {
    time_t  now = time(0);
    tm      *local_time;

    local_time = localtime(&now);
    std::cout << "[" << 1900 + local_time->tm_year;
    std::cout << std::setfill('0') << std::setw(2) << 1 + local_time->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << local_time->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << 1 + local_time->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << 1 +local_time->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << 1 + local_time->tm_sec << "] ";
    return ;
};

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;