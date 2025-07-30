#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void MySwap(ll &a, ll &b) {
    ll temp = a;
    a = b;
    b = temp;
}

string MyReverse(string s) {
    ll length = s.length();
    for (ll i = 0; i < length / 2; i++) {
        swap(s[i], s[length - i - 1]);
    }
    return s;
}

bool MyCompare(ll arr1[], ll arr2[], ll size1, ll size2) {
    if (size1 != size2) {
        return false;
    }
    for (ll i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

string BinAdd(string a, string b) {
    int num1 = stoi(a, nullptr, 2);
    int num2 = stoi(b, nullptr, 2);
    int sum = num1 + num2;
    //مش من عندي السطر ده هه
    return bitset<32>(sum).to_string().substr(bitset<32>(sum).to_string().find('1'));
}

ll binarySearch(vector<ll> &v, ll ele) {
    ll low = 0;
    ll high = v.size() - 1;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (ele == v[mid]) {
            return mid;
        }
        if (ele < v[mid]) {
            high = mid - 1;
        } else if (ele > v[mid]) {
            low = mid + 1;
        }
    }
    return -1;
}

void highest_3_Ele(vector<ll> &v) {
    sort(v.begin(), v.end(), greater<ll>());
    for (ll i = 0; i < 3; i++) {
        cout << v[i] << " ";
    }
}

int main() {
    //شيل الكومينت من علي اللي عايز تجربه عشان انا كسلت اعمل كل واحد لوحده

    //          // 1 Swap Two Numbers Using a Function.
    //          ll num1,num2;
    //          cin>>num1>>num2;
    //          MySwap(num1,num2);
    //          cout<<num1<<" "<<num2;
    // // ------------------------------------------
    //
    //          // 2 Reverse a Sentence.
    //          string s;
    //          getline(cin, s);
    //          // reverse(s.begin(),s.end());
    //          cout<<MyReverse(s);
    //
    // //-------------------------------------------
    //
    //          // 3 Two Arrays Are Equal or Not.
    //          ll m,n;
    //          cin>>m>>n;
    //          ll array1[m],array2[n];
    //          for (ll i = 0; i < m; i++) {
    //              cin>>array1[i];
    //          }
    //          for (ll i = 0; i < n; i++) {
    //              cin>>array2[i];
    //          }
    //          if (MyCompare(array1,array2,m,n)) {
    //              cout<<"Arrays are equal";
    //          }
    //          else {
    //              cout<<"Arrays are not equal";
    //          }
    // //-------------------------------------------
    //
    //          // 4 Add 2 Binary Strings.
    //          string string1,string2;
    //          cin>>string1>>string2;
    //          cout<<BinAdd(string1,string2);
    // //-------------------------------------------
    //
    //          // 5 Search an Element in an Array
    //          ll size3,Element;
    //          cin>>size3;
    //         vector<ll> v(size3);
    //          for (ll i = 0; i < size3; i++) {
    //              cin>>v[i];
    //          }
    //          cin>>Element;
    //          sort(v.begin(),v.end());
    //          ll index = binarySearch(v,Element);
    //          if (index ==-1) {
    //              cout<<"Not Found"<<endl;
    //          }
    //          else {
    //              //zero indexing
    //              cout<<"Found at index: "<<index<<endl;
    //          }
    // //-------------------------------------------
    //
    //      // 6 Find Permutations of a Given String.
    //      string per;
    //      cin>>per;
    //      do {
    //          cout<<per<<" ";
    //      }
    //      while(next_permutation(per.begin(),per.end()));
    // //-------------------------------------------
    //
    //      // 7 Top 3 Highest Numbers
    //      ll num;
    //      cin>>num;
    //      vector<ll> v2(num);
    //      for (ll i = 0; i < num; i++) {
    //          cin>>v2[i];
    //      }
    //      highest_3_Ele(v2);
    // //-------------------------------------------
    //
    //      // 8 Replace "dog" with "cat".
    //      string NoDogs;
    //      getline(cin, NoDogs);
    //      ll wordSize = NoDogs.length();
    //      for (ll i = 0; i < wordSize; i++) {
    //          if (NoDogs[i] == 'd'&&NoDogs[i+1] == 'o'&&NoDogs[i+2] == 'g') {
    //              NoDogs[i] = 'c';NoDogs[i+1] = 'a';NoDogs[i+2] = 't';
    //          }
    //      }
    //      cout <<NoDogs << endl;
}
