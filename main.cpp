#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

set<string, greater<>> peop; 

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll n;
  cin >> n;
  while (0 < (n--)) {
    string a, b;
    cin >> a >> b;

    if ("enter" == b) {
      peop.insert(a);
    } else if ("leave" == b) {
      peop.erase(a);
    }
  }

  for (const auto& x : peop) {
    cout << x << '\n';
  }

  return 0;
}