#include <iostream>
#include <string>
#include <cassert>
#include <vector>
#include<algorithm>
#include <queue>
#include <stack>
using namespace std;
typedef long long ll;
#define line "\n"
#define Q " "
#define fakhr ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long


signed main() {
	fakhr
		/*
			queue  fifo
			q.push
			q.pop
			q.front() first element
			q.back()  last element
			q.size()
			q.empty()   T,F


		*/
		queue<int> q;
	q.push(4);
	q.push(8);
	q.push(30);
	q.push(45);

	// print Queue
	while (!q.empty()) {
		cout << q.front() << line;
		q.pop();
	}


	/*
		deque
		dq.push_back()
		dq.push_front()
		dq.pop_back()
		dq.pop_front()
		dq.size()
		dq.empty()
		dq.clear()

	*/
	deque<int> dq;
	dq.push_back(4); // 4
	dq.push_back(7); // 4 7
	dq.push_front(2); // 2 4 7
	dq.push_back(56); // 2 4 7 56
	dq.pop_back();
	// print deque 2 4 7
	for (int i = 0; i < dq.size(); i++) {
		cout << dq[i] << line;
	}

	/*
		priority queue

		pq.push
		pq.pop
		pq.top
		pq.size
		pq.empty


	*/




	/*	Stack
				
	
	
	
	*/
	stack<int> s;
	s.push(5);





















	//	int a; cin >> a;
	//vector <ll> v;
	//for (int i = 0; i < a; i++) {
	//	int x; cin >> x;
	//	v.push_back(x);
	//}
	//for (auto i : v) {
	//	cout << i << Q;
	//} cout << line;
	//cout << v.size() << line;
	//vector <int> v2(5, 4);
	//for (auto i : v2) {
	//	cout << i << Q;
	//} cout << line;// 4 4 4 4 4

	//v2.pop_back(); // 4 4 4 4
	//cout << v2.size() << line;

	//cout << line << line;
	//v.erase(v.begin() + 2); // remove elment arr[2] 
	//for (auto i : v) {
	//	cout << i << Q;
	//} cout << line;








	//vector <int> v = { 10,20,30,40,12 };
	//// forward iterator
	//vector <int> ::iterator it = v.begin();
	//while (it != v.end()) {
	//	cout << *it << line;
	//	it++;
	//}
	//cout << "Sort" << line;

 //  // sort(v.begin(), v.end());
	//sort(v.rbegin(), v.rend());
	//	for (auto i : v) {
	//		cout << i<<line;
	//	}



		// reverse iterator

	/*vector <int> ::reverse_iterator itt = v.rbegin();
	while (itt != v.rend()) {
		cout << *itt << line;
		it--;
	}
	*/

}
