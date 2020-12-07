#include"list.h"
int main() {
	list<char> u;
	char val;
	u.insert('S');
	u.insert('B');
	u.insert('F');
	u.insert('X');
	u.update('B', 'C');
	val = 'C';
	if (u.find(val)) {
		cout << val << " found" << endl;
	}
	else {
		cout << val << " not found" << endl;
	}
	list<char> u1(u);
	u.reset();
	while (!u.is_last()) {
		val = u.get_next();
		cout << val << " ";
	}
	cout << endl;
	u1.reset();
	while (!u1.is_last()) {
		val = u1.get_next();
		cout << val << " ";
	}
	cout << endl;
	list<char> u2;
	u2 = u1;
	u2.reset();
	while (!u2.is_last()) {
		val = u2.get_next();
		cout << val << " ";
	}
	cout << endl;
	return 0;
}