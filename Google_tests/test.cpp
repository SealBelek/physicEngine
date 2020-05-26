//
// Created by sealbelek on 02.05.2020.
//

#include "gtest/gtest.h"
#include "../include/core.h"

class VectorTest : public ::testing::Test{
protected:
    void SetUp() override {
        v0_.setVector(1, 2, 3);
    }

    physicEngine::Vector3 v0_;
};

TEST_F(VectorTest, invert){
    v0_.invert();
    EXPECT_EQ(-1, v0_.getX());
    EXPECT_EQ(-2, v0_.getY());
    EXPECT_EQ(-3, v0_.getZ());
}

TEST_F(VectorTest, magnitude){
    EXPECT_FLOAT_EQ(3.741657387, v0_.magnitude());
}

TEST_F(VectorTest, squareMagnitude){
    EXPECT_FLOAT_EQ(pow(v0_.magnitude(), 2), v0_.squareMagnitude());
}

TEST_F(VectorTest, normolize){
    v0_.normalize();
    EXPECT_FLOAT_EQ(0.267261242, v0_.getX());
}

