#include <iostream>
#include <unordered_set>

using namespace std;
namespace {
int N, M;
unordered_set<int> uset;
}  // namespace

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  (void)freopen("input.txt", "r", stdin);

  cin >> N;
  uset.reserve(N);
  while (N--) {
    int val;
    cin >> val;
    uset.insert(val);
  }
  cin >> M;
  while (M--) {
    int val;
    cin >> val;
    cout << uset.count(val) << ' ';
  }
}