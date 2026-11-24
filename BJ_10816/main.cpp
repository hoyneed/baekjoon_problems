#include <iostream>
#include <unordered_map>

using namespace std;
namespace {
int N, M;
unordered_map<int, int> umap;
}  // namespace

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //(void)freopen("input.txt", "r", stdin);
  cin >> N;
  umap.reserve(N);
  while (N--) {
    int val;
    cin >> val;
    ++umap[val];
  }
  cin >> M;
  while (M--) {
    int val;
    cin >> val;
    const auto it = umap.find(val);
    if (it == umap.end()) {
      cout << "0 ";
    } else {
      cout << it->second << ' ';
    }
  }
}