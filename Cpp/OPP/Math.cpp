#include <cmath>
int snt(int n) {
    if (n<2) {
        return 0;
    }
    for (int i=2; i<=std::sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}