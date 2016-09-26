//============================================================= stack.h ======
//=  C++ class for a stack of integers data structure
//============================================================================
class stack
{
  private:
    int *s_array;       // Array of intergers for stack
    int size;           // Size of stack
    int top;            // Pointer to top element in stack

  public:
    stack(int length);  // Constructor allocates memory for s_array
    int get_top(void);  // Returns pointer to top (-1, ... size - 1)
    void push(int x);   // Pushes x onto stack
    int pop(void);      // Pops and returns popped value
    ~stack(void);       // Destructor frees memory for s_array
};
