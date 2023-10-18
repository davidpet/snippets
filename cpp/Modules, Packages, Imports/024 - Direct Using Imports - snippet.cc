#include <iostream>

using std::cout;

namespace bla {
    using std::endl;
}

int main() {
    cout << "Hi!" << bla::endl;

    return 0;
}
