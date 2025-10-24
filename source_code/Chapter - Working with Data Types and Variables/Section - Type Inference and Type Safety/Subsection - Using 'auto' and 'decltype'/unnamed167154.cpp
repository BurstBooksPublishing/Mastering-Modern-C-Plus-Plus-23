auto compare = [](auto a, auto b) -> decltype(a < b) {
    return a < b;
};