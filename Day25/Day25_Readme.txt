Recursion:
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. 
Using recursive algorithm, certain problems can be solved quite easily. 
Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.

Tail Recursion: 
If a recursive function calling itself and that recursive call is the last statement in the function then it’s known as Tail Recursion. 
After that call the recursive function performs nothing. 
The function has to process or perform any operation at the time of calling and it does nothing at returning time.

Head Recursion:
If a recursive function calling itself and that recursive call is the first statement in the function then it’s known as Head Recursion.
There’s no statement, no operation before the call.
The function doesn’t have to process or perform any operation at the time of calling and all operations are done at returning time.