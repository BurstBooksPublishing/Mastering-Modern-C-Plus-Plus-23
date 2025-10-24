std::atomic counter{0};

void increment() {
    counter.fetch_add(1, std::memory_order_seq_cst);
}

int load() {
    return counter.load(std::memory_order_seq_cst);
}