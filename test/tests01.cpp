#include <gtest/gtest.h>
#include "../include/transformer.h"

TEST(transformerTest, BasicReplacement) {
    std::string text = "Vader said: No, I am your father!";
    EXPECT_EQ(transformer(text, 2, 'a', 'o'), "Vader soid: No, I am your fother!");
}

TEST(transformerTest, NoReplacementWhenNIsZero) {
    std::string text = "hello world";
    EXPECT_EQ(transformer(text, 0, 'l', 'x'), "hello world");
}

TEST(transformerTest, NoReplacementWhenNGreaterThanOccurrences) {
    std::string text = "abcabcabc";
    EXPECT_EQ(transformer(text, 5, 'a', 'x'), "abcabcabc");
}

TEST(transformerTest, NegativeN) {
    std::string text = "test string";
    EXPECT_EQ(transformer(text, -3, 't', 'x'), "test string");
}

TEST(transformerTest, AllOccurrencesReplaced) {
    std::string text = "aaaaaa";
    EXPECT_EQ(transformer(text, 1, 'a', 'b'), "bbbbbb");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}