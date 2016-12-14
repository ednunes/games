#include "../include/board.hpp"
#include <gtest/gtest.h>

// Tests for verifyGameOver
TEST(verifyGameOverTest, EndGameFor9andFalse){
	Board board;
	std::cout << "9 and false" << std::endl;
	ASSERT_EQ(true, board.verifyGameOver(9,false));
}
TEST(verifyGameOverTest, EndGameFor13andFalse){
	Board board;
	std::cout << "13 and false" << std::endl;
	ASSERT_EQ(true, board.verifyGameOver(13,false));
}
TEST(verifyNotGameOverTest, NotEndGameFor8andFalse){
	Board board;
	std::cout << "8 and false" << std::endl;
	ASSERT_EQ(false, board.verifyGameOver(8,false));
}
TEST(verifyNotGameOverTest, NotEndGameFor8andTrue){
	Board board;
	std::cout << "8 and true" << std::endl;
	ASSERT_EQ(false, board.verifyGameOver(8,true));
}
TEST(verifyNotGameOverTest, NotEndGameFor9andTrue){
	Board board;
	std::cout << "9 and true" << std::endl;
	ASSERT_EQ(false, board.verifyGameOver(9,true));
}

int main(int argc, char **argv){
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}

