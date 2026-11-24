#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;
namespace {
int N, M;
unordered_set<string> uset;
}  // namespace

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //(void)freopen("input.txt", "r", stdin);
  cin >> N >> M;
  uset.reserve(N);
  string str;
  while (N--) {
    cin >> str;
    uset.insert(str);
  }
  int cnt = 0;
  while (M--) {
    cin >> str;
    cnt += uset.count(str);
  }
  cout << cnt << '\n';
}