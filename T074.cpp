/*
 
某餐馆有n张桌子，每张桌子有一个参数：a 可容纳的最大人数； 有m批客人，每批客人有两个参数:b人数，c预计消费金额。 在不允许拼桌的情况下，请实现一个算法选择其中一部分客人，使得总预计消费金额最大
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
 
struct guest {
    int num;
    int money;
};
bool cmp(guest a, guest b) {
    if (a.money == b.money) {
        return a.num < b.num;
    }
    return a.money > b.money;
}
int main() {
    using namespace std;
    int n, m;
    while (cin >> n >> m) {
        multiset<int> desk;
        vector<guest> people(m);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            desk.insert(temp);
        }
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            people[i].num = a;
            people[i].money = b;
        }
        sort(people.begin(), people.end(), cmp);
        for (int i = 0; i < m; i++) {
            if (desk.empty()) {
                break;
            }
            if (people[i].num <= *desk.rbegin()) {
                ans += people[i].money;
                desk.erase(desk.lower_bound(people[i].num));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
