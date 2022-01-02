#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> que;
	que.push(10);
	que.push(30);
	queue<int> sample=que;
	while(!sample.empty())
	{
		cout << sample.front() << " ";
		sample.pop();
	}
}
