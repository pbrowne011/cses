#include <cstdio>
#include <set>

int main() {
    int n;
    scanf("%d", &n);
    
    std::set<long long> unique;
    long long x;
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x);
        unique.insert(x);
    }
    
    printf("%zu", unique.size());
    return 0;
}
