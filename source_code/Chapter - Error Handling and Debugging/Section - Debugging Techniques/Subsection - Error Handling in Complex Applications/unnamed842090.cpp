#include 
#include 

class BankingException : public std::runtime_error {
public:
    BankingException(const std::string& msg) : std::runtime_error(msg) {}
};

class InsufficientFundsException : public BankingException {
public:
    InsufficientFundsException() : BankingException("Insufficient funds") {}
};

class InvalidTransactionException : public BankingException {
public:
    InvalidTransactionException() : BankingException("Invalid transaction") {}
};

void processTransaction(double amount, double balance) {
    if (amount < 0) throw InvalidTransactionException();
    if (amount > balance) throw InsufficientFundsException();
    // Process transaction...
}