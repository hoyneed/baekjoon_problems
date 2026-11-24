#include <array>
#include <charconv>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

namespace {
constexpr int MAX_N = 100'001;
int N, M;
array<string, MAX_N> names;
unordered_map<string, int> order;
}  // namespace

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //(void)freopen("input.txt", "r", stdin);

  cin >> N >> M;
  for (int i = 1; i <= N; i++) {
    cin >> names[i];
    order[names[i]] = i;
  }
  string input;
  while (M--) {
    cin >> input;
    if ('0' <= input[0] && input[0] <= '9') {
      const int idx = stoi(input);
      cout << names[idx] << '\n';
    } else {
      cout << order[input] << '\n';
    }
  }
}