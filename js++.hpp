#include <iostream>
#include <format>

#define const const auto
#define let auto
#define var auto
#define undefined NULL
#define null NULL

#define AUTO1(a) auto a
#define AUTO2(a,b) auto a, auto b
#define AUTO3(a,b,c) auto a, auto b, auto c
#define AUTO4(a,b,c,d) auto a, auto b, auto c, auto d
#define GET_AUTO(_1,_2,_3,_4,NAME,...) NAME
#define AUTO(...) GET_AUTO(__VA_ARGS__, AUTO4, AUTO3, AUTO2, AUTO1)(__VA_ARGS__)
#define function(...) [](AUTO(__VA_ARGS__))

#define console std::cout
#define log(...) flags();std::cout << __VA_ARGS__ << std::endl;

#define new
#define Array(...) std::array{__VA_ARGS__}

#define String(X) std::format("{}", X);
#define length size()

int main() {

