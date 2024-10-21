#include <iostream>
using namespace std;

class MagicNumber {
private:
    int number;
public:
    MagicNumber(int num) {
        number = num;
    }

    int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    bool isMagicNumber() {
        int ans = number;

        while (ans >= 10) {
            ans = sumOfDigits(ans);
        }
        // return ans == 1;
        int sol = (ans == 1) ? true:false;
        return sol;
    }

    void print() {
        if (isMagicNumber()) {
            cout << number << " is a magic number." << endl;
        } else {
            cout << number << " is not a magic number." << endl;
        }
    }
};

int main() {
    int num;
    cin >> num;
    MagicNumber magic(num);

    magic.print();

    return 0;
}
