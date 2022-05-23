void MyStack ::push(int x) 
{
    StackNode * temp =new StackNode(x);
    temp->next=top;
    top=temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top==NULL)
        return -1;
    StackNode*cur=top;
    top=top->next;
    int a=cur->data;
    delete cur;
    return a;
}
