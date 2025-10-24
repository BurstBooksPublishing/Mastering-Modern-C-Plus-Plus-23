void problematic_function() {  // Should trigger violation
    // ... 21+ lines of logic ...
}

consteval int allowed_function() {  // Should be ignored
    return 42 * 2;
}