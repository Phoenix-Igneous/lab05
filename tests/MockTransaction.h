//
// Created by fktrc on 16.05.19.
//

#ifndef BANKING_MOCKTRANSACTION_H
#define BANKING_MOCKTRANSACTION_H

#include <gmock/gmock.h>
#include <Transaction.h>
#include <Account.h>

class MockTransaction : public Transaction {
public:
    MOCK_METHOD3(SaveToDataBase, void(Account& from, Account& to, int sum));
};

#endif //BANKING_MOCKTRANSACTION_H
