#include <string>
#include <vector>

void vector_reverse() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::vector<int> rev;
    for (std::size_t i = values.size(); i > 0; --i) rev.push_back(values[i - 1]);
    (void)rev;
}

void is_prime() {
    int n = 97;
    bool prime = (n > 1);
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) { prime = false; break; }
    }
    (void)prime;
}

void midpoint_value() {
    int a = 14, b = 30;
    int mid = (a + b) / 2;
    (void)mid;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

extern "C" int verdant_marble();
extern "C" void amber_cove();
extern "C" void bright_marble();
extern "C" void still_delta();

int main() {
    vector_reverse();
    is_prime();
    midpoint_value();
    text_contains();
    amber_cove();
    bright_marble();
    still_delta();
    return verdant_marble();
}
