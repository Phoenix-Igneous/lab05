//
// Created by fktrc on 16.05.19.
//

#ifndef BANKING_MOCKACCOUNT_H
#define BANKING_MOCKACCOUNT_H

#include <utility>
#include <ctype.h>
#include <cctype>

#include <typeinfo>
#include <typeindex>

#include <gmock/gmock.h>
#include <Account.h>

class MockAccount : public Account {
public:
    using Account::GetBalance;
    MockAccount(int id, int balance) : Account(id, balance) {}

    MOCK_CONST_METHOD0(GetBalance, int());
    MOCK_METHOD1(ChangeBalance, void(int diff));

    MOCK_METHOD0(Lock, void());
    MOCK_METHOD0(Unlock, void());
};

#endif //BANKING_MOCKACCOUNT_H
