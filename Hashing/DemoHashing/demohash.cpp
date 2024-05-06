#include <iostream>
using namespace std;
#include <unordered_map>

int main()
{

    // creation of unordred map 
    unordered_map<string, int> m;

    // insertion
    pair<string, int> p = make_pair("Tushar", 2);
    m.insert(p);

    // 2 insertion
    pair<string, int> pair2("rajput", 3);
    m.insert(pair2);

    // 3 insertion
    m["mera"] = 1;


    //search
    cout << m["mera"] << endl;
    cout << m.at("rajput") << endl;


    // to check presence
    cout << m.count("rajput") << endl;

    // access map

    // for(auto i:m){
    //     cout << i.first << " " << i.second << endl;
    // }

    // iterator

    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<  it->first << " " << it->second << endl;
        it++;
    }
}