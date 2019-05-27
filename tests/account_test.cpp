//
// Created by fktrc on 16.05.19.
//

#include <gtest/gtest.h>
#include <Account.h>

TEST(Account, Balance) {
    Account account(1, 200);
    EXPECT_EQ(account.GetBalance(), 200);

    account.Lock();
    account.ChangeBalance(-50);
    account.Unlock();
    EXPECT_EQ(account.GetBalance(), 150);
}
