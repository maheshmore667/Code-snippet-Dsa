void sortedInsert(stack<int> &stack, int x) {
	if(stack.empty()|| stack.top() < x) {
		stack.push(x);
		return;
	}

	int num = stack.top();
	stack.pop();
	sortedInsert(stack, x);
	stack.push(num);

}
void sortStack(stack<int> &stack)
{
	if(stack.empty()) {
		return;
	}
	int num = stack.top();
	stack.pop();
	sortStack(stack);
	sortedInsert(stack, num);
}