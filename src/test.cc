#include <cppHead>

#include "mySql4cpp.hh"

using namespace std;
using namespace Mysql4cpp;

int main() {
    Mysql sql;
    bool a = sql.connect("localhost", "root", "123", "test", 0, nullptr, 0);
    cout << boolalpha << a << endl;

    a = sql.write("INSERT INTO t1 (col1,col2,col3,other_column) VALUES ('test','b','b','b')");
    cout << boolalpha << a << endl;
    if(!a) {
        cout << sql.getError() << endl;
    }

    pair<Result, bool> res = sql.read("SELECT * FROM t1");
    if(!res.second) {
        cout << sql.getError() << endl;
    }

    

    return 0;
}