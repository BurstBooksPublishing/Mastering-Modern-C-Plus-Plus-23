template 
typename Container::value_type getFirstElement(const Container& cont) {
    if (cont.empty()) throw std::out_of_range("Container is empty");
    return *cont.begin();
}