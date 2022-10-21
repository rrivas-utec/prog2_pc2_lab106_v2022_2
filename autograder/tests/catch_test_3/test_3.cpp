//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P3.h"
using namespace std;

static void test_3() {
    question_3();
}

TEST_CASE("Question #3") {
    execute_test("test_3.in", test_3);
}