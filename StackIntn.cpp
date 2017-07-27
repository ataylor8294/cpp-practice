#include <vector>

using namespace std;
class ListNode
{
   public:
      int element;
      ListNode *next;
      ListNode(int theElement, ListNode * n= 0)
         : element( theElement), next(n) {}
};
class UnderFlowException {};
class IntStackn
{
   private:
      int back;
      vector<int> arr;
   public:
      IntStackn() : arr()
      {
      } 
      IntStackn(vector<int> a)
      {
         for (int i=0; i < a.size(); i++)
         {
           arr.push_back(a[i]);
         }
      }
      int size() const
      {
         return arr.size();
      }
      bool isEmpty () const
      {
       return arr.empty();
      }
      void clear()
      {
         arr.clear();
      }
      void push(int x)
      {
         arr.push_back(x);
      }
      int pop()
      {
      int end;
         if (isEmpty())
         {
            throw UnderFlowException();
         }
         end = arr[back];
         arr.pop_back();
         back--;
         return end;
      }
      int peek() const
      {
         int end;
         if (isEmpty())
         {
            throw UnderFlowException();
         }
         end = arr[back];
         return end;
      
      }
};
class IntStack
{
   private:
      ListNode *back;
      int sizes;
   public:
      IntStack() : back()
      {
      } 
      IntStack(const IntStack &rhs)
      {
         *this=rhs;
         sizes = rhs.size();
      }
      ~IntStack()
      {
      clear();
      }
      int size() const
      {
         return sizes;
      }
      bool isEmpty () const
      {
       return back==NULL;
      }
      void clear()
      {
         while (this->back!=NULL)
         {
            ListNode *tmp = back;
            back->next = back;
            delete tmp;
         }
      }
      void push(int x)
      {
         back = back->next = new ListNode(x);
      }
      int pop()
      {
      ListNode *tmp;
      int x;
         if (isEmpty())
         {
            throw UnderFlowException();
         }
         else
         {
            tmp = back;
            back->next = back;
            x = tmp->element;
         }
         delete tmp;
         return x;
      }
      int peek() const
      {
         int end;
         if (isEmpty())
         {
            throw UnderFlowException();
         }
         end = back->element;
         return end;
      
      }
};

int main()
{
}