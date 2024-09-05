#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
class Sum{
    int n;
public:
    Sum(int num){
        n=num;
    }
    int calculate() {
        
        long long sum = ((n) * (n + 1) / 2) % MOD;
        return sum;
    }

    void print(){
        cout<< calculate() << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Sum obj(n);
    obj.print();

    return 0;
}
