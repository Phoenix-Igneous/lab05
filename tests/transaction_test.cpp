//
// Created by fktrc on 16.05.19.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <Transaction.h>
#include <MockAccount.h>
#include <MockTransaction.h>

using ::testing::AtLeast;
using ::testing::NiceMock;
using ::testing::_;
using ::testing::Return;
/*
TEST(Transaction, make_with_mock) {
    MockAccount account1(1, 200);
    MockAccount account2(2, 200);

    ON_CALL(account1, GetBalance()).WillByDefault(Return(200));
    ON_CALL(account2, GetBalance()).WillByDefault(Return(200));

    EXPECT_CALL(account1, Lock())
            .Times(AtLeast(1));
    EXPECT_CALL(account1, Unlock())
            .Times(AtLeast(1));
    EXPECT_CALL(account1, ChangeBalance(-151))
            .Times(AtLeast(1));
    EXPECT_CALL(account1, GetBalance())
            .Times(AtLeast(1));

    EXPECT_CALL(account2, Lock())
            .Times(AtLeast(1));
    EXPECT_CALL(account2, Unlock())
            .Times(AtLeast(1));
    EXPECT_CALL(account2, GetBalance())
            .Times(AtLeast(1));
    EXPECT_CALL(account2, ChangeBalance(150))
            .Times(AtLeast(1));

    Transaction transaction;
    transaction.Make(account1, account2, 150);
}

TEST(Transaction, make) {
    Account account1(1, 200);
    Account account2(2, 200);

    Transaction transaction;
    transaction.Make(account1, account2, 150);

    EXPECT_EQ(account1.GetBalance(), 49);
    EXPECT_EQ(account2.GetBalance(), 350);
}

TEST(Transaction, db) {
    NiceMock<MockAccount> account1(1, 200);
    NiceMock<MockAccount> account2(2, 200);
    NiceMock<MockTransaction> transaction;

    EXPECT_CALL(transaction, SaveToDataBase(account1, account2, 150))
            .Times(AtLeast(1));

    transaction.Make(account1, account2, 150);
}
*/