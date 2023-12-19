

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "./src/main.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "./src/main.cpp2"

#line 3 "./src/main.cpp2"
auto part1(cpp2::in<bool> debugLog) -> void;

#line 13 "./src/main.cpp2"
auto part2(cpp2::in<bool> debugLog) -> void;

#line 17 "./src/main.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "./src/main.cpp2"

#line 3 "./src/main.cpp2"
auto part1(cpp2::in<bool> debugLog) -> void{
    std::ifstream input {std::ifstream("inputs/day19_debug1.txt")}; 
    if ((!(CPP2_UFCS(is_open)(std::move(input))))) {
        std::cout << "Failed to open file" << std::endl;
        return ; 
    }

    std::cout << "Part 1: " << "n/a" << std::endl;
}

auto part2(cpp2::in<bool> debugLog) -> void{
    std::cout << "Part 2: " << "n/a" << std::endl;
}

[[nodiscard]] auto main() -> int{
    part1(false);
    std::cout << std::endl;
    part2(false);

    return 0; 
}

