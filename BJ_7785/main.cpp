#include <iostream>
#include <set>
#include <string>

using namespace std;
namespace {
int N;
set<string> s;
string name, cmd;
}  // namespace

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //(void)freopen("input.txt", "r", stdin);
  cin >> N;
  while (N--) {
    cin >> name >> cmd;
    if (cmd == "enter") {
      s.insert(name);
    } else {
      s.erase(name);
    }
  }
  for (auto it = s.rbegin(), E = s.rend(); it != E; ++it) {
    cout << *it << '\n';
  }
}