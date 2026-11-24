#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <unordered_set>
#include <vector>

using namespace std;

namespace {
int N, M;
unordered_set<string> unheard;
vector<string_view> answer;
}  // namespace

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //(void)freopen("input.txt", "r", stdin);

  cin >> N >> M;
  unheard.reserve(N);
  answer.reserve(min(N, M));
  string input;
  while (N--) {
    cin >> input;
    unheard.insert(input);
  }
  while (M--) {
    cin >> input;
    const auto it = unheard.find(input);
    if (it != unheard.end()) {
      answer.push_back(*it);
    }
  }
  sort(answer.begin(), answer.end());
  cout << answer.size() << '\n';
  for (const auto e : answer) {
    cout << e << '\n';
  }
}