#include <iostream>

// Compare each letter between s1 and s2 until there is a difference, return true if the s1 letter has a greater ASCII value
bool lexicographically_greater(const std::string &s1, const std::string &s2)
{
    return s1 > s2;
}
// Compare each letter between s1 and s2 until there is a difference, return true if the s1 letter has a smaller ASCII value
bool lexicographically_less(const std::string &s1, const std::string &s2)
{
    return s1 < s2;
}

int main() {
    std::cout << std::endl;

    std::cout << lexicographically_greater("AAB", "AAA") << "\n";
    std::cout << lexicographically_greater("ABA", "AAA") << "\n";
    std::cout << lexicographically_greater("BAA", "AAA") << "\n\n";  

    std::cout << lexicographically_greater("AAA", "zzz") << "\n\n";   // lower case letters have a larger ASCII value   

    std::cout << lexicographically_greater("BAA", "AZZ") << "\n";    
    std::cout << lexicographically_greater("ABA", "ZAZ") << "\n";       
    std::cout << lexicographically_greater("AAB", "ZZA") << "\n";       

    std::cout << std::endl;
    return 0;
}