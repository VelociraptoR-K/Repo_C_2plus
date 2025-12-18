#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

namespace Tasks {

    void Problem5() {
        int N, suma{ 0 }, num;
        cin >> N;
        vector<int> sp;
        for (int i{ 0 }; i < N; i++) {
            cin >> num;
            sp.push_back(num);
        }
        int minimal = sp[0];
        for (auto el : sp) {
            if (el < minimal)
                minimal = el;
        }
        for (auto object : sp) {
            if (object == minimal)
                suma++;
        }
        cout << suma;
    }

    void Problem6() {
        int N;
        cin >> N;
        int fib_curr{ 1 }, fib_prev{ 0 }, i{ 1 };
        while (fib_curr < N) {
            int fib_next = fib_prev + fib_curr;
            fib_prev = fib_curr;
            fib_curr = fib_next;
            i++;
        }
        if (fib_curr == N)
            cout << i;
        else
            cout << -1;
    }

    void Problem7() {
        int a, b, result{ -1 };
        cin >> a >> b;
        for (int el = b; el >= a; el--) {
            if (el % 7 == 0) {
                result = el;
                break;
            }
        }
        cout << result;
    }

    void Problem8() {
        string dnk, res;
        cin >> dnk;
        res = "";
        for (auto el : dnk) {
            switch (el) {
                case 'A':
                    res += 'T';
                    break;
                case 'T':
                    res += 'A';
                    break;
                case 'C':
                    res += 'G';
                    break;
                default:
                    res += 'C';
                    break;
            }
        }
        cout << res;
    }

    void Problem9() {
        int N, i{1};
        cin >> N;
        while (i <= N) {
            cout << i << " ";
            i *= 2;
        }
    }

    void Problem10() {
        int N, num;
        cin >> N;
        vector<int> sp;
        for (int i{0}; i < N; i++) {
            cin >> num;
            sp.push_back(num);
        }
        int maximum = sp[0];
        for (auto el : sp) {
            if (el > maximum)
                maximum = el;
        }
        cout << maximum;
    }

    void Problem11() {
        int N, num, suma{0};
        cin >> N;
        for (int i{ 0 }; i < N; i++) {
            cin >> num;
            if (num > 0)
                suma += 1;
        }
        cout << suma;
    }

    void Problem12() {
        int n, num, suma{0};
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (abs(num) >= 10 && abs(num) <= 99 && num % 8 == 0)
                suma += num;
        }
        cout << suma;
    }

    void Problem13() {
        int n, c{0};
        vector<int> sp;
        while (true) {
            cin >> n;
            if (n == 0)
                break;
            sp.push_back(n);
        }
        for (auto el : sp){
            if (el == ranges::max(sp))
                c += 1;
        }
        cout << c;
    }

    void Problem14() {
        string a, b;
        cin >> a >> b;
        for (auto el : a) {
            if (b.find(el) != string::npos)
                cout << el << " ";
        }
    }
}

int main() {
    // ВЫЗОВЫ ВСЕХ РЕШЕНИЙ

    /*Tasks::Problem5();*/
    /*Tasks::Problem6();*/
    /*Tasks::Problem7();*/
    /*Tasks::Problem8();*/
    /*Tasks::Problem9();*/
    /*Tasks::Problem10();*/
    /*Tasks::Problem11();*/
    /*Tasks::Problem12();*/
    /*Tasks::Problem13();*/
    Tasks::Problem14();
    return 0;
}